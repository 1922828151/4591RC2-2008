/*
 * func-name: sub_100014F0
 * func-address: 0x100014f0
 * callers: 0x10003100
 * callees: 0x1000a570, 0x1000ab00, 0x1000cc10, 0x100232f7
 */

void __fastcall sub_100014F0(int a1, Outpop::IONetwork::INET_Addr *a2, Outpop::Utility::Ref_Object **a3)
{
  Outpop::Utility::Ref_Object **v3; // esi
  SOCKET v6; // esi
  Outpop::Utility::Lock *v7; // ebx
  Outpop::Utility::Logger *v8; // eax
  wchar_t *log_buffer; // edi
  int v10; // esi
  Outpop::Utility::Logger *v11; // eax
  Outpop::Utility::Logger *v12; // eax
  wchar_t *dt; // eax
  int v14; // eax
  Outpop::Utility::Logger *v15; // eax
  Outpop::Utility::Lock *v16; // ecx
  const struct sockaddr *v17; // eax
  Outpop::Utility::Logger *v18; // eax
  int v19; // esi
  Outpop::Utility::Logger *v20; // eax
  Outpop::Utility::Logger *v21; // eax
  wchar_t *v22; // eax
  int v23; // eax
  Outpop::Utility::Logger *v24; // eax
  int v25; // esi
  Outpop::Utility::Logger *v26; // eax
  Outpop::Utility::Logger *v27; // eax
  wchar_t *v28; // eax
  int v29; // eax
  Outpop::Utility::Logger *v30; // eax
  wchar_t *v31; // esi
  Outpop::Utility::Logger *v32; // eax
  Outpop::Utility::Logger *v33; // eax
  wchar_t *v34; // eax
  const char *host_addr; // eax
  Outpop::Utility::Logger *v36; // eax
  int host_addr_str; // eax
  Outpop::Utility::Ref_Object *v38; // ecx
  Outpop::Utility::Ref_Object *v39; // ecx
  bool v40; // zf
  int v41; // eax
  Outpop::Utility::Logger *v42; // eax
  wchar_t *v43; // edi
  int v44; // esi
  Outpop::Utility::Logger *v45; // eax
  Outpop::Utility::Logger *v46; // eax
  wchar_t *v47; // eax
  int v48; // esi
  const char *v49; // eax
  Outpop::Utility::Logger *v50; // eax
  wchar_t *tm; // [esp-14h] [ebp-7Ch]
  wchar_t *v52; // [esp-14h] [ebp-7Ch]
  wchar_t *v53; // [esp-14h] [ebp-7Ch]
  wchar_t *v54; // [esp-14h] [ebp-7Ch]
  DWORD CurrentProcessId; // [esp-10h] [ebp-78h]
  DWORD v56; // [esp-10h] [ebp-78h]
  DWORD v57; // [esp-10h] [ebp-78h]
  DWORD v58; // [esp-10h] [ebp-78h]
  DWORD CurrentThreadId; // [esp-Ch] [ebp-74h]
  DWORD v60; // [esp-Ch] [ebp-74h]
  DWORD v61; // [esp-Ch] [ebp-74h]
  DWORD v62; // [esp-Ch] [ebp-74h]
  DWORD LastError; // [esp-8h] [ebp-70h]
  DWORD v64; // [esp-8h] [ebp-70h]
  DWORD v65; // [esp-8h] [ebp-70h]
  DWORD v66; // [esp-8h] [ebp-70h]
  wchar_t *v67; // [esp+0h] [ebp-68h]
  int port_number; // [esp+0h] [ebp-68h]
  int Error; // [esp+14h] [ebp-54h]
  int v70; // [esp+14h] [ebp-54h]
  int v71; // [esp+14h] [ebp-54h]
  SOCKET v72; // [esp+18h] [ebp-50h]
  Outpop::Utility::Lock *v73; // [esp+18h] [ebp-50h]
  int namelen; // [esp+1Ch] [ebp-4Ch] BYREF
  Outpop::Utility::Lock *v75; // [esp+20h] [ebp-48h]
  int v76; // [esp+24h] [ebp-44h]
  _BYTE v77[28]; // [esp+28h] [ebp-40h] BYREF
  sockaddr name; // [esp+44h] [ebp-24h] BYREF
  int v79; // [esp+64h] [ebp-4h]

  v3 = a3;
  if ( *(_BYTE *)(a1 + 108) )
    goto LABEL_31;
  *(_BYTE *)(a1 + 108) = 1;
  v6 = socket(2, 2, 17);
  v72 = v6;
  if ( v6 == -1 )
  {
    Error = WSAGetLastError();
    if ( (*(_BYTE *)(Outpop::Utility::Logger::instance() + 136) == 1
       || *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) == 1)
      && *(_BYTE *)(Outpop::Utility::Logger::instance() + 140) == 1 )
    {
      v7 = (Outpop::Utility::Lock *)(Outpop::Utility::Logger::instance() + 144);
      Outpop::Utility::Lock::lock(v7);
      v79 = 0;
      v8 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
      log_buffer = Outpop::Utility::Logger::get_log_buffer(v8);
      v10 = sub_1000A570(log_buffer, L"\n%s", L"LOG_ERROR");
      LastError = GetLastError();
      CurrentThreadId = GetCurrentThreadId();
      CurrentProcessId = GetCurrentProcessId();
      v11 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
      tm = Outpop::Utility::Logger::make_tm(v11);
      v12 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
      dt = Outpop::Utility::Logger::make_dt(v12);
      v14 = sub_1000A570(
              &log_buffer[v10],
              L" %s:%s PID:%d TID:%d EID:%d\n\tFILE:%s %d Line \n\tMessage:",
              dt,
              tm,
              CurrentProcessId,
              CurrentThreadId,
              LastError,
              L"D:\\R3\\OutpopGameProject\\P2PNetwork\\Network_Detector.cpp",
              31);
      sub_1000A570(&log_buffer[v14 + v10], L"Network Detector create socket error %d!", Error);
LABEL_7:
      if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 136) )
        wprintf(L"%s", log_buffer);
      if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) )
      {
        v15 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
        Outpop::Utility::Logger::write_file(v15);
      }
      v79 = -1;
      v16 = v7;
