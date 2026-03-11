/*
 * func-name: ?build_connector@Connector_Manager@Message@Outpop@@IAEHAAUMessage_Connector_Config@23@@Z
 * func-address: 0x10013940
 * callers: 0x100146d0
 * callees: 0x1000bfa0, 0x10014030, 0x100145a0, 0x10015740, 0x10023490, 0x100295c0
 */

void *__thiscall Outpop::Message::Connector_Manager::build_connector(
        Outpop::Message::Connector_Manager *this,
        struct Outpop::Message::Message_Connector_Config *a2)
{
  unsigned int *v3; // esi
  int v4; // eax
  Outpop::IONetwork::Stream_Connector *v5; // esi
  Outpop::Utility::Logger *v6; // eax
  wchar_t *log_buffer; // edi
  int v8; // esi
  Outpop::Utility::Logger *v9; // eax
  Outpop::Utility::Logger *v10; // eax
  wchar_t *dt; // eax
  int v12; // eax
  Outpop::Utility::Logger *v13; // eax
  void *v14; // eax
  int v15; // edi
  Outpop::Utility::Ref_Object *v16; // ecx
  Outpop::Utility::Logger *v17; // eax
  wchar_t *v18; // edi
  int v19; // esi
  Outpop::Utility::Logger *v20; // eax
  Outpop::Utility::Logger *v21; // eax
  wchar_t *v22; // eax
  int v23; // esi
  const char *host_addr; // eax
  Outpop::Utility::Logger *v25; // eax
  Outpop::Utility::Logger *v26; // eax
  wchar_t *v27; // edi
  int v28; // esi
  Outpop::Utility::Logger *v29; // eax
  Outpop::Utility::Logger *v30; // eax
  wchar_t *v31; // eax
  int v32; // esi
  const char *v33; // eax
  Outpop::Utility::Logger *v34; // eax
  wchar_t *tm; // [esp-8h] [ebp-6Ch]
  wchar_t *v37; // [esp-8h] [ebp-6Ch]
  wchar_t *v38; // [esp-8h] [ebp-6Ch]
  DWORD CurrentProcessId; // [esp-4h] [ebp-68h]
  DWORD v40; // [esp-4h] [ebp-68h]
  DWORD v41; // [esp-4h] [ebp-68h]
  DWORD CurrentThreadId; // [esp+0h] [ebp-64h]
  DWORD v43; // [esp+0h] [ebp-64h]
  DWORD v44; // [esp+0h] [ebp-64h]
  DWORD LastError; // [esp+4h] [ebp-60h]
  DWORD v46; // [esp+4h] [ebp-60h]
  DWORD v47; // [esp+4h] [ebp-60h]
  int port_number; // [esp+Ch] [ebp-58h]
  int v49; // [esp+Ch] [ebp-58h]
  unsigned int *v50; // [esp+24h] [ebp-40h]
  Outpop::Utility::Lock *v51; // [esp+28h] [ebp-3Ch]
  int v52; // [esp+28h] [ebp-3Ch]
  Outpop::Utility::Lock *v53; // [esp+2Ch] [ebp-38h]
  Outpop::Utility::Lock *v54; // [esp+2Ch] [ebp-38h]
  void *v55; // [esp+30h] [ebp-34h]
  _DWORD v56[2]; // [esp+38h] [ebp-2Ch] BYREF
  int v57; // [esp+40h] [ebp-24h] BYREF
  Outpop::Utility::Ref_Object *v58; // [esp+44h] [ebp-20h]
  _BYTE v59[16]; // [esp+48h] [ebp-1Ch] BYREF
  int v60; // [esp+60h] [ebp-4h]

