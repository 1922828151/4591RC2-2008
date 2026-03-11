/*
 * func-name: ?on_new_channel@Dgram_Connector@IONetwork@Outpop@@UAEXAAUIO_Channel_Config@23@HHV?$Smart_Ptr@VBinary_Stream@Utility@Outpop@@@Utility@3@@Z
 * func-address: 0x100372d0
 * callers: none
 * callees: 0x10003890, 0x10007400, 0x10018600, 0x1002a530, 0x1002b630, 0x1002cbf0, 0x1003a2e0, 0x1003be30, 0x1004e861, 0x1004e98e
 */

void __thiscall Outpop::IONetwork::Dgram_Connector::on_new_channel(
        int this,
        struct in_addr *a2,
        int a3,
        int a4,
        Outpop::Utility::Ref_Object *a5)
{
  int v6; // eax
  int v7; // edx
  int v8; // ecx
  int v9; // eax
  int v10; // edx
  int v11; // ecx
  int v12; // eax
  int v13; // edx
  SOCKET *v14; // eax
  void (__stdcall *v15)(struct sockaddr *, int); // eax
  Outpop::Utility::Ref_Object *v16; // eax
  Outpop::Utility::Ref_Object *v17; // ebp
  bool v18; // zf
  Outpop::Utility::Thread_Mutex *v19; // ecx
  bool v20; // al
  int v21; // edx
  bool v22; // al
  int v23; // edx
  Outpop::Utility::Thread_Mutex *v24; // ebx
  bool v25; // al
  Outpop::Utility::Logger *v26; // eax
  wchar_t *log_buffer; // ebp
  Outpop::Utility::Logger *v28; // eax
  Outpop::Utility::Logger *v29; // eax
  wchar_t *dt; // eax
  int v31; // ebx
  u_short v32; // ax
  char *v33; // eax
  int v34; // eax
  int v35; // edx
  Outpop::Utility::Logger *v36; // eax
  Outpop::Utility::Lock *v37; // eax
  int v38; // edx
  _DWORD *v39; // eax
  void (__thiscall *v40)(Outpop::Utility::Ref_Object *__hidden); // esi
  char *v41; // [esp-8h] [ebp-BCh]
  SOCKET v42; // [esp-4h] [ebp-B8h]
  int v43; // [esp-4h] [ebp-B8h]
  int v44; // [esp+0h] [ebp-B4h]
  wchar_t *tm; // [esp+4h] [ebp-B0h]
  struct in_addr S_addr; // [esp+4h] [ebp-B0h]
  int v47; // [esp+4h] [ebp-B0h]
  Outpop::Utility::Ref_Object *v48; // [esp+1Ch] [ebp-98h] BYREF
  Outpop::Utility::Thread_Mutex *v49; // [esp+20h] [ebp-94h]
  int v50; // [esp+24h] [ebp-90h]
  Outpop::IONetwork::INET_Addr *v51; // [esp+28h] [ebp-8Ch] BYREF
  Outpop::Utility::Lock *v52; // [esp+2Ch] [ebp-88h] BYREF
  int v53; // [esp+30h] [ebp-84h]
  Outpop::Utility::Ref_Object *v54; // [esp+38h] [ebp-7Ch] BYREF
  int namelen; // [esp+3Ch] [ebp-78h] BYREF
  int v56; // [esp+40h] [ebp-74h]
  Outpop::IONetwork::INET_Addr *v57; // [esp+44h] [ebp-70h]
  _DWORD v58[6]; // [esp+48h] [ebp-6Ch] BYREF
  int v59; // [esp+60h] [ebp-54h]
  int v60; // [esp+64h] [ebp-50h]
  int v61; // [esp+68h] [ebp-4Ch]
  int v62; // [esp+6Ch] [ebp-48h]
  int v63; // [esp+70h] [ebp-44h]
  _DWORD v64[4]; // [esp+74h] [ebp-40h] BYREF
  _DWORD v65[4]; // [esp+84h] [ebp-30h] BYREF
  struct sockaddr name; // [esp+94h] [ebp-20h] BYREF
  int v67; // [esp+B0h] [ebp-4h]

  v67 = 0;
  a2[1].S_un.S_addr = 0;
  v6 = *(_DWORD *)(this + 12);
  v7 = *(_DWORD *)(this + 16);
  v58[2] = *(_DWORD *)(this + 20);
  v8 = *(_DWORD *)(this + 28);
  v58[0] = v6;
  v9 = *(_DWORD *)(this + 24);
  v58[1] = v7;
  v10 = *(_DWORD *)(this + 32);
  v58[4] = v8;
  v11 = *(_DWORD *)(this + 40);
  v58[3] = v9;
  v12 = *(_DWORD *)(this + 44);
  v58[5] = v10;
  v13 = *(_DWORD *)(this + 36);
  v60 = v11;
  v61 = v12;
  v14 = *(SOCKET **)(this + 116);
  v59 = v13;
  namelen = 16;
  v42 = *v14;
  v63 = 100;
  v62 = 300;
  getsockname(v42, &name, &namelen);
  v15 = *(void (__stdcall **)(struct sockaddr *, int))(a2[2].S_un.S_addr + 8);
  v57 = (Outpop::IONetwork::INET_Addr *)&a2[2];
  v15(&name, namelen);
  v16 = (Outpop::Utility::Ref_Object *)operator new(704);
  v54 = v16;
  LOBYTE(v67) = 1;
  if ( v16 )
  {
    v17 = Outpop::IONetwork::Dgram_Channel::Dgram_Channel(v16, (struct Outpop::IONetwork::Channel_Config *)v58, a2);
    v48 = v17;
  }
  else
  {
    v48 = 0;
    v17 = 0;
  }
  LOBYTE(v67) = 0;
  v54 = v17;
  if ( v17 )
    Outpop::Utility::Ref_Object::addref(v17);
  LOBYTE(v67) = 2;
  (*(void (__thiscall **)(Outpop::Utility::Ref_Object *, int))(*(_DWORD *)v17 + 32))(v17, this);
  v49 = (Outpop::Utility::Thread_Mutex *)(this + 232);
  v18 = *(_BYTE *)(this + 84) == 0;
  v19 = (Outpop::Utility::Thread_Mutex *)(this + 232);
  v50 = 0;
  if ( !v18 )
  {
    v20 = Outpop::Utility::Thread_Mutex::acquire(v19);
    v50 = v20 - 1;
    LOBYTE(v67) = 3;
    if ( v20 )
    {
      v51 = (Outpop::IONetwork::INET_Addr *)&a2[9];
      v52 = (Outpop::Utility::Lock *)Outpop::IONetwork::INET_Addr::hash64((Outpop::IONetwork::INET_Addr *)&a2[9]);
      v53 = v21;
      sub_1003A2E0(this + 256);
      goto LABEL_11;
    }
LABEL_27:
    LOBYTE(v67) = 0;
    v40 = Outpop::Utility::Ref_Object::release;
    goto LABEL_28;
  }
  v22 = Outpop::Utility::Thread_Mutex::acquire(v19);
  v50 = v22 - 1;
  LOBYTE(v67) = 4;
  if ( !v22 )
    goto LABEL_27;
  v51 = (Outpop::IONetwork::INET_Addr *)&a2[9];
  v52 = (Outpop::Utility::Lock *)Outpop::IONetwork::INET_Addr::hash64((Outpop::IONetwork::INET_Addr *)&a2[9]);
  v53 = v23;
  sub_1003A2E0(this + 336);
LABEL_11:
  LOBYTE(v67) = 2;
  Outpop::Utility::Thread_Mutex::release((Outpop::Utility::Thread_Mutex *)(this + 232));
  v24 = (Outpop::Utility::Thread_Mutex *)(this + 208);
  v49 = (Outpop::Utility::Thread_Mutex *)(this + 208);
  v25 = Outpop::Utility::Thread_Mutex::acquire((Outpop::Utility::Thread_Mutex *)(this + 208));
  v50 = v25 - 1;
  LOBYTE(v67) = 5;
  if ( !v25 )
    goto LABEL_27;
  if ( (*(_BYTE *)(Outpop::Utility::Logger::instance() + 136) == 1
     || *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) == 1)
    && *(_BYTE *)(Outpop::Utility::Logger::instance() + 141) == 1 )
  {
    v52 = (Outpop::Utility::Lock *)(Outpop::Utility::Logger::instance() + 144);
    Outpop::Utility::Lock::lock(v52);
    LOBYTE(v67) = 6;
    v26 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
    log_buffer = Outpop::Utility::Logger::get_log_buffer(v26);
    v28 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
    tm = Outpop::Utility::Logger::make_tm(v28);
    v29 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
    dt = Outpop::Utility::Logger::make_dt(v29);
    v31 = sub_10007400(0xFFFFu, log_buffer, L"\nLOGINFO %s:%s Message:", dt, tm);
    v32 = ntohs(a2[5].S_un.S_un_w.s_w2);
    S_addr = (struct in_addr)a2[6].S_un.S_addr;
    v56 = v32;
    v33 = inet_ntoa(S_addr);
    v47 = v60;
    v44 = v59;
    v43 = (unsigned __int16)v56;
    v41 = v33;
    v34 = Outpop::IONetwork::INET_Addr::hash64(v57);
    sub_10007400(
      0xFFFF - v31,
      &log_buffer[v31],
      L"Dgram_Connector::on_new_channel  hash64 is %lld,ip is %S, port is %d,udp_resend_time_ is %d,udp_timer_tick_ is %d",
      v34,
      v35,
      v41,
      v43,
      v44,
      v47);
    if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 136) )
      wprintf(L"%s", log_buffer);
    if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) )
    {
      v36 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
      Outpop::Utility::Logger::write_file(v36);
    }
    LOBYTE(v67) = 5;
    Outpop::Utility::Lock::unlock(v52);
    v17 = v48;
    v24 = v49;
  }
  v37 = (Outpop::Utility::Lock *)Outpop::IONetwork::INET_Addr::hash64(v51);
  v53 = v38;
  v52 = v37;
  v39 = sub_1002B630(v65, &v52, &v54);
  LOBYTE(v67) = 7;
  sub_1003BE30(v64, v39);
  LOBYTE(v67) = 8;
  sub_1002A530((int *)(this + 296), (int)&v52, v64);
  LOBYTE(v67) = 7;
  sub_10018600((int)v64);
  LOBYTE(v67) = 5;
  sub_10018600((int)v65);
  LOBYTE(v67) = 2;
  v50 = -1;
  Outpop::Utility::Thread_Mutex::release(v24);
  if ( *(_DWORD *)(this + 120) )
  {
    v48 = (Outpop::Utility::Ref_Object *)this;
    Outpop::Utility::Ref_Object::addref((Outpop::Utility::Ref_Object *)this);
    LOBYTE(v67) = 9;
    v51 = v17;
    Outpop::Utility::Ref_Object::addref(v17);
    LOBYTE(v67) = 10;
    (*(void (__thiscall **)(_DWORD, Outpop::IONetwork::INET_Addr **, Outpop::Utility::Ref_Object **, Outpop::Utility::Ref_Object **))(**(_DWORD **)(this + 120) + 4))(
      *(_DWORD *)(this + 120),
      &v51,
      &a5,
      &v48);
    LOBYTE(v67) = 9;
    v40 = Outpop::Utility::Ref_Object::release;
    if ( v51 )
      Outpop::Utility::Ref_Object::release(v51);
    LOBYTE(v67) = 2;
    if ( v48 )
    {
      Outpop::Utility::Ref_Object::release(v48);
      LOBYTE(v67) = 0;
      goto LABEL_28;
    }
  }
  else
  {
    v40 = Outpop::Utility::Ref_Object::release;
  }
  LOBYTE(v67) = 0;
LABEL_28:
  v40(v17);
  v67 = -1;
  if ( a5 )
    v40(a5);
}
