/*
 * func-name: sub_10019660
 * func-address: 0x10019660
 * callers: none
 * callees: 0x100038e0, 0x10007400, 0x10016370, 0x1001acf0
 */

int __thiscall sub_10019660(int this, Outpop::Utility::Ref_Object *a2, Outpop::IONetwork::INET_Addr *a3, int a4)
{
  Outpop::Utility::Lock *v5; // ebx
  Outpop::Utility::Logger *v6; // eax
  wchar_t *log_buffer; // ebp
  int v8; // esi
  Outpop::Utility::Logger *v9; // eax
  Outpop::Utility::Logger *v10; // eax
  wchar_t *dt; // eax
  int v12; // esi
  int v13; // edx
  struct in_addr v14; // eax
  char *v15; // eax
  Outpop::Utility::Logger *v16; // eax
  int v17; // ebx
  Outpop::Utility::Lock *v18; // ebx
  Outpop::Utility::Logger *v19; // eax
  wchar_t *v20; // ebp
  int v21; // eax
  int v22; // esi
  Outpop::Utility::Logger *v23; // eax
  Outpop::Utility::Logger *v24; // eax
  wchar_t *v25; // eax
  int v26; // esi
  u_short v27; // ax
  struct in_addr v28; // ecx
  char *v29; // eax
  Outpop::Utility::Logger *v30; // eax
  wchar_t *tm; // [esp-18h] [ebp-84h]
  wchar_t *v33; // [esp-18h] [ebp-84h]
  DWORD CurrentProcessId; // [esp-14h] [ebp-80h]
  DWORD v35; // [esp-14h] [ebp-80h]
  DWORD CurrentThreadId; // [esp-10h] [ebp-7Ch]
  DWORD v37; // [esp-10h] [ebp-7Ch]
  DWORD LastError; // [esp-Ch] [ebp-78h]
  DWORD v39; // [esp-Ch] [ebp-78h]
  int v40; // [esp-8h] [ebp-74h] BYREF
  int v41; // [esp-4h] [ebp-70h]
  DWORD v42; // [esp+14h] [ebp-58h] BYREF
  DWORD v43; // [esp+18h] [ebp-54h]
  Outpop::IONetwork::INET_Addr *v44; // [esp+1Ch] [ebp-50h]
  int v45; // [esp+20h] [ebp-4Ch]
  Outpop::Utility::Lock *v46; // [esp+24h] [ebp-48h]
  _BYTE v47[28]; // [esp+28h] [ebp-44h] BYREF
  _BYTE v48[28]; // [esp+44h] [ebp-28h] BYREF
  int v49; // [esp+68h] [ebp-4h]

  v49 = 0;
  if ( (*(_BYTE *)(Outpop::Utility::Logger::instance() + 136) == 1
     || *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) == 1)
    && *(_BYTE *)(Outpop::Utility::Logger::instance() + 138) == 1 )
  {
    v5 = (Outpop::Utility::Lock *)(Outpop::Utility::Logger::instance() + 144);
    v44 = v5;
    Outpop::Utility::Lock::lock(v5);
    LOBYTE(v49) = 1;
    v6 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
    log_buffer = Outpop::Utility::Logger::get_log_buffer(v6);
    v8 = sub_10007400(0xFFFFu, log_buffer, L"\n%s", L"LOG_DEBUG");
    LastError = GetLastError();
    CurrentThreadId = GetCurrentThreadId();
    CurrentProcessId = GetCurrentProcessId();
    v9 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
    tm = Outpop::Utility::Logger::make_tm(v9);
    v10 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
    dt = Outpop::Utility::Logger::make_dt(v10);
    v12 = sub_10007400(
            0xFFFF - v8,
            &log_buffer[v8],
            L" %s:%s PID:%d TID:%d EID:%d\n\tFILE:%s %d Line \n\tMessage:",
            dt,
            tm,
            CurrentProcessId,
            CurrentThreadId,
            LastError,
            L"d:\\r3\\outpopgameproject\\ionetwork\\Channel_Bluider.h",
            278)
        + v8;
    v13 = ntohs(*(_WORD *)(this + 54));
    v14 = *(struct in_addr *)(this + 56);
    v41 = v13;
    v15 = inet_ntoa(v14);
    sub_10007400(
      0xFFFF - v12,
      &log_buffer[v12],
      L"Wait_Stream_Channel  asynch_recv_stream  ip is %S,port is %d",
      v15,
      v41);
    if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 136) )
      wprintf(L"%s", log_buffer);
    if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) )
    {
      v41 = (int)log_buffer;
      v16 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
      Outpop::Utility::Logger::write_file(v16);
    }
    LOBYTE(v49) = 0;
    Outpop::Utility::Lock::unlock(v5);
  }
  v17 = 0;
  v42 = 0;
  v45 = this;
  if ( this )
    Outpop::Utility::Ref_Object::addref((Outpop::Utility::Ref_Object *)this);
  LOBYTE(v49) = 2;
  v41 = a4;
  a4 = (int)&v40;
  v40 = this;
  if ( this )
    Outpop::Utility::Ref_Object::addref((Outpop::Utility::Ref_Object *)this);
  LOBYTE(v49) = 2;
  if ( sub_1001ACF0(this + 80, &a2, (DWORD)a3, &v42, v40, v41) == -1 )
  {
    a4 = -1;
    v43 = GetLastError();
    if ( (*(_BYTE *)(Outpop::Utility::Logger::instance() + 136) == 1
       || *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) == 1)
      && *(_BYTE *)(Outpop::Utility::Logger::instance() + 140) == 1 )
    {
      v18 = (Outpop::Utility::Lock *)(Outpop::Utility::Logger::instance() + 144);
      v46 = v18;
      Outpop::Utility::Lock::lock(v18);
      LOBYTE(v49) = 4;
      v19 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
      v20 = Outpop::Utility::Logger::get_log_buffer(v19);
      v21 = sub_10007400(0xFFFFu, v20, L"\n%s", L"LOG_ERROR");
      v41 = 288;
      v40 = (int)L"d:\\r3\\outpopgameproject\\ionetwork\\Channel_Bluider.h";
      v22 = v21;
      v39 = GetLastError();
      v37 = GetCurrentThreadId();
      v35 = GetCurrentProcessId();
      v23 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
      v33 = Outpop::Utility::Logger::make_tm(v23);
      v24 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
      v25 = Outpop::Utility::Logger::make_dt(v24);
      v26 = sub_10007400(
              0xFFFF - v22,
              &v20[v22],
              L" %s:%s PID:%d TID:%d EID:%d\n\tFILE:%s %d Line \n\tMessage:",
              v25,
              v33,
              v35,
              v37,
              v39)
          + v22;
      a3 = sub_10016370(this, (Outpop::IONetwork::INET_Addr *)v48);
      LOBYTE(v49) = 5;
      v44 = sub_10016370(this, (Outpop::IONetwork::INET_Addr *)v47);
      LOBYTE(v49) = 6;
      v27 = ntohs(*((_WORD *)a3 + 7));
      v41 = v43;
      v28 = (struct in_addr)*((_DWORD *)v44 + 4);
      v40 = v27;
      v29 = inet_ntoa(v28);
      sub_10007400(0xFFFF - v26, &v20[v26], L"asynch_receive  error:remoteaddr ip is %S,port is %d,error  is %d", v29);
      LOBYTE(v49) = 5;
      Outpop::IONetwork::INET_Addr::~INET_Addr((Outpop::IONetwork::INET_Addr *)v47);
      LOBYTE(v49) = 4;
      Outpop::IONetwork::INET_Addr::~INET_Addr((Outpop::IONetwork::INET_Addr *)v48);
      if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 136) )
        wprintf(L"%s", v20);
      if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) )
      {
        v41 = (int)v20;
        v30 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
        Outpop::Utility::Logger::write_file(v30);
      }
      LOBYTE(v49) = 2;
      Outpop::Utility::Lock::unlock(v18);
    }
    v17 = a4;
  }
  LOBYTE(v49) = 0;
  if ( this )
    Outpop::Utility::Ref_Object::release((Outpop::Utility::Ref_Object *)this);
  v49 = -1;
  if ( a2 )
    Outpop::Utility::Ref_Object::release(a2);
  return v17;
}
