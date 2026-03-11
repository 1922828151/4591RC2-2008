/*
 * func-name: ?insert_channel_to_map@Dgram_Acceptor@IONetwork@Outpop@@QAEXAAVINET_Addr@23@V?$Smart_Ptr@VDgram_Channel@IONetwork@Outpop@@@Utility@3@@Z
 * func-address: 0x10029880
 * callers: none
 * callees: 0x10003890, 0x10007400, 0x1002a530, 0x1002b630, 0x1003be30
 */

void __thiscall Outpop::IONetwork::Dgram_Acceptor::insert_channel_to_map(
        char *this,
        struct in_addr *a2,
        Outpop::Utility::Ref_Object *a3)
{
  char *v3; // esi
  Outpop::Utility::Lock *v4; // ebx
  Outpop::Utility::Logger *v5; // eax
  wchar_t *log_buffer; // edi
  int v7; // esi
  Outpop::Utility::Logger *v8; // eax
  Outpop::Utility::Logger *v9; // eax
  wchar_t *dt; // eax
  int v11; // esi
  char *v12; // eax
  Outpop::Utility::Logger *v13; // eax
  Outpop::Utility::Thread_Mutex *v14; // edi
  int v15; // eax
  int v16; // edx
  int v17; // eax
  int *v18; // eax
  int v19; // ecx
  int v20; // edx
  Outpop::Utility::Lock *v21; // ebx
  Outpop::Utility::Logger *v22; // eax
  wchar_t *v23; // edi
  int v24; // esi
  Outpop::Utility::Logger *v25; // eax
  Outpop::Utility::Logger *v26; // eax
  wchar_t *v27; // eax
  int v28; // esi
  char *v29; // eax
  Outpop::Utility::Logger *v30; // eax
  wchar_t *tm; // [esp-18h] [ebp-78h]
  wchar_t *v32; // [esp-18h] [ebp-78h]
  DWORD CurrentProcessId; // [esp-14h] [ebp-74h]
  DWORD v34; // [esp-14h] [ebp-74h]
  DWORD CurrentThreadId; // [esp-10h] [ebp-70h]
  DWORD v36; // [esp-10h] [ebp-70h]
  DWORD LastError; // [esp-Ch] [ebp-6Ch]
  DWORD v38; // [esp-Ch] [ebp-6Ch]
  int v39; // [esp-4h] [ebp-64h]
  int v40; // [esp-4h] [ebp-64h]
  Outpop::Utility::Thread_Mutex *v42; // [esp+14h] [ebp-4Ch]
  int v43; // [esp+1Ch] [ebp-44h] BYREF
  int v44; // [esp+20h] [ebp-40h]
  int v45; // [esp+24h] [ebp-3Ch]
  char v46[12]; // [esp+28h] [ebp-38h] BYREF
  _BYTE v47[8]; // [esp+34h] [ebp-2Ch] BYREF
  Outpop::Utility::Ref_Object *v48; // [esp+3Ch] [ebp-24h]
  char v49[8]; // [esp+44h] [ebp-1Ch] BYREF
  Outpop::Utility::Ref_Object *v50; // [esp+4Ch] [ebp-14h]
  int v51; // [esp+5Ch] [ebp-4h]

  v3 = this;
  v51 = 0;
  if ( (*(_BYTE *)(Outpop::Utility::Logger::instance() + 136) == 1
     || *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) == 1)
    && *(_BYTE *)(Outpop::Utility::Logger::instance() + 138) == 1 )
  {
    v4 = (Outpop::Utility::Lock *)(Outpop::Utility::Logger::instance() + 144);
    Outpop::Utility::Lock::lock(v4);
    LOBYTE(v51) = 1;
    v5 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
    log_buffer = Outpop::Utility::Logger::get_log_buffer(v5);
    v7 = sub_10007400(0xFFFFu, log_buffer, L"\n%s", L"LOG_DEBUG");
    LastError = GetLastError();
    CurrentThreadId = GetCurrentThreadId();
    CurrentProcessId = GetCurrentProcessId();
    v8 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
    tm = Outpop::Utility::Logger::make_tm(v8);
    v9 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
    dt = Outpop::Utility::Logger::make_dt(v9);
    v11 = sub_10007400(
            0xFFFF - v7,
            &log_buffer[v7],
            L" %s:%s PID:%d TID:%d EID:%d\n\tFILE:%s %d Line \n\tMessage:",
            dt,
            tm,
            CurrentProcessId,
            CurrentThreadId,
            LastError,
            L"D:\\R3\\OutpopGameProject\\IONetwork\\Dgram_Acceptor.cpp",
            495)
        + v7;
    v39 = ntohs(a2[3].S_un.S_un_w.s_w2);
    v12 = inet_ntoa(a2[4]);
    sub_10007400(
      0xFFFF - v11,
      &log_buffer[v11],
      L"start Dgram_Acceptor::insert_channel_to_map  addr ip is %S,port is %d",
      v12,
      v39);
    if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 136) )
      wprintf(L"%s", log_buffer);
    if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) )
    {
      v13 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
      Outpop::Utility::Logger::write_file(v13);
    }
    LOBYTE(v51) = 0;
    Outpop::Utility::Lock::unlock(v4);
    v3 = this;
  }
  v14 = (Outpop::Utility::Thread_Mutex *)(v3 + 184);
  v42 = (Outpop::Utility::Thread_Mutex *)(v3 + 184);
  LOBYTE(v51) = 2;
  if ( Outpop::Utility::Thread_Mutex::acquire((Outpop::Utility::Thread_Mutex *)(v3 + 184)) )
  {
    v15 = Outpop::IONetwork::INET_Addr::hash64((Outpop::IONetwork::INET_Addr *)a2);
    v44 = v16;
    v43 = v15;
    v17 = sub_1002B630(v49, &v43, &a3);
    LOBYTE(v51) = 3;
    sub_1003BE30(v47, v17);
    LOBYTE(v51) = 4;
    v18 = (int *)sub_1002A530(v3 + 248, v46, v47);
    v19 = v18[1];
    v43 = *v18;
    v20 = v18[2];
    v44 = v19;
    v45 = v20;
    LOBYTE(v51) = 3;
    if ( v48 )
      Outpop::Utility::Ref_Object::release(v48);
    LOBYTE(v51) = 2;
    if ( v50 )
      Outpop::Utility::Ref_Object::release(v50);
    if ( !(_BYTE)v45
      && (*(_BYTE *)(Outpop::Utility::Logger::instance() + 136) == 1
       || *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) == 1)
      && *(_BYTE *)(Outpop::Utility::Logger::instance() + 140) == 1 )
    {
      v21 = (Outpop::Utility::Lock *)(Outpop::Utility::Logger::instance() + 144);
      Outpop::Utility::Lock::lock(v21);
      LOBYTE(v51) = 7;
      v22 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
      v23 = Outpop::Utility::Logger::get_log_buffer(v22);
      v24 = sub_10007400(0xFFFFu, v23, L"\n%s", L"LOG_ERROR");
      v38 = GetLastError();
      v36 = GetCurrentThreadId();
      v34 = GetCurrentProcessId();
      v25 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
      v32 = Outpop::Utility::Logger::make_tm(v25);
      v26 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
      v27 = Outpop::Utility::Logger::make_dt(v26);
      v28 = sub_10007400(
              0xFFFF - v24,
              &v23[v24],
              L" %s:%s PID:%d TID:%d EID:%d\n\tFILE:%s %d Line \n\tMessage:",
              v27,
              v32,
              v34,
              v36,
              v38,
              L"D:\\R3\\OutpopGameProject\\IONetwork\\Dgram_Acceptor.cpp",
              504)
          + v24;
      v40 = ntohs(a2[3].S_un.S_un_w.s_w2);
      v29 = inet_ntoa(a2[4]);
      sub_10007400(
        0xFFFF - v28,
        &v23[v28],
        L"Dgram_Acceptor::insert_channel_to_map  faield,ip is %S,port is %d",
        v29,
        v40);
      if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 136) )
        wprintf(L"%s", v23);
      if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) )
      {
        v30 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
        Outpop::Utility::Logger::write_file(v30);
      }
      LOBYTE(v51) = 2;
      Outpop::Utility::Lock::unlock(v21);
      v14 = v42;
    }
    LOBYTE(v51) = 0;
    Outpop::Utility::Thread_Mutex::release(v14);
    v51 = -1;
  }
  else
  {
    v51 = -1;
  }
  if ( a3 )
    Outpop::Utility::Ref_Object::release(a3);
}
