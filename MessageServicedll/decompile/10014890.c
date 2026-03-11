/*
 * func-name: ?process_post_add_connector@Connector_Manager@Message@Outpop@@QAEXAAUSPostAddItem@123@@Z
 * func-address: 0x10014890
 * callers: 0x10012f50
 * callees: 0x1000bfa0, 0x10014030, 0x100145a0, 0x10015740, 0x10023490, 0x100295c0
 */

void __thiscall Outpop::Message::Connector_Manager::process_post_add_connector(
        Outpop::Message::Connector_Manager *this,
        struct Outpop::Message::Connector_Manager::SPostAddItem *a2)
{
  int v3; // eax
  Outpop::IONetwork::Stream_Connector *v4; // esi
  Outpop::Utility::Lock *v5; // ebx
  Outpop::Utility::Logger *v6; // eax
  wchar_t *log_buffer; // edi
  int v8; // esi
  Outpop::Utility::Logger *v9; // eax
  Outpop::Utility::Logger *v10; // eax
  wchar_t *dt; // eax
  int v12; // eax
  Outpop::Utility::Logger *v13; // eax
  _DWORD *v14; // eax
  Outpop::Utility::Ref_Object *v15; // esi
  char *v16; // edi
  Outpop::Utility::Ref_Object *v17; // ecx
  Outpop::Message::Connector_Manager *v18; // ebx
  Outpop::Utility::Logger *v19; // eax
  wchar_t *v20; // edi
  int v21; // esi
  Outpop::Utility::Logger *v22; // eax
  Outpop::Utility::Logger *v23; // eax
  wchar_t *v24; // eax
  int v25; // esi
  const char *host_addr; // eax
  Outpop::Utility::Logger *v27; // eax
  Outpop::Utility::Ref_Object *v28; // edi
  Outpop::Utility::Logger *v29; // eax
  wchar_t *v30; // edi
  int v31; // esi
  Outpop::Utility::Logger *v32; // eax
  Outpop::Utility::Logger *v33; // eax
  wchar_t *v34; // eax
  int v35; // esi
  const char *v36; // eax
  Outpop::Utility::Logger *v37; // eax
  wchar_t *tm; // [esp-8h] [ebp-6Ch]
  wchar_t *v39; // [esp-8h] [ebp-6Ch]
  wchar_t *v40; // [esp-8h] [ebp-6Ch]
  DWORD CurrentProcessId; // [esp-4h] [ebp-68h]
  DWORD v42; // [esp-4h] [ebp-68h]
  DWORD v43; // [esp-4h] [ebp-68h]
  DWORD CurrentThreadId; // [esp+0h] [ebp-64h]
  DWORD v45; // [esp+0h] [ebp-64h]
  DWORD v46; // [esp+0h] [ebp-64h]
  DWORD LastError; // [esp+4h] [ebp-60h]
  DWORD v48; // [esp+4h] [ebp-60h]
  DWORD v49; // [esp+4h] [ebp-60h]
  int port_number; // [esp+Ch] [ebp-58h]
  int v51; // [esp+Ch] [ebp-58h]
  Outpop::Utility::Ref_Object **v52; // [esp+24h] [ebp-40h]
  Outpop::Utility::Ref_Object *v53; // [esp+28h] [ebp-3Ch]
  Outpop::Utility::Lock *v55; // [esp+30h] [ebp-34h]
  Outpop::Utility::Lock *v56; // [esp+30h] [ebp-34h]
  _DWORD v57[2]; // [esp+38h] [ebp-2Ch] BYREF
  int v58; // [esp+40h] [ebp-24h] BYREF
  Outpop::Utility::Ref_Object *v59; // [esp+44h] [ebp-20h]
  char v60[16]; // [esp+48h] [ebp-1Ch] BYREF
  int v61; // [esp+60h] [ebp-4h]