LABEL_43:
      Outpop::Utility::Lock::unlock(v16);
      return;
    }
    return;
  }
  v17 = (const struct sockaddr *)(*(int (__thiscall **)(Outpop::IONetwork::INET_Addr *))(*(_DWORD *)a2 + 16))(a2);
  if ( connect(v6, v17, 16) != -1 )
  {
    namelen = 16;
    if ( getsockname(v6, &name, &namelen) == -1 )
    {
      closesocket(v6);
      v71 = WSAGetLastError();
      if ( (*(_BYTE *)(Outpop::Utility::Logger::instance() + 136) == 1
         || *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) == 1)
        && *(_BYTE *)(Outpop::Utility::Logger::instance() + 140) == 1 )
      {
        v7 = (Outpop::Utility::Lock *)(Outpop::Utility::Logger::instance() + 144);
        Outpop::Utility::Lock::lock(v7);
        v79 = 2;
        v24 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
        log_buffer = Outpop::Utility::Logger::get_log_buffer(v24);
        v25 = sub_1000A570(log_buffer, L"\n%s", L"LOG_ERROR");
        v65 = GetLastError();
        v61 = GetCurrentThreadId();
        v57 = GetCurrentProcessId();
        v26 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
        v53 = Outpop::Utility::Logger::make_tm(v26);
        v27 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
        v28 = Outpop::Utility::Logger::make_dt(v27);
        v29 = sub_1000A570(
                &log_buffer[v25],
                L" %s:%s PID:%d TID:%d EID:%d\n\tFILE:%s %d Line \n\tMessage:",
                v28,
                v53,
                v57,
                v61,
                v65,
                L"D:\\R3\\OutpopGameProject\\P2PNetwork\\Network_Detector.cpp",
                49);
        sub_1000A570(&log_buffer[v29 + v25], L"Network Detector get socket name error %d!", v71);
        goto LABEL_7;
      }
      return;
    }
    (*(void (__thiscall **)(int, sockaddr *, int))(*(_DWORD *)(a1 + 44) + 8))(a1 + 44, &name, namelen);
    if ( (*(_BYTE *)(Outpop::Utility::Logger::instance() + 136) == 1
       || *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) == 1)
      && *(_BYTE *)(Outpop::Utility::Logger::instance() + 141) == 1 )
    {
      v75 = (Outpop::Utility::Lock *)(Outpop::Utility::Logger::instance() + 144);
      Outpop::Utility::Lock::lock(v75);
      v79 = 3;
      v30 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
      v31 = Outpop::Utility::Logger::get_log_buffer(v30);
      v32 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
      v67 = Outpop::Utility::Logger::make_tm(v32);
      v33 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
      v34 = Outpop::Utility::Logger::make_dt(v33);
      v76 = sub_1000A570(v31, L"\nLOGINFO %s:%s Message:", v34, v67);
      host_addr = Outpop::IONetwork::INET_Addr::get_host_addr((Outpop::IONetwork::INET_Addr *)(a1 + 44));
      sub_1000A570(&v31[v76], L"Network Detector get local address is %S", host_addr);
      if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 136) )
        wprintf(L"%s", v31);
      if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) )
      {
        v36 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
        Outpop::Utility::Logger::write_file(v36);
      }
      v79 = -1;
      Outpop::Utility::Lock::unlock(v75);
      v6 = v72;
    }
    closesocket(v6);
    host_addr_str = Outpop::IONetwork::INET_Addr::get_host_addr_str(a1 + 44, v77);
    v79 = 4;
    sub_1000CC10(host_addr_str);
    v79 = -1;
    std::string::~string(v77);
    v3 = a3;