  v3 = 0;
  v50 = 0;
  v60 = 0;
  v4 = *((_DWORD *)a2 + 19);
  if ( !v4 )
  {
    v5 = (Outpop::IONetwork::Stream_Connector *)operator new(0xACu);
    LOBYTE(v60) = 1;
    if ( v5 )
    {
      Outpop::IONetwork::Stream_Connector::Stream_Connector(
        v5,
        this,
        (struct Outpop::IONetwork::WIN32_IoCompletionPort *)(*(_DWORD *)(*((_DWORD *)this + 1) + 64) + 76));
      *(_DWORD *)v5 = &Outpop::IONetwork::Stream_Connector::`vftable';
    }
    else
    {
      v5 = 0;
    }
    LOBYTE(v60) = 0;
    if ( v5 )
      Outpop::Utility::Ref_Object::addref(v5);
    LOBYTE(v60) = 2;
LABEL_8:
    v50 = (unsigned int *)v5;
    if ( v5 )
      Outpop::Utility::Ref_Object::addref(v5);
    LOBYTE(v60) = 0;
    if ( v5 )
      Outpop::Utility::Ref_Object::release(v5);
LABEL_27:
    v3 = v50;
    goto LABEL_28;
  }
  if ( v4 == 1 )
  {
    v5 = (Outpop::IONetwork::Stream_Connector *)operator new(0x188u);
    LOBYTE(v60) = 3;
    if ( v5 )
    {
      Outpop::IONetwork::Dgram_Connector::Dgram_Connector(
        v5,
        this,
        (struct Outpop::IONetwork::WIN32_IoCompletionPort *)(*(_DWORD *)(*((_DWORD *)this + 1) + 64) + 76));
      *(_DWORD *)v5 = &Outpop::IONetwork::Dgram_Connector::`vftable';
    }
    else
    {
      v5 = 0;
    }
    LOBYTE(v60) = 0;
    if ( v5 )
      Outpop::Utility::Ref_Object::addref(v5);
    LOBYTE(v60) = 4;
    goto LABEL_8;
  }
  if ( (*(_BYTE *)(Outpop::Utility::Logger::instance() + 136) == 1
     || *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) == 1)
    && *(_BYTE *)(Outpop::Utility::Logger::instance() + 139) == 1 )
  {
    v51 = (Outpop::Utility::Lock *)(Outpop::Utility::Logger::instance() + 144);
    Outpop::Utility::Lock::lock(v51);
    LOBYTE(v60) = 5;
    v6 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
    log_buffer = Outpop::Utility::Logger::get_log_buffer(v6);
    v8 = sub_10023490(log_buffer, L"\n%s", L"LOG_WARNING");
    LastError = GetLastError();
    CurrentThreadId = GetCurrentThreadId();
    CurrentProcessId = GetCurrentProcessId();
    v9 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
    tm = Outpop::Utility::Logger::make_tm(v9);
    v10 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
    dt = Outpop::Utility::Logger::make_dt(v10);
    v12 = sub_10023490(
            &log_buffer[v8],
            L" %s:%s PID:%d TID:%d EID:%d\n\tFILE:%s %d Line \n\tMessage:",
            dt,
            tm,
            CurrentProcessId,
            CurrentThreadId,
            LastError,
            L"D:\\R3\\OutpopGameProject\\MessageService\\Connector_Manager.cpp",
            160);
    sub_10023490(
      &log_buffer[v12 + v8],
      L"Connector_Manager build_connector not supper connector type %d",
      *((_DWORD *)a2 + 19));
    if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 136) )
      wprintf(L"%s", log_buffer);
    if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) )
    {
      v13 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
      Outpop::Utility::Logger::write_file(v13);
    }
    LOBYTE(v60) = 0;
    Outpop::Utility::Lock::unlock(v51);
    goto LABEL_27;
  }