  v52 = 0;
  v61 = 0;
  v3 = *((_DWORD *)a2 + 20);
  if ( !v3 )
  {
    v4 = (Outpop::IONetwork::Stream_Connector *)operator new(0xACu);
    LOBYTE(v61) = 1;
    if ( v4 )
    {
      Outpop::IONetwork::Stream_Connector::Stream_Connector(
        v4,
        this,
        (struct Outpop::IONetwork::WIN32_IoCompletionPort *)(*(_DWORD *)(*((_DWORD *)this + 1) + 64) + 76));
      *(_DWORD *)v4 = &Outpop::IONetwork::Stream_Connector::`vftable';
    }
    else
    {
      v4 = 0;
    }
    LOBYTE(v61) = 0;
    if ( v4 )
      Outpop::Utility::Ref_Object::addref(v4);
    LOBYTE(v61) = 2;
LABEL_15:
    v52 = (Outpop::Utility::Ref_Object **)v4;
    if ( v4 )
      Outpop::Utility::Ref_Object::addref(v4);
    LOBYTE(v61) = 0;
    if ( v4 )
      Outpop::Utility::Ref_Object::release(v4);
    goto LABEL_27;
  }
  if ( v3 == 1 )
  {
    v4 = (Outpop::IONetwork::Stream_Connector *)operator new(0x188u);
    LOBYTE(v61) = 3;
    if ( v4 )
    {
      Outpop::IONetwork::Dgram_Connector::Dgram_Connector(
        v4,
        this,
        (struct Outpop::IONetwork::WIN32_IoCompletionPort *)(*(_DWORD *)(*((_DWORD *)this + 1) + 64) + 76));
      *(_DWORD *)v4 = &Outpop::IONetwork::Dgram_Connector::`vftable';
    }
    else
    {
      v4 = 0;
    }
    LOBYTE(v61) = 0;
    if ( v4 )
      Outpop::Utility::Ref_Object::addref(v4);
    LOBYTE(v61) = 4;
    goto LABEL_15;
  }
  if ( (*(_BYTE *)(Outpop::Utility::Logger::instance() + 136) == 1
     || *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) == 1)
    && *(_BYTE *)(Outpop::Utility::Logger::instance() + 139) == 1 )
  {
    v5 = (Outpop::Utility::Lock *)(Outpop::Utility::Logger::instance() + 144);
    Outpop::Utility::Lock::lock(v5);
    LOBYTE(v61) = 5;
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
            273);
    sub_10023490(
      &log_buffer[v12 + v8],
      L"Connector_Manager build_connector not supper connector type %d",
      *((_DWORD *)a2 + 20));
    if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 136) )
      wprintf(L"%s", log_buffer);
    if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) )
    {
      v13 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
      Outpop::Utility::Logger::write_file(v13);
    }
    LOBYTE(v61) = 0;
    Outpop::Utility::Lock::unlock(v5);
  }
