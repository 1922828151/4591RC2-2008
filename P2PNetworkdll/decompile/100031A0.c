/*
 * func-name: ?OnDetectNetworkResult@Peer@P2P@Outpop@@IAEXH@Z
 * func-address: 0x100031a0
 * callers: 0x10009c30
 * callees: 0x10001050, 0x10002610, 0x10006390, 0x1000a570, 0x1000ac90, 0x1000ef10, 0x1000f070, 0x100232f7, 0x100234ce
 */

void __thiscall Outpop::P2P::Peer::OnDetectNetworkResult(Outpop::P2P::Peer *this, int a2)
{
  int v3; // eax
  unsigned int ip_address; // eax
  void (__thiscall *v5)(Outpop::P2P::Peer *, int, int); // edx
  Outpop::Utility::Ref_Object *v6; // ebx
  Outpop::Utility::Logger *v7; // eax
  wchar_t *log_buffer; // ebp
  int v9; // esi
  Outpop::Utility::Logger *v10; // eax
  Outpop::Utility::Logger *v11; // eax
  wchar_t *dt; // eax
  int v13; // esi
  unsigned __int16 port_number; // ax
  Outpop::Utility::Logger *v15; // eax
  _DWORD *v16; // esi
  Outpop::Utility::Ref_Object *v17; // eax
  int v18; // ebp
  _DWORD *v19; // eax
  _DWORD *v20; // eax
  int v21; // edi
  int v22; // eax
  int *sap; // eax
  Outpop::Utility::Ref_Object **v24; // eax
  int v25; // esi
  unsigned int v26; // eax
  int *v27; // eax
  int *v28; // eax
  Outpop::Utility::Ref_Object **v29; // esi
  Outpop::Utility::Ref_Object *v30; // ecx
  Outpop::Utility::Ref_Object *v31; // ecx
  bool v32; // zf
  int *v33; // eax
  Outpop::Utility::Ref_Object **v34; // esi
  Outpop::Utility::Ref_Object *v35; // ecx
  void (__thiscall *v36)(Outpop::Utility::Ref_Object *__hidden); // ebp
  Outpop::Utility::Ref_Object *v37; // ecx
  Outpop::Utility::Ref_Object *v38; // ecx
  Outpop::Utility::Ref_Object **v39; // eax
  int v40; // esi
  unsigned int v41; // eax
  int *v42; // eax
  int *v43; // eax
  Outpop::Utility::Ref_Object **v44; // esi
  Outpop::Utility::Ref_Object *v45; // ecx
  Outpop::Utility::Ref_Object *v46; // ecx
  int *v47; // eax
  Outpop::Utility::Ref_Object **v48; // esi
  Outpop::Utility::Ref_Object *v49; // ecx
  Outpop::Utility::Ref_Object *v50; // ecx
  wchar_t *tm; // [esp-18h] [ebp-70h]
  DWORD CurrentProcessId; // [esp-14h] [ebp-6Ch]
  DWORD CurrentThreadId; // [esp-10h] [ebp-68h]
  DWORD LastError; // [esp-Ch] [ebp-64h]
  int v55; // [esp-8h] [ebp-60h]
  unsigned int v56; // [esp-8h] [ebp-60h]
  int v57; // [esp-4h] [ebp-5Ch]
  int v58; // [esp-4h] [ebp-5Ch]
  Outpop::Utility::Ref_Object *v59; // [esp+10h] [ebp-48h] BYREF
  Outpop::Utility::Ref_Object *v60; // [esp+14h] [ebp-44h] BYREF
  Outpop::Utility::Ref_Object *v61; // [esp+18h] [ebp-40h] BYREF
  Outpop::Utility::Ref_Object *v62; // [esp+1Ch] [ebp-3Ch] BYREF
  Outpop::Utility::Ref_Object *v63; // [esp+20h] [ebp-38h] BYREF
  Outpop::Utility::Ref_Object *v64; // [esp+24h] [ebp-34h] BYREF
  Outpop::Utility::Ref_Object *v65; // [esp+28h] [ebp-30h] BYREF
  _BYTE v66[40]; // [esp+2Ch] [ebp-2Ch] BYREF
  int v67; // [esp+54h] [ebp-4h]

  if ( a2 )
    return;
  v3 = *((_DWORD *)this + 6);
  if ( *(_BYTE *)(v3 + 100) == 1 )
    *((_DWORD *)this + 40) = 1;
  else
    *((_DWORD *)this + 40) = 2;
  ip_address = Outpop::IONetwork::INET_Addr::get_ip_address((Outpop::IONetwork::INET_Addr *)(v3 + 72));
  v5 = *(void (__thiscall **)(Outpop::P2P::Peer *, int, int))(*(_DWORD *)this + 4);
  *((_DWORD *)this + 27) = ip_address;
  v5(this, *((_DWORD *)this + 6) + 44, *((_DWORD *)this + 6) + 72);
  if ( *((_DWORD *)this + 40) == 1 )
  {
    if ( byte_10030AF2 == 1 )
    {
      if ( (*(_BYTE *)(Outpop::Utility::Logger::instance() + 136) == 1
         || *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) == 1)
        && *(_BYTE *)(Outpop::Utility::Logger::instance() + 138) == 1 )
      {
        v6 = (Outpop::Utility::Ref_Object *)(Outpop::Utility::Logger::instance() + 144);
        v60 = v6;
        Outpop::Utility::Lock::lock(v6);
        v67 = 0;
        v7 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
        log_buffer = Outpop::Utility::Logger::get_log_buffer(v7);
        v9 = sub_1000A570(log_buffer, L"\n%s", L"LOG_DEBUG");
        LastError = GetLastError();
        CurrentThreadId = GetCurrentThreadId();
        CurrentProcessId = GetCurrentProcessId();
        v10 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
        tm = Outpop::Utility::Logger::make_tm(v10);
        v11 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
        dt = Outpop::Utility::Logger::make_dt(v11);
        v13 = sub_1000A570(
                &log_buffer[v9],
                L" %s:%s PID:%d TID:%d EID:%d\n\tFILE:%s %d Line \n\tMessage:",
                dt,
                tm,
                CurrentProcessId,
                CurrentThreadId,
                LastError,
                L"D:\\R3\\OutpopGameProject\\P2PNetwork\\Peer.cpp",
                208)
            + v9;
        port_number = Outpop::IONetwork::INET_Addr::get_port_number((Outpop::IONetwork::INET_Addr *)(*((_DWORD *)this + 6) + 72));
        sub_1000A570(&log_buffer[v13], L"Peer begin map upnp port %d", port_number);
        if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 136) )
          wprintf(L"%s", log_buffer);
        if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) )
        {
          v15 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
          Outpop::Utility::Logger::write_file(v15);
        }
        v67 = -1;
        Outpop::Utility::Lock::unlock(v6);
      }
      v16 = (_DWORD *)((char *)this + 28);
      if ( !*((_DWORD *)this + 7) )
      {
        v17 = (Outpop::Utility::Ref_Object *)operator new(0xACu);
        v64 = v17;
        v67 = 1;
        if ( v17 )
          v18 = sub_1000EF10(v17);
        else
          v18 = 0;
        v67 = -1;
        v62 = (Outpop::Utility::Ref_Object *)v18;
        if ( v18 )
          Outpop::Utility::Ref_Object::addref((Outpop::Utility::Ref_Object *)(v18 + 76));
        v67 = 2;
        sub_10006390(&v62);
        v67 = -1;
        if ( v18 )
          Outpop::Utility::Ref_Object::release((Outpop::Utility::Ref_Object *)(v18 + 76));
        v19 = (_DWORD *)(*v16 + 84);
        *v19 = sub_10009C40;
        v19[1] = this;
        v20 = (_DWORD *)(*v16 + 92);
        *v20 = sub_10009C60;
        v20[1] = this;
      }
      v21 = *((_DWORD *)this + 6);
      v22 = Outpop::IONetwork::INET_Addr::get_port_number((Outpop::IONetwork::INET_Addr *)(v21 + 44));
      sub_1000F070(v21 + 44, v21 + 72, v22);
      return;
    }
    (*(void (__thiscall **)(Outpop::P2P::Peer *, int, _DWORD))(*(_DWORD *)this + 8))(this, 3, 0);
    sap = (int *)Outpop::P2P::P2P_Context::get_sap(&Outpop::P2P::P2P_Context::g_context_, &v65);
    v67 = 3;
    sub_10002610(*sap, &v62);
    LOBYTE(v67) = 5;
    if ( v65 )
      Outpop::Utility::Ref_Object::release(v65);
    Outpop::IONetwork::INET_Addr::INET_Addr((Outpop::IONetwork::INET_Addr *)v66);
    LOBYTE(v67) = 6;
    Outpop::IONetwork::P2PUdpBuilder::get_local_addr(v62, (struct Outpop::IONetwork::INET_Addr *)v66);
    v24 = Outpop::P2P::P2P_Context::get_sap(&Outpop::P2P::P2P_Context::g_context_, &v59);
    v66[36] = 7;
    v25 = *((_DWORD *)this + 6);
    v62 = *v24;
    v55 = Outpop::IONetwork::INET_Addr::get_port_number((Outpop::IONetwork::INET_Addr *)(v25 + 44));
    Outpop::IONetwork::INET_Addr::get_ip_address((Outpop::IONetwork::INET_Addr *)(v25 + 44));
    Outpop::IONetwork::INET_Addr::get_port_number((Outpop::IONetwork::INET_Addr *)(v25 + 72));
    v61 = (Outpop::Utility::Ref_Object *)Outpop::IONetwork::INET_Addr::get_port_number((Outpop::IONetwork::INET_Addr *)(v25 + 72));
    v26 = Outpop::IONetwork::INET_Addr::get_ip_address((Outpop::IONetwork::INET_Addr *)(v25 + 72));
    sub_1000AC90(v63, v26, v55, v57);
    LOBYTE(v67) = 6;
    if ( v60 )
      Outpop::Utility::Ref_Object::release(v60);
    v27 = (int *)Outpop::P2P::P2P_Context::get_sap(&Outpop::P2P::P2P_Context::g_context_, &v61);
    LOBYTE(v67) = 8;
    *((_DWORD *)*sub_10002610(*v27, &v60) + 28) = (char *)this + 8;
    if ( v60 )
      Outpop::Utility::Ref_Object::release(v60);
    LOBYTE(v67) = 6;
    if ( v61 )
      Outpop::Utility::Ref_Object::release(v61);
    v28 = (int *)Outpop::P2P::P2P_Context::get_sap(&Outpop::P2P::P2P_Context::g_context_, &v61);
    LOBYTE(v67) = 9;
    v29 = sub_10002610(*v28, &v60);
    LOBYTE(v67) = 10;
    v30 = (Outpop::Utility::Ref_Object *)*((_DWORD *)this + 26);
    if ( v30 )
      Outpop::Utility::Ref_Object::release(v30);
    v31 = *v29;
    v32 = *v29 == 0;
    *((_DWORD *)this + 26) = *v29;
    if ( !v32 )
      Outpop::Utility::Ref_Object::addref(v31);
    LOBYTE(v67) = 9;
    if ( v60 )
      Outpop::Utility::Ref_Object::release(v60);
    LOBYTE(v67) = 6;
    if ( v61 )
      Outpop::Utility::Ref_Object::release(v61);
    v33 = (int *)Outpop::P2P::P2P_Context::get_sap(&Outpop::P2P::P2P_Context::g_context_, &v61);
    LOBYTE(v67) = 11;
    v34 = sub_10002610(*v33, &v60);
    LOBYTE(v67) = 12;
    v35 = (Outpop::Utility::Ref_Object *)*((_DWORD *)this + 25);
    v36 = Outpop::Utility::Ref_Object::release;
    if ( v35 )
      Outpop::Utility::Ref_Object::release(v35);
    v37 = *v34;
    v32 = *v34 == 0;
    *((_DWORD *)this + 25) = *v34;
    if ( !v32 )
      Outpop::Utility::Ref_Object::addref(v37);
    LOBYTE(v67) = 11;
    if ( v60 )
      Outpop::Utility::Ref_Object::release(v60);
    LOBYTE(v67) = 6;
    if ( v61 )
      Outpop::Utility::Ref_Object::release(v61);
    LOBYTE(v67) = 5;
    Outpop::IONetwork::INET_Addr::~INET_Addr((Outpop::IONetwork::INET_Addr *)v66);
    v67 = -1;
    v38 = v62;
  }
  else
  {
    v39 = Outpop::P2P::P2P_Context::get_sap(&Outpop::P2P::P2P_Context::g_context_, &v63);
    v67 = 13;
    v40 = *((_DWORD *)this + 6);
    v60 = *v39;
    v58 = Outpop::IONetwork::INET_Addr::get_port_number((Outpop::IONetwork::INET_Addr *)(v40 + 44));
    v56 = Outpop::IONetwork::INET_Addr::get_ip_address((Outpop::IONetwork::INET_Addr *)(v40 + 44));
    Outpop::IONetwork::INET_Addr::get_port_number((Outpop::IONetwork::INET_Addr *)(v40 + 72));
    v61 = (Outpop::Utility::Ref_Object *)Outpop::IONetwork::INET_Addr::get_port_number((Outpop::IONetwork::INET_Addr *)(v40 + 72));
    v41 = Outpop::IONetwork::INET_Addr::get_ip_address((Outpop::IONetwork::INET_Addr *)(v40 + 72));
    sub_1000AC90(v60, v41, v56, v58);
    v67 = -1;
    if ( v63 )
      Outpop::Utility::Ref_Object::release(v63);
    v42 = (int *)Outpop::P2P::P2P_Context::get_sap(&Outpop::P2P::P2P_Context::g_context_, &v61);
    v67 = 14;
    *((_DWORD *)*sub_10002610(*v42, &v60) + 28) = (char *)this + 8;
    if ( v60 )
      Outpop::Utility::Ref_Object::release(v60);
    v67 = -1;
    if ( v61 )
      Outpop::Utility::Ref_Object::release(v61);
    v43 = (int *)Outpop::P2P::P2P_Context::get_sap(&Outpop::P2P::P2P_Context::g_context_, &v61);
    v67 = 15;
    v44 = sub_10002610(*v43, &v60);
    LOBYTE(v67) = 16;
    v45 = (Outpop::Utility::Ref_Object *)*((_DWORD *)this + 26);
    if ( v45 )
      Outpop::Utility::Ref_Object::release(v45);
    v46 = *v44;
    v32 = *v44 == 0;
    *((_DWORD *)this + 26) = *v44;
    if ( !v32 )
      Outpop::Utility::Ref_Object::addref(v46);
    LOBYTE(v67) = 15;
    if ( v60 )
      Outpop::Utility::Ref_Object::release(v60);
    v67 = -1;
    if ( v61 )
      Outpop::Utility::Ref_Object::release(v61);
    v47 = (int *)Outpop::P2P::P2P_Context::get_sap(&Outpop::P2P::P2P_Context::g_context_, &v64);
    v67 = 17;
    v48 = sub_10002610(*v47, &v62);
    LOBYTE(v67) = 18;
    v49 = (Outpop::Utility::Ref_Object *)*((_DWORD *)this + 25);
    v36 = Outpop::Utility::Ref_Object::release;
    if ( v49 )
      Outpop::Utility::Ref_Object::release(v49);
    v50 = *v48;
    v32 = *v48 == 0;
    *((_DWORD *)this + 25) = *v48;
    if ( !v32 )
      Outpop::Utility::Ref_Object::addref(v50);
    LOBYTE(v67) = 17;
    if ( v62 )
      Outpop::Utility::Ref_Object::release(v62);
    v67 = -1;
    v38 = v64;
  }
  if ( v38 )
    v36(v38);
}
