/*
 * func-name: ?add_channel@Channel_Manager@Message@Outpop@@QAEHAAV?$Smart_Ptr@VChannel@IONetwork@Outpop@@@Utility@3@@Z
 * func-address: 0x10011070
 * callers: 0x1000e370, 0x10013610
 * callees: 0x1000bfa0, 0x10012410, 0x10023490
 */

int __thiscall Outpop::Message::Channel_Manager::add_channel(_DWORD *this, Outpop::IONetwork::Channel **a2)
{
  _DWORD *v3; // ecx
  Outpop::Utility::Ref_Object **v4; // edi
  Outpop::IONetwork::Channel *v5; // eax
  Outpop::Utility::Lock *v6; // esi
  unsigned int v7; // eax
  Outpop::Utility::Logger *v8; // eax
  wchar_t *log_buffer; // edi
  int v10; // esi
  Outpop::Utility::Logger *v11; // eax
  Outpop::Utility::Logger *v12; // eax
  wchar_t *dt; // eax
  int v14; // esi
  Outpop::IONetwork::INET_Addr *remote_address; // eax
  Outpop::IONetwork::INET_Addr *v16; // eax
  const char *host_addr; // eax
  Outpop::Utility::Logger *v18; // eax
  Outpop::Utility::Ref_Object *v19; // eax
  bool v20; // zf
  Outpop::Utility::Lock *v21; // edi
  Outpop::Utility::Logger *v22; // eax
  wchar_t *v23; // ebx
  int v24; // esi
  Outpop::Utility::Logger *v25; // eax
  Outpop::Utility::Logger *v26; // eax
  wchar_t *v27; // eax
  int v28; // eax
  Outpop::Utility::Logger *v29; // eax
  wchar_t *tm; // [esp-18h] [ebp-5Ch]
  wchar_t *v32; // [esp-18h] [ebp-5Ch]
  DWORD CurrentProcessId; // [esp-14h] [ebp-58h]
  DWORD v34; // [esp-14h] [ebp-58h]
  DWORD CurrentThreadId; // [esp-10h] [ebp-54h]
  DWORD v36; // [esp-10h] [ebp-54h]
  DWORD LastError; // [esp-Ch] [ebp-50h]
  DWORD v38; // [esp-Ch] [ebp-50h]
  int port_number; // [esp-4h] [ebp-48h]
  Outpop::Utility::Lock *v40; // [esp+10h] [ebp-34h]
  Outpop::IONetwork::Channel *v41; // [esp+14h] [ebp-30h]
  int v42; // [esp+18h] [ebp-2Ch] BYREF
  Outpop::Utility::Ref_Object *v43; // [esp+1Ch] [ebp-28h]
  Outpop::Utility::Lock *v44; // [esp+20h] [ebp-24h] BYREF
  Outpop::Utility::Ref_Object *v45; // [esp+24h] [ebp-20h]
  int v46; // [esp+28h] [ebp-1Ch] BYREF
  int v47; // [esp+30h] [ebp-14h]
  int v48; // [esp+40h] [ebp-4h]

  if ( this )
    v3 = this + 1;
  else
    v3 = 0;
  v4 = a2;
  v5 = *a2;
  *((_DWORD *)v5 + 29) = v3;
  *((_DWORD *)v5 + 30) = this;
  (*(void (__thiscall **)(_DWORD *, Outpop::IONetwork::Channel *))(*this + 8))(this, *a2);
  v6 = (Outpop::Utility::Lock *)(this + 16);
  v40 = (Outpop::Utility::Lock *)(this + 16);
  Outpop::Utility::Lock::lock((Outpop::Utility::Lock *)(this + 16));
  v48 = 0;
  if ( this[32] == 2000000000 )
    this[32] = 1;
  v7 = this[32];
  this[32] = v7 + 1;
  Outpop::IONetwork::Channel::set_id(*a2, v7);
  if ( (*(_BYTE *)(Outpop::Utility::Logger::instance() + 136) == 1
     || *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) == 1)
    && *(_BYTE *)(Outpop::Utility::Logger::instance() + 138) == 1 )
  {
    v44 = (Outpop::Utility::Lock *)(Outpop::Utility::Logger::instance() + 144);
    Outpop::Utility::Lock::lock(v44);
    LOBYTE(v48) = 1;
    v8 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
    log_buffer = Outpop::Utility::Logger::get_log_buffer(v8);
    v10 = sub_10023490(log_buffer, L"\n%s", L"LOG_DEBUG");
    LastError = GetLastError();
    CurrentThreadId = GetCurrentThreadId();
    CurrentProcessId = GetCurrentProcessId();
    v11 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
    tm = Outpop::Utility::Logger::make_tm(v11);
    v12 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
    dt = Outpop::Utility::Logger::make_dt(v12);
    v14 = sub_10023490(
            &log_buffer[v10],
            L" %s:%s PID:%d TID:%d EID:%d\n\tFILE:%s %d Line \n\tMessage:",
            dt,
            tm,
            CurrentProcessId,
            CurrentThreadId,
            LastError,
            L"D:\\R3\\OutpopGameProject\\MessageService\\Channel_Manager.cpp",
            153)
        + v10;
    v41 = *a2;
    v42 = *((_DWORD *)*a2 + 28);
    remote_address = Outpop::IONetwork::Channel::get_remote_address(v41);
    port_number = Outpop::IONetwork::INET_Addr::get_port_number(remote_address);
    v16 = Outpop::IONetwork::Channel::get_remote_address(v41);
    host_addr = Outpop::IONetwork::INET_Addr::get_host_addr(v16);
    sub_10023490(
      &log_buffer[v14],
      L"Channel_Manager::add_channel add channel id is:%d %S;%d",
      v42,
      host_addr,
      port_number);
    if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 136) )
      wprintf(L"%s", log_buffer);
    if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) )
    {
      v18 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
      Outpop::Utility::Logger::write_file(v18);
    }
    LOBYTE(v48) = 0;
    Outpop::Utility::Lock::unlock(v44);
    v4 = a2;
    v6 = (Outpop::Utility::Lock *)(this + 16);
  }
  v19 = *v4;
  v20 = *v4 == 0;
  v44 = (Outpop::Utility::Lock *)*((_DWORD *)*v4 + 28);
  v45 = v19;
  if ( !v20 )
    Outpop::Utility::Ref_Object::addref(v19);
  LOBYTE(v48) = 3;
  sub_1000BFA0(&v42, &v44);
  LOBYTE(v48) = 4;
  sub_10012410(this + 22, &v46, &v42);
  LOBYTE(v48) = 3;
  if ( v43 )
    Outpop::Utility::Ref_Object::release(v43);
  LOBYTE(v48) = 0;
  if ( v45 )
    Outpop::Utility::Ref_Object::release(v45);
  if ( (_BYTE)v47 )
  {
    v48 = -1;
    Outpop::Utility::Lock::unlock(v6);
    (*(void (__thiscall **)(_DWORD *, Outpop::Utility::Ref_Object *))(*this + 12))(this, *v4);
    return 0;
  }
  else
  {
    if ( (*(_BYTE *)(Outpop::Utility::Logger::instance() + 136) == 1
       || *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) == 1)
      && *(_BYTE *)(Outpop::Utility::Logger::instance() + 140) == 1 )
    {
      v21 = (Outpop::Utility::Lock *)(Outpop::Utility::Logger::instance() + 144);
      v44 = v21;
      Outpop::Utility::Lock::lock(v21);
      LOBYTE(v48) = 7;
      v22 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
      v23 = Outpop::Utility::Logger::get_log_buffer(v22);
      v24 = sub_10023490(v23, L"\n%s", L"LOG_ERROR");
      v38 = GetLastError();
      v36 = GetCurrentThreadId();
      v34 = GetCurrentProcessId();
      v25 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
      v32 = Outpop::Utility::Logger::make_tm(v25);
      v26 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
      v27 = Outpop::Utility::Logger::make_dt(v26);
      v28 = sub_10023490(
              &v23[v24],
              L" %s:%s PID:%d TID:%d EID:%d\n\tFILE:%s %d Line \n\tMessage:",
              v27,
              v32,
              v34,
              v36,
              v38,
              L"D:\\R3\\OutpopGameProject\\MessageService\\Channel_Manager.cpp",
              157);
      sub_10023490(
        &v23[v28 + v24],
        L"Channel Manager add channel id %d failed ,because the same id type channel already exist!",
        *((_DWORD *)*a2 + 28));
      if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 136) )
        wprintf(L"%s", v23);
      if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) )
      {
        v29 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
        Outpop::Utility::Logger::write_file(v29);
      }
      LOBYTE(v48) = 0;
      Outpop::Utility::Lock::unlock(v21);
      v6 = v40;
    }
    v48 = -1;
    Outpop::Utility::Lock::unlock(v6);
    return -1;
  }
}
