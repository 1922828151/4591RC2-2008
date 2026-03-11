/*
 * func-name: ?add_connector_not_run@Connector_Manager@Message@Outpop@@QAEHAAUMessage_Connector_Config@23@@Z
 * func-address: 0x100141b0
 * callers: none
 * callees: 0x1000bfa0, 0x10014030, 0x10015740, 0x10023490, 0x100295c0
 */

int __thiscall Outpop::Message::Connector_Manager::add_connector_not_run(
        Outpop::Message::Connector_Manager *this,
        struct Outpop::Message::Message_Connector_Config *a2)
{
  Outpop::IONetwork::Stream_Connector *v3; // ebx
  int v4; // eax
  Outpop::Utility::Logger *v5; // eax
  int v6; // edi
  Outpop::Utility::Logger *v7; // eax
  Outpop::Utility::Logger *v8; // eax
  wchar_t *dt; // eax
  int v10; // eax
  Outpop::Utility::Logger *v11; // eax
  _DWORD *v12; // eax
  Outpop::Utility::Ref_Object *v13; // edi
  Outpop::Utility::Ref_Object *v14; // ecx
  wchar_t *tm; // [esp-Ch] [ebp-64h]
  DWORD CurrentProcessId; // [esp-8h] [ebp-60h]
  DWORD CurrentThreadId; // [esp-4h] [ebp-5Ch]
  DWORD LastError; // [esp+0h] [ebp-58h]
  wchar_t *log_buffer; // [esp+1Ch] [ebp-3Ch]
  int v21; // [esp+1Ch] [ebp-3Ch]
  Outpop::Utility::Lock *v22; // [esp+24h] [ebp-34h]
  _DWORD v23[2]; // [esp+2Ch] [ebp-2Ch] BYREF
  int v24; // [esp+34h] [ebp-24h] BYREF
  Outpop::Utility::Ref_Object *v25; // [esp+38h] [ebp-20h]
  _BYTE v26[16]; // [esp+3Ch] [ebp-1Ch] BYREF
  int v27; // [esp+54h] [ebp-4h]

  v3 = 0;
  v27 = 0;
  v4 = *((_DWORD *)a2 + 19);
  if ( !v4 )
  {
    v3 = (Outpop::IONetwork::Stream_Connector *)operator new(0xACu);
    LOBYTE(v27) = 1;
    if ( v3 )
    {
      Outpop::IONetwork::Stream_Connector::Stream_Connector(
        v3,
        this,
        (struct Outpop::IONetwork::WIN32_IoCompletionPort *)(*(_DWORD *)(*((_DWORD *)this + 1) + 64) + 76));
      *(_DWORD *)v3 = &Outpop::IONetwork::Stream_Connector::`vftable';
    }
    else
    {
      v3 = 0;
    }
    LOBYTE(v27) = 0;
    if ( v3 )
      Outpop::Utility::Ref_Object::addref(v3);
    LOBYTE(v27) = 2;
LABEL_15:
    if ( v3 )
      Outpop::Utility::Ref_Object::addref(v3);
    LOBYTE(v27) = 0;
    if ( v3 )
      Outpop::Utility::Ref_Object::release(v3);
    goto LABEL_27;
  }
  if ( v4 == 1 )
  {
    v3 = (Outpop::IONetwork::Stream_Connector *)operator new(0x188u);
    LOBYTE(v27) = 3;
    if ( v3 )
    {
      Outpop::IONetwork::Dgram_Connector::Dgram_Connector(
        v3,
        this,
        (struct Outpop::IONetwork::WIN32_IoCompletionPort *)(*(_DWORD *)(*((_DWORD *)this + 1) + 64) + 76));
      *(_DWORD *)v3 = &Outpop::IONetwork::Dgram_Connector::`vftable';
    }
    else
    {
      v3 = 0;
    }
    LOBYTE(v27) = 0;
    if ( v3 )
      Outpop::Utility::Ref_Object::addref(v3);
    LOBYTE(v27) = 4;
    goto LABEL_15;
  }
  if ( (*(_BYTE *)(Outpop::Utility::Logger::instance() + 136) == 1
     || *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) == 1)
    && *(_BYTE *)(Outpop::Utility::Logger::instance() + 139) == 1 )
  {
    v22 = (Outpop::Utility::Lock *)(Outpop::Utility::Logger::instance() + 144);
    Outpop::Utility::Lock::lock(v22);
    LOBYTE(v27) = 5;
    v5 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
    log_buffer = Outpop::Utility::Logger::get_log_buffer(v5);
    v6 = sub_10023490(log_buffer, L"\n%s", L"LOG_WARNING");
    LastError = GetLastError();
    CurrentThreadId = GetCurrentThreadId();
    CurrentProcessId = GetCurrentProcessId();
    v7 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
    tm = Outpop::Utility::Logger::make_tm(v7);
    v8 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
    dt = Outpop::Utility::Logger::make_dt(v8);
    v10 = sub_10023490(
            &log_buffer[v6],
            L" %s:%s PID:%d TID:%d EID:%d\n\tFILE:%s %d Line \n\tMessage:",
            dt,
            tm,
            CurrentProcessId,
            CurrentThreadId,
            LastError,
            L"D:\\R3\\OutpopGameProject\\MessageService\\Connector_Manager.cpp",
            212);
    sub_10023490(
      &log_buffer[v10 + v6],
      L"Connector_Manager build_connector not supper connector type %d",
      *((_DWORD *)a2 + 19));
    if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 136) )
      wprintf(L"%s", log_buffer);
    if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) )
    {
      v11 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
      Outpop::Utility::Logger::write_file(v11);
    }
    LOBYTE(v27) = 0;
    Outpop::Utility::Lock::unlock(v22);
  }
