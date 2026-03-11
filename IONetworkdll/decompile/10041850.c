/*
 * func-name: ?first_process@Dgram_Connect_Bluider_Process@IONetwork@Outpop@@QAE_NXZ
 * func-address: 0x10041850
 * callers: 0x10036c20
 * callees: 0x10007400, 0x10038ad0, 0x10041b20, 0x1004f124
 */

char __thiscall Outpop::IONetwork::Dgram_Connect_Bluider_Process::first_process(
        Outpop::IONetwork::Dgram_Connect_Bluider_Process *this)
{
  Outpop::Utility::Stream_Base *v2; // ecx
  int readable; // ebx
  Outpop::Utility::Binary_Stream *v4; // eax
  Outpop::Utility::Stream_Base *v5; // edi
  char *base_ptr; // eax
  _DWORD *v7; // eax
  Outpop::Utility::Ref_Object *v8; // ecx
  Outpop::Utility::Lock *v9; // ebx
  Outpop::Utility::Logger *v10; // eax
  wchar_t *log_buffer; // ebp
  int v12; // eax
  int v13; // esi
  Outpop::Utility::Logger *v14; // eax
  Outpop::Utility::Logger *v15; // eax
  wchar_t *dt; // eax
  int v17; // eax
  Outpop::Utility::Logger *v18; // eax
  wchar_t *tm; // [esp-18h] [ebp-4Ch]
  DWORD CurrentProcessId; // [esp-14h] [ebp-48h]
  DWORD CurrentThreadId; // [esp-10h] [ebp-44h]
  DWORD LastError; // [esp-Ch] [ebp-40h]
  size_t space; // [esp-4h] [ebp-38h] BYREF
  Outpop::Utility::Stream_Base *v25; // [esp+14h] [ebp-20h] BYREF
  size_t *p_space; // [esp+18h] [ebp-1Ch]
  _DWORD v27[3]; // [esp+1Ch] [ebp-18h] BYREF
  int v28; // [esp+30h] [ebp-4h]

  v2 = (Outpop::Utility::Stream_Base *)*((_DWORD *)this + 17);
  readable = 0;
  if ( v2 )
    readable = Outpop::Utility::Stream_Base::get_readable(v2);
  v4 = (Outpop::Utility::Binary_Stream *)Outpop::Utility::Binary_Stream::operator new(0x48u);
  v5 = v4;
  p_space = (size_t *)v4;
  v28 = 0;
  if ( v4 )
  {
    Outpop::Utility::Binary_Stream::Binary_Stream(v4, readable + 1000);
    *(_DWORD *)v5 = &Outpop::Utility::Binary_Stream::`vftable';
  }
  else
  {
    v5 = 0;
  }
  v28 = -1;
  v25 = v5;
  if ( v5 )
    Outpop::Utility::Ref_Object::addref(v5);
  v28 = 1;
  space = Outpop::Utility::Stream_Base::get_space(v5);
  base_ptr = Outpop::Utility::Stream_Base::get_base_ptr(v5);
  memset(base_ptr, 0, space);
  p_space = &space;
  space = (size_t)v5;
  if ( v5 )
    Outpop::Utility::Ref_Object::addref(v5);
  LOBYTE(v28) = 1;
  if ( !(unsigned __int8)Outpop::IONetwork::Dgram_Connect_Bluider_Process::make_commit_data(space) )
    goto LABEL_24;
  v7 = (_DWORD *)Outpop::Utility::Time_Value::gettimeofday(v27);
  LOBYTE(v28) = 3;
  *((_DWORD *)this + 15) = *v7;
  *((_DWORD *)this + 16) = v7[1];
  LOBYTE(v28) = 1;
  Outpop::Utility::Time_Value::~Time_Value((Outpop::Utility::Time_Value *)v27);
  v8 = (Outpop::Utility::Ref_Object *)*((_DWORD *)this + 13);
  if ( v8 )
    Outpop::Utility::Ref_Object::release(v8);
  *((_DWORD *)this + 13) = v5;
  if ( v5 )
    Outpop::Utility::Ref_Object::addref(v5);
  if ( Outpop::IONetwork::Dgram_Connector::asynch_send_to(*((_DWORD **)this + 10), &v25, (int)this + 8, 0) == -1 )
  {
    p_space = (size_t *)GetLastError();
    if ( (*(_BYTE *)(Outpop::Utility::Logger::instance() + 136) == 1
       || *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) == 1)
      && *(_BYTE *)(Outpop::Utility::Logger::instance() + 140) == 1 )
    {
      v9 = (Outpop::Utility::Lock *)(Outpop::Utility::Logger::instance() + 144);
      v27[0] = v9;
      Outpop::Utility::Lock::lock(v9);
      LOBYTE(v28) = 4;
      v10 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
      log_buffer = Outpop::Utility::Logger::get_log_buffer(v10);
      v12 = sub_10007400(0xFFFFu, log_buffer, L"\n%s", L"LOG_ERROR");
      space = 690;
      v13 = v12;
      LastError = GetLastError();
      CurrentThreadId = GetCurrentThreadId();
      CurrentProcessId = GetCurrentProcessId();
      v14 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
      tm = Outpop::Utility::Logger::make_tm(v14);
      v15 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
      dt = Outpop::Utility::Logger::make_dt(v15);
      v17 = sub_10007400(
              0xFFFF - v13,
              &log_buffer[v13],
              L" %s:%s PID:%d TID:%d EID:%d\n\tFILE:%s %d Line \n\tMessage:",
              dt,
              tm,
              CurrentProcessId,
              CurrentThreadId,
              LastError,
              L"D:\\R3\\OutpopGameProject\\IONetwork\\Bluider_Process.cpp");
      sub_10007400(
        0xFFFF - (v17 + v13),
        &log_buffer[v17 + v13],
        L"Dgram_Connect_Bluider_Process::first_process asynch_send_to Error,Errorcode is %d",
        p_space);
      if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 136) )
        wprintf(L"%s", log_buffer);
      if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) )
      {
        space = (size_t)log_buffer;
        v18 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
        Outpop::Utility::Logger::write_file(v18);
      }
      LOBYTE(v28) = 1;
      Outpop::Utility::Lock::unlock(v9);
    }
LABEL_24:
    v28 = -1;
    if ( v5 )
      Outpop::Utility::Ref_Object::release(v5);
    return 0;
  }
  v28 = -1;
  if ( v5 )
    Outpop::Utility::Ref_Object::release(v5);
  return 1;
}