LABEL_28:
  v14 = operator new(0x74u);
  LOBYTE(v60) = 6;
  if ( v14 )
  {
    v15 = sub_10014030(v14);
    v52 = v15;
  }
  else
  {
    v52 = 0;
    v15 = 0;
  }
  LOBYTE(v60) = 0;
  if ( v15 )
    Outpop::Utility::Ref_Object::addref((Outpop::Utility::Ref_Object *)v15);
  LOBYTE(v60) = 7;
  Outpop::IONetwork::Connector_Config::operator=(a2);
  *(_BYTE *)(v15 + 104) = *((_BYTE *)a2 + 96);
  *(_DWORD *)(v15 + 108) = *((_DWORD *)a2 + 25);
  v16 = *(Outpop::Utility::Ref_Object **)(v15 + 112);
  if ( v16 )
    Outpop::Utility::Ref_Object::release(v16);
  *(_DWORD *)(v15 + 112) = v3;
  if ( v3 )
    Outpop::Utility::Ref_Object::addref((Outpop::Utility::Ref_Object *)v3);
  (*(void (__thiscall **)(Outpop::Message::Connector_Manager *, struct Outpop::Message::Message_Connector_Config *, unsigned int *))(*(_DWORD *)this + 12))(
    this,
    a2,
    v3);
  Outpop::Utility::Lock::lock((Outpop::Message::Connector_Manager *)((char *)this + 48));
  LOBYTE(v60) = 8;
  if ( ++*((_DWORD *)this + 18) == 2000000000 )
    *((_DWORD *)this + 18) = 1;
  v55 = (void *)*((_DWORD *)this + 18);
  v56[0] = v55;
  v56[1] = v15;
  if ( v15 )
    Outpop::Utility::Ref_Object::addref((Outpop::Utility::Ref_Object *)v15);
  LOBYTE(v60) = 10;
  sub_1000BFA0(&v57, v56);
  LOBYTE(v60) = 11;
  sub_10015740((char *)this + 8, v59, &v57);
  LOBYTE(v60) = 10;
  if ( v58 )
    Outpop::Utility::Ref_Object::release(v58);
  LOBYTE(v60) = 8;
  if ( v15 )
    Outpop::Utility::Ref_Object::release((Outpop::Utility::Ref_Object *)v15);
  v3[27] = *((_DWORD *)this + 18);
  LOBYTE(v60) = 7;
  Outpop::Utility::Lock::unlock((Outpop::Message::Connector_Manager *)((char *)this + 48));
  (*(void (__thiscall **)(unsigned int *, struct Outpop::Message::Message_Connector_Config *))(*v3 + 8))(v3, a2);
  if ( (*(_BYTE *)(Outpop::Utility::Logger::instance() + 136) == 1
     || *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) == 1)
    && *(_BYTE *)(Outpop::Utility::Logger::instance() + 138) == 1 )
  {
    v53 = (Outpop::Utility::Lock *)(Outpop::Utility::Logger::instance() + 144);
    Outpop::Utility::Lock::lock(v53);
    LOBYTE(v60) = 14;
    v17 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
    v18 = Outpop::Utility::Logger::get_log_buffer(v17);
    v19 = sub_10023490(v18, L"\n%s", L"LOG_DEBUG");
    v46 = GetLastError();
    v43 = GetCurrentThreadId();
    v40 = GetCurrentProcessId();
    v20 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
    v37 = Outpop::Utility::Logger::make_tm(v20);
    v21 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
    v22 = Outpop::Utility::Logger::make_dt(v21);
    v23 = sub_10023490(
            &v18[v19],
            L" %s:%s PID:%d TID:%d EID:%d\n\tFILE:%s %d Line \n\tMessage:",
            v22,
            v37,
            v40,
            v43,
            v46,
            L"D:\\R3\\OutpopGameProject\\MessageService\\Connector_Manager.cpp",
            179)
        + v19;
    port_number = Outpop::IONetwork::INET_Addr::get_port_number((struct Outpop::Message::Message_Connector_Config *)((char *)a2 + 44));
    host_addr = Outpop::IONetwork::INET_Addr::get_host_addr((struct Outpop::Message::Message_Connector_Config *)((char *)a2 + 44));
    sub_10023490(&v18[v23], L"\trun connector %S:%d", host_addr, port_number);
    if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 136) )
      wprintf(L"%s", v18);
    if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) )
    {
      v25 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
      Outpop::Utility::Logger::write_file(v25);
    }
    LOBYTE(v60) = 7;
    Outpop::Utility::Lock::unlock(v53);
    v15 = v52;
    v3 = v50;
  }
  Outpop::Message::Connector_Manager::connect(this, v3[27]);
  (*(void (__thiscall **)(Outpop::Message::Connector_Manager *, struct Outpop::Message::Message_Connector_Config *, unsigned int *))(*(_DWORD *)this + 16))(
    this,
    a2,
    v3);
  if ( (*(_BYTE *)(Outpop::Utility::Logger::instance() + 136) == 1
     || *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) == 1)
    && *(_BYTE *)(Outpop::Utility::Logger::instance() + 138) == 1 )
  {
    v54 = (Outpop::Utility::Lock *)(Outpop::Utility::Logger::instance() + 144);
    Outpop::Utility::Lock::lock(v54);
    LOBYTE(v60) = 15;
    v26 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
    v27 = Outpop::Utility::Logger::get_log_buffer(v26);
    v28 = sub_10023490(v27, L"\n%s", L"LOG_DEBUG");
    v47 = GetLastError();
    v44 = GetCurrentThreadId();
    v41 = GetCurrentProcessId();
    v29 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
    v38 = Outpop::Utility::Logger::make_tm(v29);
    v30 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
    v31 = Outpop::Utility::Logger::make_dt(v30);
    v32 = sub_10023490(
            &v27[v28],
            L" %s:%s PID:%d TID:%d EID:%d\n\tFILE:%s %d Line \n\tMessage:",
            v31,
            v38,
            v41,
            v44,
            v47,
            L"D:\\R3\\OutpopGameProject\\MessageService\\Connector_Manager.cpp",
            182)
        + v28;
    v49 = Outpop::IONetwork::INET_Addr::get_port_number((struct Outpop::Message::Message_Connector_Config *)((char *)a2 + 44));
    v33 = Outpop::IONetwork::INET_Addr::get_host_addr((struct Outpop::Message::Message_Connector_Config *)((char *)a2 + 44));
    sub_10023490(&v27[v32], L"\trun connector %S:%d succeed", v33, v49);
    if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 136) )
      wprintf(L"%s", v27);
    if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) )
    {
      v34 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
      Outpop::Utility::Logger::write_file(v34);
    }
    LOBYTE(v60) = 7;
    Outpop::Utility::Lock::unlock(v54);
    v15 = v52;
    v3 = v50;
  }
  LOBYTE(v60) = 0;
  if ( v15 )
    Outpop::Utility::Ref_Object::release((Outpop::Utility::Ref_Object *)v15);
  v60 = -1;
  Outpop::Utility::Ref_Object::release((Outpop::Utility::Ref_Object *)v3);
  return v55;
}