LABEL_27:
  v12 = operator new(0x74u);
  LOBYTE(v27) = 6;
  if ( v12 )
    v13 = (Outpop::Utility::Ref_Object *)sub_10014030(v12);
  else
    v13 = 0;
  LOBYTE(v27) = 0;
  if ( v13 )
    Outpop::Utility::Ref_Object::addref(v13);
  LOBYTE(v27) = 7;
  Outpop::IONetwork::Connector_Config::operator=(a2);
  *((_BYTE *)v13 + 104) = *((_BYTE *)a2 + 96);
  *((_DWORD *)v13 + 27) = *((_DWORD *)a2 + 25);
  v14 = (Outpop::Utility::Ref_Object *)*((_DWORD *)v13 + 28);
  if ( v14 )
    Outpop::Utility::Ref_Object::release(v14);
  *((_DWORD *)v13 + 28) = v3;
  if ( v3 )
    Outpop::Utility::Ref_Object::addref(v3);
  (*(void (__thiscall **)(Outpop::Message::Connector_Manager *, struct Outpop::Message::Message_Connector_Config *, Outpop::IONetwork::Stream_Connector *))(*(_DWORD *)this + 12))(
    this,
    a2,
    v3);
  Outpop::Utility::Lock::lock((Outpop::Message::Connector_Manager *)((char *)this + 48));
  LOBYTE(v27) = 8;
  if ( ++*((_DWORD *)this + 18) == 2000000000 )
    *((_DWORD *)this + 18) = 1;
  v21 = *((_DWORD *)this + 18);
  v23[0] = v21;
  v23[1] = v13;
  if ( v13 )
    Outpop::Utility::Ref_Object::addref(v13);
  LOBYTE(v27) = 10;
  sub_1000BFA0(&v24, v23);
  LOBYTE(v27) = 11;
  sub_10015740((char *)this + 8, v26, &v24);
  LOBYTE(v27) = 10;
  if ( v25 )
    Outpop::Utility::Ref_Object::release(v25);
  LOBYTE(v27) = 8;
  if ( v13 )
    Outpop::Utility::Ref_Object::release(v13);
  *((_DWORD *)v3 + 27) = *((_DWORD *)this + 18);
  LOBYTE(v27) = 7;
  Outpop::Utility::Lock::unlock((Outpop::Message::Connector_Manager *)((char *)this + 48));
  (*(void (__thiscall **)(Outpop::IONetwork::Stream_Connector *, struct Outpop::Message::Message_Connector_Config *))(*(_DWORD *)v3 + 8))(
    v3,
    a2);
  (*(void (__thiscall **)(Outpop::Message::Connector_Manager *, struct Outpop::Message::Message_Connector_Config *, Outpop::IONetwork::Stream_Connector *))(*(_DWORD *)this + 16))(
    this,
    a2,
    v3);
  LOBYTE(v27) = 0;
  if ( v13 )
    Outpop::Utility::Ref_Object::release(v13);
  v27 = -1;
  Outpop::Utility::Ref_Object::release(v3);
  return v21;
}
