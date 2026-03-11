/*
 * func-name: ?first_process@Connect_Bluider_Process@IONetwork@Outpop@@QAEHXZ
 * func-address: 0x1003f730
 * callers: 0x1001dec0
 * callees: 0x10007400, 0x1003fba0
 */

int __thiscall Outpop::IONetwork::Connect_Bluider_Process::first_process(
        Outpop::IONetwork::Connect_Bluider_Process *this)
{
  int v1; // eax
  Outpop::Utility::Ref_Object *v2; // ebx
  int readable; // edi
  Outpop::Utility::Binary_Stream *v4; // eax
  Outpop::Utility::Ref_Object *v5; // esi
  Outpop::Utility::Binary_Stream *v6; // eax
  Outpop::Utility::Ref_Object *v7; // esi
  Outpop::Utility::Logger *v8; // eax
  wchar_t *v9; // ebp
  int v10; // eax
  int v11; // edi
  Outpop::Utility::Logger *v12; // eax
  Outpop::Utility::Logger *v13; // eax
  wchar_t *v14; // eax
  int v15; // eax
  Outpop::Utility::Logger *v16; // eax
  Outpop::Utility::Lock *v18; // ebp
  Outpop::Utility::Logger *v19; // eax
  wchar_t *log_buffer; // edi
  int v21; // eax
  int v22; // esi
  Outpop::Utility::Logger *v23; // eax
  Outpop::Utility::Logger *v24; // eax
  wchar_t *dt; // eax
  int v26; // eax
  Outpop::Utility::Logger *v27; // eax
  wchar_t *v28; // [esp-Ch] [ebp-48h]
  wchar_t *tm; // [esp-Ch] [ebp-48h]
  DWORD v30; // [esp-8h] [ebp-44h]
  DWORD CurrentProcessId; // [esp-8h] [ebp-44h]
  DWORD v32; // [esp-4h] [ebp-40h]
  DWORD CurrentThreadId; // [esp-4h] [ebp-40h]
  DWORD v34; // [esp+0h] [ebp-3Ch]
  DWORD LastError; // [esp+0h] [ebp-3Ch]
  int v36; // [esp+8h] [ebp-34h] BYREF
  Outpop::Utility::Ref_Object *v37; // [esp+Ch] [ebp-30h] BYREF
  int totallength; // [esp+10h] [ebp-2Ch]
  Outpop::Utility::Lock *v39; // [esp+20h] [ebp-1Ch]
  Outpop::Utility::Binary_Stream *v40; // [esp+24h] [ebp-18h]
  int *v41; // [esp+28h] [ebp-14h]
  Outpop::Utility::Lock *v42; // [esp+2Ch] [ebp-10h]
  Outpop::Utility::Ref_Object **v43; // [esp+30h] [ebp-Ch]
  int v44; // [esp+38h] [ebp-4h]
  _UNKNOWN *retaddr; // [esp+3Ch] [ebp+0h]

  v39 = this;
  v1 = *((_DWORD *)this + 1);
  v2 = 0;
  readable = 0;
  if ( *(_DWORD *)(v1 + 8) )
    readable = Outpop::Utility::Stream_Base::get_readable(*(Outpop::Utility::Stream_Base **)(v1 + 8));
  v4 = (Outpop::Utility::Binary_Stream *)Outpop::Utility::Binary_Stream::operator new(0x48u);
  v5 = v4;
  v40 = v4;
  v44 = 0;
  if ( v4 )
  {
    Outpop::Utility::Binary_Stream::Binary_Stream(v4, readable + 1000);
    *(_DWORD *)v5 = &Outpop::Utility::Binary_Stream::`vftable';
    v2 = v5;
  }
  v44 = -1;
  v40 = v2;
  if ( v2 )
    Outpop::Utility::Ref_Object::addref(v2);
  v44 = 1;
  v41 = &v36;
  v36 = (int)v2;
  if ( v2 )
    Outpop::Utility::Ref_Object::addref(v2);
  LOBYTE(v44) = 1;
  if ( !(unsigned __int8)Outpop::IONetwork::Connect_Bluider_Process::make_commit_data(v36) )
  {
    if ( (*(_BYTE *)(Outpop::Utility::Logger::instance() + 136) == 1
       || *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) == 1)
      && *(_BYTE *)(Outpop::Utility::Logger::instance() + 140) == 1 )
    {
      v18 = (Outpop::Utility::Lock *)(Outpop::Utility::Logger::instance() + 144);
      v42 = v18;
      Outpop::Utility::Lock::lock(v18);
      LOBYTE(v44) = 8;
      v19 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
      log_buffer = Outpop::Utility::Logger::get_log_buffer(v19);
      v21 = sub_10007400(0xFFFFu, log_buffer, L"\n%s", L"LOG_ERROR");
      v36 = 335;
      v22 = v21;
      LastError = GetLastError();
      CurrentThreadId = GetCurrentThreadId();
      CurrentProcessId = GetCurrentProcessId();
      v23 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
      tm = Outpop::Utility::Logger::make_tm(v23);
      v24 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
      dt = Outpop::Utility::Logger::make_dt(v24);
      v26 = sub_10007400(
              0xFFFF - v22,
              &log_buffer[v22],
              L" %s:%s PID:%d TID:%d EID:%d\n\tFILE:%s %d Line \n\tMessage:",
              dt,
              tm,
              CurrentProcessId,
              CurrentThreadId,
              LastError,
              L"D:\\R3\\OutpopGameProject\\IONetwork\\Bluider_Process.cpp");
      sub_10007400(
        0xFFFF - (v26 + v22),
        &log_buffer[v26 + v22],
        L"Connect_Bluider_Process::first_process  make_commit_data failed");
      if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 136) )
        wprintf(L"%s", log_buffer);
      if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) )
      {
        v36 = (int)log_buffer;
        v27 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
        Outpop::Utility::Logger::write_file(v27);
      }
      LOBYTE(v44) = 1;
      Outpop::Utility::Lock::unlock(v18);
    }
    v44 = -1;
    if ( !v2 )
      return -1;
LABEL_46:
    Outpop::Utility::Ref_Object::release(v2);
    return -1;
  }
  v6 = (Outpop::Utility::Binary_Stream *)Outpop::Utility::Binary_Stream::operator new(0x48u);
  v7 = v6;
  v41 = (int *)v6;
  LOBYTE(v44) = 3;
  if ( v6 )
  {
    Outpop::Utility::Binary_Stream::Binary_Stream(v6, 10);
    *(_DWORD *)v7 = &Outpop::Utility::Binary_Stream::`vftable';
  }
  else
  {
    v7 = 0;
  }
  LOBYTE(v44) = 1;
  v41 = (int *)v7;
  if ( v7 )
    Outpop::Utility::Ref_Object::addref(v7);
  LOBYTE(v44) = 4;
  v36 = 4;
  Outpop::Utility::Stream_Base::write(v7, "0001");
  v43 = &v37;
  v37 = v2;
  if ( v2 )
    Outpop::Utility::Ref_Object::addref(v2);
  LOBYTE(retaddr) = 4;
  Outpop::Utility::Binary_Stream::cont(v7, v37);
  totallength = 0;
  totallength = Outpop::Utility::Stream_Base::get_totallength(v7);
  v44 = (int)&v37;
  v37 = v7;
  if ( v7 )
    Outpop::Utility::Ref_Object::addref(v7);
  if ( (*(int (__thiscall **)(_DWORD, Outpop::Utility::Ref_Object *, int))(**((_DWORD **)v42 + 1) + 8))(
         *((_DWORD *)v42 + 1),
         v37,
         totallength) == -1 )
  {
    LOBYTE(v44) = 1;
    if ( v7 )
      Outpop::Utility::Ref_Object::release(v7);
    v44 = -1;
    if ( !v2 )
      return -1;
    goto LABEL_46;
  }
  if ( (*(_BYTE *)(Outpop::Utility::Logger::instance() + 136) == 1
     || *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) == 1)
    && *(_BYTE *)(Outpop::Utility::Logger::instance() + 138) == 1 )
  {
    v39 = (Outpop::Utility::Lock *)(Outpop::Utility::Logger::instance() + 144);
    Outpop::Utility::Lock::lock(v39);
    LOBYTE(v44) = 7;
    v8 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
    v9 = Outpop::Utility::Logger::get_log_buffer(v8);
    v10 = sub_10007400(0xFFFFu, v9, L"\n%s", L"LOG_DEBUG");
    v36 = 331;
    v11 = v10;
    v34 = GetLastError();
    v32 = GetCurrentThreadId();
    v30 = GetCurrentProcessId();
    v12 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
    v28 = Outpop::Utility::Logger::make_tm(v12);
    v13 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
    v14 = Outpop::Utility::Logger::make_dt(v13);
    v15 = sub_10007400(
            0xFFFF - v11,
            &v9[v11],
            L" %s:%s PID:%d TID:%d EID:%d\n\tFILE:%s %d Line \n\tMessage:",
            v14,
            v28,
            v30,
            v32,
            v34,
            L"D:\\R3\\OutpopGameProject\\IONetwork\\Bluider_Process.cpp");
    sub_10007400(0xFFFF - (v15 + v11), &v9[v15 + v11], L" Connect_Bluider_Process::first_process  sucess!");
    if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 136) )
      wprintf(L"%s", v9);
    if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) )
    {
      v36 = (int)v9;
      v16 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
      Outpop::Utility::Logger::write_file(v16);
    }
    LOBYTE(v44) = 4;
    Outpop::Utility::Lock::unlock(v39);
  }
  LOBYTE(v44) = 1;
  if ( v7 )
    Outpop::Utility::Ref_Object::release(v7);
  v44 = -1;
  if ( v2 )
    Outpop::Utility::Ref_Object::release(v2);
  return 0;
}