LABEL_27:
  v14 = operator new(0x74u);
  LOBYTE(v61) = 6;
  if ( v14 )
  {
    v15 = (Outpop::Utility::Ref_Object *)sub_10014030(v14);
    v53 = v15;
  }
  else
  {
    v53 = 0;
    v15 = 0;
  }
  LOBYTE(v61) = 0;
  if ( v15 )
    Outpop::Utility::Ref_Object::addref(v15);
  LOBYTE(v61) = 7;
  v16 = (char *)a2 + 4;
  Outpop::IONetwork::Connector_Config::operator=((char *)a2 + 4);
  *((_BYTE *)v15 + 104) = *((_BYTE *)a2 + 100);
  *((_DWORD *)v15 + 27) = *((_DWORD *)a2 + 26);
  v17 = (Outpop::Utility::Ref_Object *)*((_DWORD *)v15 + 28);
  if ( v17 )
    Outpop::Utility::Ref_Object::release(v17);
  *((_DWORD *)v15 + 28) = v52;
  if ( v52 )
    Outpop::Utility::Ref_Object::addref((Outpop::Utility::Ref_Object *)v52);
  v18 = this;
  (*(void (__thiscall **)(Outpop::Message::Connector_Manager *, char *, Outpop::Utility::Ref_Object **))(*(_DWORD *)this + 12))(
    this,
    v16,
    v52);
  Outpop::Utility::Lock::lock((Outpop::Message::Connector_Manager *)((char *)this + 48));
  LOBYTE(v61) = 8;
  v57[0] = *(_DWORD *)a2;
  v57[1] = v15;
  if ( v15 )
    Outpop::Utility::Ref_Object::addref(v15);
  LOBYTE(v61) = 10;
  sub_1000BFA0(&v58, v57);
  LOBYTE(v61) = 11;
  sub_10015740((char *)this + 8, v60, &v58);
  LOBYTE(v61) = 10;
  if ( v59 )
    Outpop::Utility::Ref_Object::release(v59);
  LOBYTE(v61) = 8;
  if ( v15 )
    Outpop::Utility::Ref_Object::release(v15);
  v52[27] = *(Outpop::Utility::Ref_Object **)a2;
  LOBYTE(v61) = 7;
  Outpop::Utility::Lock::unlock((Outpop::Message::Connector_Manager *)((char *)this + 48));
  (*((void (__thiscall **)(Outpop::Utility::Ref_Object **, char *))*v52 + 2))(v52, v16);
  if ( (*(_BYTE *)(Outpop::Utility::Logger::instance() + 136) == 1
     || *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) == 1)
    && *(_BYTE *)(Outpop::Utility::Logger::instance() + 138) == 1 )
  {
    v55 = (Outpop::Utility::Lock *)(Outpop::Utility::Logger::instance() + 144);
    Outpop::Utility::Lock::lock(v55);
    LOBYTE(v61) = 14;
    v19 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
    v20 = Outpop::Utility::Logger::get_log_buffer(v19);
    v21 = sub_10023490(v20, L"\n%s", L"LOG_DEBUG");
    v48 = GetLastError();
    v45 = GetCurrentThreadId();
    v42 = GetCurrentProcessId();
    v22 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
    v39 = Outpop::Utility::Logger::make_tm(v22);
    v23 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
    v24 = Outpop::Utility::Logger::make_dt(v23);
    v25 = sub_10023490(
            &v20[v21],
            L" %s:%s PID:%d TID:%d EID:%d\n\tFILE:%s %d Line \n\tMessage:",
            v24,
            v39,
            v42,
            v45,
            v48,
            L"D:\\R3\\OutpopGameProject\\MessageService\\Connector_Manager.cpp",
            287)
        + v21;
    port_number = Outpop::IONetwork::INET_Addr::get_port_number((struct Outpop::Message::Connector_Manager::SPostAddItem *)((char *)a2 + 48));
    host_addr = Outpop::IONetwork::INET_Addr::get_host_addr((struct Outpop::Message::Connector_Manager::SPostAddItem *)((char *)a2 + 48));
    sub_10023490(&v20[v25], L"\trun connector %S:%d", host_addr, port_number);
    if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 136) )
      wprintf(L"%s", v20);
    if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) )
    {
      v27 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
      Outpop::Utility::Logger::write_file(v27);
    }
    LOBYTE(v61) = 7;
    Outpop::Utility::Lock::unlock(v55);
    v15 = v53;
    v18 = this;
  }
  v28 = (Outpop::Utility::Ref_Object *)v52;
  Outpop::Message::Connector_Manager::connect(v18, v52[27]);
  (*(void (__thiscall **)(Outpop::Message::Connector_Manager *, char *, Outpop::Utility::Ref_Object **))(*(_DWORD *)v18 + 16))(
    v18,
    (char *)a2 + 4,
    v52);
  if ( (*(_BYTE *)(Outpop::Utility::Logger::instance() + 136) == 1
     || *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) == 1)
    && *(_BYTE *)(Outpop::Utility::Logger::instance() + 138) == 1 )
  {
    v56 = (Outpop::Utility::Lock *)(Outpop::Utility::Logger::instance() + 144);
    Outpop::Utility::Lock::lock(v56);
    LOBYTE(v61) = 15;
    v29 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
    v30 = Outpop::Utility::Logger::get_log_buffer(v29);
    v31 = sub_10023490(v30, L"\n%s", L"LOG_DEBUG");
    v49 = GetLastError();
    v46 = GetCurrentThreadId();
    v43 = GetCurrentProcessId();
    v32 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
    v40 = Outpop::Utility::Logger::make_tm(v32);
    v33 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
    v34 = Outpop::Utility::Logger::make_dt(v33);
    v35 = sub_10023490(
            &v30[v31],
            L" %s:%s PID:%d TID:%d EID:%d\n\tFILE:%s %d Line \n\tMessage:",
            v34,
            v40,
            v43,
            v46,
            v49,
            L"D:\\R3\\OutpopGameProject\\MessageService\\Connector_Manager.cpp",
            290)
        + v31;
    v51 = Outpop::IONetwork::INET_Addr::get_port_number((struct Outpop::Message::Connector_Manager::SPostAddItem *)((char *)a2 + 48));
    v36 = Outpop::IONetwork::INET_Addr::get_host_addr((struct Outpop::Message::Connector_Manager::SPostAddItem *)((char *)a2 + 48));
    sub_10023490(&v30[v35], L"\trun connector %S:%d succeed", v36, v51);
    if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 136) )
      wprintf(L"%s", v30);
    if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) )
    {
      v37 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
      Outpop::Utility::Logger::write_file(v37);
    }
    LOBYTE(v61) = 7;
    Outpop::Utility::Lock::unlock(v56);
    v15 = v53;
    v28 = (Outpop::Utility::Ref_Object *)v52;
  }
  LOBYTE(v61) = 0;
  if ( v15 )
    Outpop::Utility::Ref_Object::release(v15);
  v61 = -1;
  Outpop::Utility::Ref_Object::release(v28);
}
