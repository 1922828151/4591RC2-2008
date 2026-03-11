/*
 * func-name: sub_1000C0C0
 * func-address: 0x1000c0c0
 * callers: none
 * callees: 0x100097a0, 0x1000a570, 0x1000d390, 0x1000d7a0, 0x1000d8b0, 0x1000da30, 0x1000e960, 0x1000ea00, 0x1000eaa0, 0x100232f7
 */

char __thiscall sub_1000C0C0(int this, Outpop::Utility **a2, int a3)
{
  Outpop::Utility **v3; // ebx
  char result; // al
  int v6; // edx
  void *v7; // esi
  Outpop::Utility::Logger *v8; // eax
  wchar_t *v9; // esi
  Outpop::Utility::Logger *v10; // eax
  Outpop::Utility::Logger *v11; // eax
  wchar_t *v12; // eax
  int v13; // eax
  int host_addr_str; // ebx
  int v15; // eax
  int v16; // eax
  int v17; // ebx
  int v18; // eax
  _DWORD *v19; // ecx
  Outpop::Utility::Logger *v20; // eax
  int v21; // ebx
  int v22; // eax
  Outpop::Utility::Logger *v23; // eax
  wchar_t *v24; // esi
  Outpop::Utility::Logger *v25; // eax
  Outpop::Utility::Logger *v26; // eax
  wchar_t *v27; // eax
  int v28; // ebx
  int v29; // eax
  int v30; // ebx
  Outpop::Utility::Lock *v31; // edi
  Outpop::Utility::Logger *v32; // eax
  wchar_t *log_buffer; // esi
  Outpop::Utility::Logger *v34; // eax
  Outpop::Utility::Logger *v35; // eax
  wchar_t *dt; // eax
  int v37; // eax
  _DWORD *v38; // ecx
  Outpop::Utility::Logger *v39; // eax
  _BYTE *v40; // ecx
  int v41; // eax
  _DWORD *v42; // ecx
  Outpop::Utility::Logger *v43; // eax
  wchar_t *tm; // [esp-4h] [ebp-8Ch]
  int v45; // [esp+0h] [ebp-88h] BYREF
  _BYTE v46[28]; // [esp+10h] [ebp-78h] BYREF
  _BYTE v47[28]; // [esp+2Ch] [ebp-5Ch] BYREF
  int v48; // [esp+48h] [ebp-40h] BYREF
  Outpop::Utility::Lock *v49; // [esp+4Ch] [ebp-3Ch] BYREF
  int v50; // [esp+50h] [ebp-38h] BYREF
  unsigned int v51; // [esp+54h] [ebp-34h] BYREF
  int v52; // [esp+58h] [ebp-30h] BYREF
  void *v53; // [esp+5Ch] [ebp-2Ch] BYREF
  int v54; // [esp+60h] [ebp-28h] BYREF
  Outpop::Utility::Lock *v55; // [esp+64h] [ebp-24h] BYREF
  int v56; // [esp+68h] [ebp-20h]
  unsigned int v57; // [esp+6Ch] [ebp-1Ch] BYREF
  Outpop::Utility::Lock *v58; // [esp+70h] [ebp-18h] BYREF
  char v59; // [esp+77h] [ebp-11h] BYREF
  int *v60; // [esp+78h] [ebp-10h]
  int v61; // [esp+84h] [ebp-4h]
  _BYTE v62[28]; // [esp+88h] [ebp+0h] BYREF
  _BYTE v63[28]; // [esp+A4h] [ebp+1Ch] BYREF
  _BYTE v64[28]; // [esp+C0h] [ebp+38h] BYREF
  _BYTE v65[4]; // [esp+DCh] [ebp+54h] BYREF
  _DWORD v66[6]; // [esp+E0h] [ebp+58h] BYREF
  _BYTE v67[4]; // [esp+F8h] [ebp+70h] BYREF
  _DWORD v68[5]; // [esp+FCh] [ebp+74h] BYREF
  unsigned int v69; // [esp+110h] [ebp+88h]

  v60 = &v45;
  v3 = a2;
  v56 = (int)a2;
  v59 = 0;
  sub_1000E960(&v59);
  result = v59;
  if ( v59 == -125 )
  {
    if ( *(_BYTE *)(this + 109) == 1 )
      return result;
    v61 = 0;
    v58 = 0;
    v57 = 0;
    sub_1000EA00(&v58);
    sub_1000EAA0(&v57);
    v61 = -1;
    sub_1000D7A0(*(_DWORD *)(this + 92));
    *(_DWORD *)(this + 92) = -1;
    *(_BYTE *)(this + 109) = 1;
    Outpop::IONetwork::INET_Addr::INET_Addr((Outpop::IONetwork::INET_Addr *)v67);
    v61 = 3;
    Outpop::IONetwork::P2PUdpBuilder::get_local_addr(
      *(Outpop::IONetwork::P2PUdpBuilder **)(this + 88),
      (struct Outpop::IONetwork::INET_Addr *)v67);
    Outpop::IONetwork::INET_Addr::INET_Addr((Outpop::IONetwork::INET_Addr *)v63, v57, (unsigned int)v58);
    LOBYTE(v61) = 4;
    (*(void (__cdecl **)(_DWORD, _DWORD, _BYTE *, _BYTE *))(this + 4))(*(_DWORD *)(this + 8), 0, v67, v63);
    LOBYTE(v61) = 3;
    Outpop::IONetwork::INET_Addr::~INET_Addr((Outpop::IONetwork::INET_Addr *)v63);
    v61 = -1;
    Outpop::IONetwork::INET_Addr::~INET_Addr((Outpop::IONetwork::INET_Addr *)v67);
    result = v59;
    v3 = (Outpop::Utility **)v56;
  }
  if ( result == -123 )
  {
    if ( *(_BYTE *)(this + 111) )
      return result;
    v6 = *(_DWORD *)(this + 96);
    *(_BYTE *)(this + 111) = 1;
    sub_1000D7A0(v6);
    *(_DWORD *)(this + 96) = -1;
    (*(void (__cdecl **)(_DWORD))(this + 52))(*(_DWORD *)(this + 56));
    result = v59;
  }
  if ( result == -115 )
  {
    *(_DWORD *)(this + 112) = 0;
    return result;
  }
  if ( result == -119 )
  {
    v51 = 0;
    v54 = 0;
    v57 = 0;
    v58 = 0;
    std::string::string(v67);
    v61 = 6;
    sub_100097A0(*v3, (int)v67);
    sub_1000EA00(&v51);
    sub_1000EAA0(&v54);
    sub_1000EA00(&v57);
    sub_1000EAA0(&v58);
    v61 = 5;
    if ( !v51 || !(_WORD)v54 )
    {
      if ( (*(_BYTE *)(Outpop::Utility::Logger::instance() + 136) == 1
         || *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) == 1)
        && *(_BYTE *)(Outpop::Utility::Logger::instance() + 141) == 1 )
      {
        v31 = (Outpop::Utility::Lock *)(Outpop::Utility::Logger::instance() + 144);
        v49 = v31;
        Outpop::Utility::Lock::lock(v31);
        LOBYTE(v61) = 9;
        v32 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
        log_buffer = Outpop::Utility::Logger::get_log_buffer(v32);
        v34 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
        tm = Outpop::Utility::Logger::make_tm(v34);
        v35 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
        dt = Outpop::Utility::Logger::make_dt(v35);
        v37 = sub_1000A570(0xFFFFu, log_buffer, L"\nLOGINFO %s:%s Message:", dt, tm);
        v38 = (_DWORD *)v68[0];
        if ( v69 < 0x10 )
          v38 = v68;
        sub_1000A570(0xFFFF - v37, &log_buffer[v37], L"SAP remote peer %S address is zero", v38);
        if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 136) )
          wprintf(L"%s", log_buffer);
        if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) )
        {
          v39 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
          Outpop::Utility::Logger::write_file(v39);
        }
        LOBYTE(v61) = 5;
        Outpop::Utility::Lock::unlock(v31);
      }
      v40 = v67;
      goto LABEL_63;
    }
    sub_1000DA30(&v52, v67);
    v7 = *(void **)(this + 168);
    if ( !v52 || v52 != this + 164 )
      invalid_parameter_noinfo();
    if ( v53 != v7 )
    {
      *(_BYTE *)(*(_DWORD *)(sub_1000D8B0() + 28) + 40) = 1;
      if ( (*(_BYTE *)(Outpop::Utility::Logger::instance() + 136) == 1
         || *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) == 1)
        && *(_BYTE *)(Outpop::Utility::Logger::instance() + 141) == 1 )
      {
        v55 = (Outpop::Utility::Lock *)(Outpop::Utility::Logger::instance() + 144);
        Outpop::Utility::Lock::lock(v55);
        LOBYTE(v61) = 10;
        v8 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
        v9 = Outpop::Utility::Logger::get_log_buffer(v8);
        v10 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
        Outpop::Utility::Logger::make_tm(v10);
        v11 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
        v12 = Outpop::Utility::Logger::make_dt(v11);
        v49 = (Outpop::Utility::Lock *)sub_1000A570(0xFFFFu, v9, L"\nLOGINFO %s:%s Message:", v12);
        v13 = Outpop::IONetwork::INET_Addr::INET_Addr((Outpop::IONetwork::INET_Addr *)v65, 0, v57);
        LOBYTE(v61) = 11;
        host_addr_str = Outpop::IONetwork::INET_Addr::get_host_addr_str(v13, v62);
        LOBYTE(v61) = 12;
        v15 = Outpop::IONetwork::INET_Addr::INET_Addr((Outpop::IONetwork::INET_Addr *)v64, 0, v51);
        LOBYTE(v61) = 13;
        v16 = Outpop::IONetwork::INET_Addr::get_host_addr_str(v15, v63);
        if ( *(_DWORD *)(host_addr_str + 24) < 0x10u )
          v17 = host_addr_str + 4;
        else
          v17 = *(_DWORD *)(host_addr_str + 4);
        if ( *(_DWORD *)(v16 + 24) < 0x10u )
          v18 = v16 + 4;
        else
          v18 = *(_DWORD *)(v16 + 4);
        v19 = (_DWORD *)v68[0];
        if ( v69 < 0x10 )
          v19 = v68;
        sub_1000A570(
          0xFFFF - (_DWORD)v49,
          &v9[(_DWORD)v49],
          L"SAP get peer %S exteral address %S:%d interal address %S:%d",
          v19,
          v18,
          (unsigned __int16)v54,
          v17,
          (unsigned __int16)v58);
        std::string::~string(v63);
        LOBYTE(v61) = 12;
        Outpop::IONetwork::INET_Addr::~INET_Addr((Outpop::IONetwork::INET_Addr *)v64);
        LOBYTE(v61) = 11;
        std::string::~string(v62);
        LOBYTE(v61) = 10;
        Outpop::IONetwork::INET_Addr::~INET_Addr((Outpop::IONetwork::INET_Addr *)v65);
        if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 136) )
          wprintf(L"%s", v9);
        if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) )
        {
          v20 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
          Outpop::Utility::Logger::write_file(v20);
        }
        LOBYTE(v61) = 5;
        Outpop::Utility::Lock::unlock(v55);
      }
      v21 = Outpop::IONetwork::INET_Addr::INET_Addr((Outpop::IONetwork::INET_Addr *)v64, (unsigned __int16)v58, v57);
      LOBYTE(v61) = 14;
      v22 = Outpop::IONetwork::INET_Addr::INET_Addr((Outpop::IONetwork::INET_Addr *)v63, v54, v51);
      LOBYTE(v61) = 15;
      (*(void (__cdecl **)(_DWORD, _DWORD, _BYTE *, int, int))(this + 12))(*(_DWORD *)(this + 16), 0, v67, v22, v21);
      LOBYTE(v61) = 14;
      Outpop::IONetwork::INET_Addr::~INET_Addr((Outpop::IONetwork::INET_Addr *)v63);
      LOBYTE(v61) = 5;
      Outpop::IONetwork::INET_Addr::~INET_Addr((Outpop::IONetwork::INET_Addr *)v64);
      sub_1000D390((int)&v48, v52, v53);
      v3 = (Outpop::Utility **)v56;
    }
    v61 = -1;
    std::string::~string(v67);
    result = v59;
  }
  if ( result != -113 )
    return result;
  v55 = 0;
  v53 = 0;
  v49 = 0;
  v50 = 0;
  std::string::string(v65);
  v61 = 17;
  sub_100097A0(*v3, (int)v65);
  sub_1000EA00(&v55);
  sub_1000EAA0(&v53);
  sub_1000EA00(&v49);
  sub_1000EAA0(&v50);
  v61 = 16;
  Outpop::IONetwork::INET_Addr::INET_Addr((Outpop::IONetwork::INET_Addr *)v64, (unsigned __int16)v53, (unsigned int)v55);
  LOBYTE(v61) = 20;
  Outpop::IONetwork::INET_Addr::INET_Addr((Outpop::IONetwork::INET_Addr *)v62, v50, (unsigned int)v49);
  LOBYTE(v61) = 21;
  if ( (*(_BYTE *)(Outpop::Utility::Logger::instance() + 136) == 1
     || *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) == 1)
    && *(_BYTE *)(Outpop::Utility::Logger::instance() + 141) == 1 )
  {
    v58 = (Outpop::Utility::Lock *)(Outpop::Utility::Logger::instance() + 144);
    Outpop::Utility::Lock::lock(v58);
    LOBYTE(v61) = 22;
    v23 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
    v24 = Outpop::Utility::Logger::get_log_buffer(v23);
    v25 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
    Outpop::Utility::Logger::make_tm(v25);
    v26 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
    v27 = Outpop::Utility::Logger::make_dt(v26);
    v56 = sub_1000A570(0xFFFFu, v24, L"\nLOGINFO %s:%s Message:", v27);
    v28 = Outpop::IONetwork::INET_Addr::get_host_addr_str(v62, v46);
    LOBYTE(v61) = 23;
    v29 = Outpop::IONetwork::INET_Addr::get_host_addr_str(v64, v47);
    if ( *(_DWORD *)(v28 + 24) < 0x10u )
      v30 = v28 + 4;
    else
      v30 = *(_DWORD *)(v28 + 4);
    if ( *(_DWORD *)(v29 + 24) < 0x10u )
      v41 = v29 + 4;
    else
      v41 = *(_DWORD *)(v29 + 4);
    v42 = (_DWORD *)v66[0];
    if ( v66[5] < 0x10u )
      v42 = v66;
    sub_1000A570(
      0xFFFF - v56,
      &v24[v56],
      L"SAP peer %S cooperate connect exteral address is %S:%d interal address is %S:%d",
      v42,
      v41,
      (unsigned __int16)v53,
      v30,
      (unsigned __int16)v50);
    std::string::~string(v47);
    LOBYTE(v61) = 22;
    std::string::~string(v46);
    if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 136) )
      wprintf(L"%s", v24);
    if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) )
    {
      v43 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
      Outpop::Utility::Logger::write_file(v43);
    }
    LOBYTE(v61) = 21;
    Outpop::Utility::Lock::unlock(v58);
  }
  (*(void (__cdecl **)(_DWORD, _BYTE *, _BYTE *, _BYTE *))(this + 44))(*(_DWORD *)(this + 48), v65, v64, v62);
  LOBYTE(v61) = 20;
  Outpop::IONetwork::INET_Addr::~INET_Addr((Outpop::IONetwork::INET_Addr *)v62);
  LOBYTE(v61) = 16;
  Outpop::IONetwork::INET_Addr::~INET_Addr((Outpop::IONetwork::INET_Addr *)v64);
  v40 = v65;
LABEL_63:
  v61 = -1;
  return std::string::~string(v40);
}
