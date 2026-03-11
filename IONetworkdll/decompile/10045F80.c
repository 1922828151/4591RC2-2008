/*
 * func-name: ?send_test_packet@P2P_Channel@IONetwork@Outpop@@QAEXV?$Smart_Ptr@VBinary_Stream@Utility@Outpop@@@Utility@3@@Z
 * func-address: 0x10045f80
 * callers: 0x1004ccb0
 * callees: 0x10007400, 0x10009580, 0x10009930, 0x1004bb00
 */

void __thiscall Outpop::IONetwork::P2P_Channel::send_test_packet(
        struct in_addr *this,
        Outpop::Utility::Stream_Base *a2)
{
  Outpop::Utility::Logger *v3; // eax
  wchar_t *log_buffer; // ebp
  int v5; // esi
  Outpop::Utility::Logger *v6; // eax
  Outpop::Utility::Logger *v7; // eax
  wchar_t *dt; // eax
  int v9; // esi
  u_short v10; // bx
  char *v11; // eax
  Outpop::Utility::Stream_Base *S_addr; // edx
  bool v13; // cf
  wchar_t *v14; // ecx
  Outpop::Utility::Ref_Object *v15; // ebx
  int readable; // eax
  Outpop::Utility::Logger *v17; // eax
  Outpop::Utility::Ref_Object *v18; // ecx
  Outpop::Utility::Stream_Base *v19; // esi
  int v20; // eax
  Outpop::Utility::Ref_Object *v21; // ebp
  const char *ptr; // eax
  Outpop::Utility::Ref_Object *v23; // ecx
  struct in_addr *v24; // eax
  char v25[8]; // [esp-24h] [ebp-5Ch] BYREF
  int v26; // [esp-1Ch] [ebp-54h]
  wchar_t *tm; // [esp-18h] [ebp-50h]
  DWORD CurrentProcessId; // [esp-14h] [ebp-4Ch]
  DWORD CurrentThreadId; // [esp-10h] [ebp-48h]
  DWORD LastError; // [esp-Ch] [ebp-44h]
  char *v31; // [esp-8h] [ebp-40h]
  wchar_t *v32; // [esp-4h] [ebp-3Ch]
  char v33; // [esp+17h] [ebp-21h] BYREF
  Outpop::Utility::Stream_Base *v34; // [esp+18h] [ebp-20h] BYREF
  struct in_addr *v35; // [esp+1Ch] [ebp-1Ch]
  Outpop::Utility::Stream_Base *v36[3]; // [esp+20h] [ebp-18h] BYREF
  int v37; // [esp+34h] [ebp-4h]

  v37 = 0;
  if ( (*(_BYTE *)(Outpop::Utility::Logger::instance() + 136) == 1
     || *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) == 1)
    && *(_BYTE *)(Outpop::Utility::Logger::instance() + 138) == 1 )
  {
    v36[0] = (Outpop::Utility::Stream_Base *)(Outpop::Utility::Logger::instance() + 144);
    Outpop::Utility::Lock::lock(v36[0]);
    LOBYTE(v37) = 1;
    v3 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
    log_buffer = Outpop::Utility::Logger::get_log_buffer(v3);
    v5 = sub_10007400(0xFFFFu, log_buffer, L"\n%s", L"LOG_DEBUG");
    LastError = GetLastError();
    CurrentThreadId = GetCurrentThreadId();
    CurrentProcessId = GetCurrentProcessId();
    v6 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
    tm = Outpop::Utility::Logger::make_tm(v6);
    v7 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
    dt = Outpop::Utility::Logger::make_dt(v7);
    v9 = sub_10007400(
           0xFFFF - v5,
           &log_buffer[v5],
           L" %s:%s PID:%d TID:%d EID:%d\n\tFILE:%s %d Line \n\tMessage:",
           dt,
           tm,
           CurrentProcessId,
           CurrentThreadId,
           LastError,
           L"D:\\R3\\OutpopGameProject\\IONetwork\\P2P_Channel.cpp",
           781)
       + v5;
    v10 = ntohs(this[23].S_un.S_un_w.s_w2);
    v11 = inet_ntoa(this[24]);
    if ( this[172].S_un.S_addr < 0x10 )
      S_addr = (Outpop::Utility::Stream_Base *)&this[167];
    else
      S_addr = (Outpop::Utility::Stream_Base *)this[167].S_un.S_addr;
    v13 = this[165].S_un.S_addr < 0x10;
    v34 = S_addr;
    if ( v13 )
      v35 = this + 160;
    else
      v35 = (struct in_addr *)this[160].S_un.S_addr;
    v14 = (wchar_t *)v10;
    v15 = a2;
    v32 = v14;
    v31 = v11;
    readable = Outpop::Utility::Stream_Base::get_readable(a2);
    sub_10007400(
      0xFFFF - v9,
      &log_buffer[v9],
      L"P2P_Channel::send_test_packet localname is %S,remotename  is %S, stream len is %d,channel remote ip  is %S, port is %d",
      v35,
      v34,
      readable,
      v31,
      v32);
    if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 136) )
      wprintf(L"%s", log_buffer);
    if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) )
    {
      v32 = log_buffer;
      v17 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
      Outpop::Utility::Logger::write_file(v17);
    }
    LOBYTE(v37) = 0;
    Outpop::Utility::Lock::unlock(v36[0]);
  }
  else
  {
    v15 = a2;
  }
  v18 = (Outpop::Utility::Ref_Object *)this[174].S_un.S_addr;
  if ( v18 )
    Outpop::Utility::Ref_Object::release(v18);
  this[174].S_un.S_addr = (ULONG)v15;
  if ( v15 )
    Outpop::Utility::Ref_Object::addref(v15);
  v19 = (Outpop::Utility::Stream_Base *)Outpop::Utility::Binary_Stream::operator new(0x48u);
  v36[0] = v19;
  LOBYTE(v37) = 2;
  if ( v19 )
  {
    v20 = Outpop::Utility::Stream_Base::get_readable(v15);
    Outpop::Utility::Binary_Stream::Binary_Stream(v19, v20 + 20);
    *(_DWORD *)v19 = &Outpop::Utility::Binary_Stream::`vftable';
  }
  else
  {
    v19 = 0;
  }
  LOBYTE(v37) = 0;
  v21 = v19;
  v34 = v19;
  if ( v19 )
    Outpop::Utility::Ref_Object::addref(v19);
  LOBYTE(v37) = 3;
  v33 = 2;
  sub_10009930((int *)v19, &v33);
  Outpop::Utility::Stream_Base::get_readable(v15);
  ptr = Outpop::Utility::Stream_Base::get_read_ptr(v15);
  Outpop::Utility::Stream_Base::write(v19, ptr);
  Outpop::IONetwork::Dgram_Protocol_Head_Process::make_head(v36, &v34, 2, 0, 1, 0, 0);
  LOBYTE(v37) = 3;
  if ( v36[0] )
    Outpop::Utility::Ref_Object::release(v36[0]);
  v23 = (Outpop::Utility::Ref_Object *)this[155].S_un.S_addr;
  if ( v23 )
    Outpop::Utility::Ref_Object::release(v23);
  this[155].S_un.S_addr = (ULONG)v19;
  if ( v19 )
    Outpop::Utility::Ref_Object::addref(v19);
  InterlockedIncrement((volatile LONG *)&this[154]);
  v24 = (struct in_addr *)Outpop::Utility::Time_Value::gettimeofday(v36);
  LOBYTE(v37) = 5;
  this[176] = *v24;
  this[177] = v24[1];
  LOBYTE(v37) = 3;
  Outpop::Utility::Time_Value::~Time_Value((Outpop::Utility::Time_Value *)v36);
  if ( this[45].S_un.S_addr )
  {
    v32 = 0;
    v31 = 0;
    v36[0] = (Outpop::Utility::Stream_Base *)v25;
    std::string::string(&this[159]);
    LOBYTE(v37) = 3;
    Outpop::IONetwork::P2PUdpBuilder::asynch_send_to(
      &v34,
      &this[20],
      v25[0],
      v25[4],
      v26,
      tm,
      CurrentProcessId,
      CurrentThreadId,
      LastError,
      (char)v31,
      v32);
    v21 = v34;
  }
  LOBYTE(v37) = 0;
  if ( v21 )
    Outpop::Utility::Ref_Object::release(v21);
  v37 = -1;
  if ( v15 )
    Outpop::Utility::Ref_Object::release(v15);
}