LABEL_31:
    Outpop::IONetwork::INET_Addr::operator=(a1 + 16, a2);
    v38 = *(Outpop::Utility::Ref_Object **)(a1 + 104);
    if ( v38 )
      Outpop::Utility::Ref_Object::release(v38);
    v39 = *v3;
    v40 = *v3 == 0;
    *(_DWORD *)(a1 + 104) = *v3;
    if ( !v40 )
      Outpop::Utility::Ref_Object::addref(v39);
    v41 = *(_DWORD *)(a1 + 104);
    *(_DWORD *)(v41 + 12) = sub_10001C60;
    *(_DWORD *)(v41 + 16) = a1;
    sub_1000AB00(*v3, a2);
    if ( (*(_BYTE *)(Outpop::Utility::Logger::instance() + 136) == 1
       || *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) == 1)
      && *(_BYTE *)(Outpop::Utility::Logger::instance() + 138) == 1 )
    {
      v73 = (Outpop::Utility::Lock *)(Outpop::Utility::Logger::instance() + 144);
      Outpop::Utility::Lock::lock(v73);
      v79 = 5;
      v42 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
      v43 = Outpop::Utility::Logger::get_log_buffer(v42);
      v44 = sub_1000A570(v43, L"\n%s", L"LOG_DEBUG");
      v66 = GetLastError();
      v62 = GetCurrentThreadId();
      v58 = GetCurrentProcessId();
      v45 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
      v54 = Outpop::Utility::Logger::make_tm(v45);
      v46 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
      v47 = Outpop::Utility::Logger::make_dt(v46);
      v48 = sub_1000A570(
              &v43[v44],
              L" %s:%s PID:%d TID:%d EID:%d\n\tFILE:%s %d Line \n\tMessage:",
              v47,
              v54,
              v58,
              v62,
              v66,
              L"D:\\R3\\OutpopGameProject\\P2PNetwork\\Network_Detector.cpp",
              66)
          + v44;
      port_number = Outpop::IONetwork::INET_Addr::get_port_number(a2);
      v49 = Outpop::IONetwork::INET_Addr::get_host_addr(a2);
      sub_1000A570(&v43[v48], L"Detector start connect %S:%d", v49, port_number);
      if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 136) )
        wprintf(L"%s", v43);
      if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) )
      {
        v50 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
        Outpop::Utility::Logger::write_file(v50);
      }
      v79 = -1;
      v16 = v73;
      goto LABEL_43;
    }
    return;
  }
  closesocket(v6);
  v70 = WSAGetLastError();
  if ( (*(_BYTE *)(Outpop::Utility::Logger::instance() + 136) == 1
     || *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) == 1)
    && *(_BYTE *)(Outpop::Utility::Logger::instance() + 140) == 1 )
  {
    v7 = (Outpop::Utility::Lock *)(Outpop::Utility::Logger::instance() + 144);
    Outpop::Utility::Lock::lock(v7);
    v79 = 1;
    v18 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
    log_buffer = Outpop::Utility::Logger::get_log_buffer(v18);
    v19 = sub_1000A570(log_buffer, L"\n%s", L"LOG_ERROR");
    v64 = GetLastError();
    v60 = GetCurrentThreadId();
    v56 = GetCurrentProcessId();
    v20 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
    v52 = Outpop::Utility::Logger::make_tm(v20);
    v21 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
    v22 = Outpop::Utility::Logger::make_dt(v21);
    v23 = sub_1000A570(
            &log_buffer[v19],
            L" %s:%s PID:%d TID:%d EID:%d\n\tFILE:%s %d Line \n\tMessage:",
            v22,
            v52,
            v56,
            v60,
            v64,
            L"D:\\R3\\OutpopGameProject\\P2PNetwork\\Network_Detector.cpp",
            39);
    sub_1000A570(&log_buffer[v23 + v19], L"Network Detector connect socket error %d!", v70);
    goto LABEL_7;
  }
}
