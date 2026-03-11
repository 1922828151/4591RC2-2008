/*
 * func-name: ?handle_close@Channel_Manager@Message@Outpop@@UAEXHAAV?$Smart_Ptr@VChannel@IONetwork@Outpop@@@Utility@3@@Z
 * func-address: 0x10010a20
 * callers: none
 * callees: 0x100167c0, 0x1001d450, 0x1001fa50, 0x100222f0, 0x10023490, 0x10028f90
 */

void __thiscall Outpop::Message::Channel_Manager::handle_close(int this, int a2, Outpop::IONetwork::Channel **a3)
{
  int v3; // ebx
  Outpop::Utility::Lock *v4; // edi
  Outpop::Utility::Logger *v5; // eax
  wchar_t *v6; // ebx
  int v7; // edi
  Outpop::Utility::Logger *v8; // eax
  Outpop::Utility::Logger *v9; // eax
  wchar_t *v10; // eax
  int v11; // eax
  Outpop::IONetwork::Channel *v12; // esi
  int v13; // edi
  Outpop::IONetwork::INET_Addr *v14; // eax
  Outpop::IONetwork::INET_Addr *v15; // eax
  const char *v16; // eax
  Outpop::Utility::Logger *v17; // eax
  Outpop::IONetwork::Channel **v18; // esi
  int v19; // ecx
  void *v20; // edi
  Outpop::Utility::Logger *v21; // eax
  wchar_t *log_buffer; // ebx
  int v23; // edi
  Outpop::Utility::Logger *v24; // eax
  Outpop::Utility::Logger *v25; // eax
  wchar_t *dt; // eax
  int v27; // eax
  Outpop::IONetwork::Channel *v28; // esi
  Outpop::IONetwork::Channel *v29; // ecx
  int v30; // edi
  Outpop::IONetwork::INET_Addr *remote_address; // eax
  Outpop::IONetwork::INET_Addr *v32; // eax
  const char *host_addr; // eax
  Outpop::Utility::Logger *v34; // eax
  Outpop::IONetwork::Channel *v35; // edi
  int act_obj; // eax
  Outpop::IONetwork::Channel *v37; // esi
  int error_code; // eax
  Outpop::IONetwork::Channel **v39; // esi
  Outpop::Utility::Logger *v40; // eax
  wchar_t *v41; // ebx
  int v42; // esi
  Outpop::Utility::Logger *v43; // eax
  Outpop::Utility::Logger *v44; // eax
  wchar_t *v45; // eax
  int v46; // eax
  Outpop::IONetwork::Channel *v47; // edi
  int v48; // esi
  Outpop::IONetwork::Channel *v49; // ecx
  Outpop::IONetwork::INET_Addr *v50; // eax
  Outpop::IONetwork::INET_Addr *v51; // eax
  const char *v52; // eax
  Outpop::Utility::Logger *v53; // eax
  wchar_t *v54; // [esp-18h] [ebp-54h]
  wchar_t *tm; // [esp-18h] [ebp-54h]
  wchar_t *v56; // [esp-18h] [ebp-54h]
  DWORD v57; // [esp-14h] [ebp-50h]
  DWORD CurrentProcessId; // [esp-14h] [ebp-50h]
  struct Outpop::IONetwork::INET_Addr *local_address; // [esp-14h] [ebp-50h]
  DWORD v60; // [esp-14h] [ebp-50h]
  DWORD v61; // [esp-10h] [ebp-4Ch]
  DWORD CurrentThreadId; // [esp-10h] [ebp-4Ch]
  int v63; // [esp-10h] [ebp-4Ch]
  DWORD v64; // [esp-10h] [ebp-4Ch]
  DWORD v65; // [esp-Ch] [ebp-48h]
  DWORD LastError; // [esp-Ch] [ebp-48h]
  int v67; // [esp-Ch] [ebp-48h]
  DWORD v68; // [esp-Ch] [ebp-48h]
  int v69; // [esp-8h] [ebp-44h]
  int v70; // [esp-8h] [ebp-44h]
  int v71; // [esp-4h] [ebp-40h]
  int port_number; // [esp-4h] [ebp-40h]
  int v73; // [esp-4h] [ebp-40h]
  char v74; // [esp+13h] [ebp-29h]
  Outpop::Utility::Lock *v75; // [esp+14h] [ebp-28h]
  Outpop::Utility::Lock *v77; // [esp+18h] [ebp-24h]
  int v78; // [esp+1Ch] [ebp-20h] BYREF
  Outpop::Utility::Lock *v79; // [esp+20h] [ebp-1Ch]
  int v80; // [esp+24h] [ebp-18h] BYREF
  void *v81; // [esp+28h] [ebp-14h]
  int v82; // [esp+34h] [ebp-8h]
  int v83; // [esp+38h] [ebp-4h]

  v3 = this;
  v4 = (Outpop::Utility::Lock *)(this + 64);
  v75 = (Outpop::Utility::Lock *)(this + 64);
  v74 = 0;
  Outpop::Utility::Lock::lock((Outpop::Utility::Lock *)(this + 64));
  v83 = 0;
  if ( *(_BYTE *)(v3 + 164) )
  {
    v18 = a3;
    v78 = *((_DWORD *)*a3 + 28);
    sub_100222F0(&v80, &v78);
    v19 = v80;
    v20 = *(void **)(v3 + 96);
    if ( !v80 || v80 != v3 + 92 )
    {
      invalid_parameter_noinfo();
      v19 = v80;
    }
    if ( v81 == v20 )
    {
      if ( (*(_BYTE *)(Outpop::Utility::Logger::instance() + 136) == 1
         || *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) == 1)
        && *(_BYTE *)(Outpop::Utility::Logger::instance() + 138) == 1 )
      {
        v79 = (Outpop::Utility::Lock *)(Outpop::Utility::Logger::instance() + 144);
        Outpop::Utility::Lock::lock(v79);
        LOBYTE(v83) = 2;
        v21 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
        log_buffer = Outpop::Utility::Logger::get_log_buffer(v21);
        v23 = sub_10023490(log_buffer, L"\n%s", L"LOG_DEBUG");
        LastError = GetLastError();
        CurrentThreadId = GetCurrentThreadId();
        CurrentProcessId = GetCurrentProcessId();
        v24 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
        tm = Outpop::Utility::Logger::make_tm(v24);
        v25 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
        dt = Outpop::Utility::Logger::make_dt(v25);
        v27 = sub_10023490(
                &log_buffer[v23],
                L" %s:%s PID:%d TID:%d EID:%d\n\tFILE:%s %d Line \n\tMessage:",
                dt,
                tm,
                CurrentProcessId,
                CurrentThreadId,
                LastError,
                L"D:\\R3\\OutpopGameProject\\MessageService\\Channel_Manager.cpp",
                124);
        v28 = *a3;
        v29 = *a3;
        v30 = v27 + v23;
        v78 = *((_DWORD *)*a3 + 28);
        remote_address = Outpop::IONetwork::Channel::get_remote_address(v29);
        port_number = Outpop::IONetwork::INET_Addr::get_port_number(remote_address);
        v32 = Outpop::IONetwork::Channel::get_remote_address(v28);
        host_addr = Outpop::IONetwork::INET_Addr::get_host_addr(v32);
        sub_10023490(
          &log_buffer[v30],
          L"Channel Manager handle close not find channel id is %d remote id %d remote type %d local id %d local type %d r"
           "emote address %S:%d",
          v78,
          *((_DWORD *)v28 + 3),
          *((_DWORD *)v28 + 5),
          *((_DWORD *)v28 + 2),
          *((_DWORD *)v28 + 4),
          host_addr,
          port_number);
        if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 136) )
          wprintf(L"%s", log_buffer);
        if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) )
        {
          v34 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
          Outpop::Utility::Logger::write_file(v34);
        }
        LOBYTE(v83) = 0;
        Outpop::Utility::Lock::unlock(v79);
        v3 = this;
        v18 = a3;
      }
    }
    else
    {
      sub_1001D450((int)&v80, v19, v81);
      v74 = 1;
    }
    v83 = -1;
    Outpop::Utility::Lock::unlock(v75);
    if ( v74 == 1 )
    {
      v35 = *v18;
      act_obj = Outpop::IONetwork::Channel::get_act_obj();
      v82 = 3;
      v37 = *v18;
      v78 = *((_DWORD *)v37 + 31);
      v69 = act_obj;
      v67 = (*(int (__thiscall **)(Outpop::IONetwork::Channel *))(*(_DWORD *)v35 + 52))(v35);
      v63 = v78;
      local_address = Outpop::IONetwork::Channel::get_local_address(v37);
      Outpop::IONetwork::Channel::get_remote_address(v37);
      error_code = Outpop::IONetwork::Channel::get_error_code(v37);
      Outpop::Message::Handler_Manager::dispatch_error_channel(
        v78,
        *((_DWORD *)v37 + 2),
        *((_DWORD *)v37 + 4),
        *((_DWORD *)v37 + 3),
        *((_DWORD *)v37 + 5),
        error_code,
        local_address,
        v63,
        v67,
        v69,
        &v80);
      v83 = -1;
      if ( v80 )
        Outpop::Utility::Ref_Object::release((Outpop::Utility::Ref_Object *)v80);
      v39 = a3;
      Outpop::Message::Remote_Event_Manager::on_channel_error(
        *(Outpop::Message::Remote_Event_Manager **)(*(_DWORD *)(v3 + 60) + 72),
        *((_DWORD *)*a3 + 28),
        *((_DWORD *)*a3 + 5),
        *((_DWORD *)*a3 + 3));
      if ( (*(_BYTE *)(Outpop::Utility::Logger::instance() + 136) == 1
         || *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) == 1)
        && *(_BYTE *)(Outpop::Utility::Logger::instance() + 138) == 1 )
      {
        v79 = (Outpop::Utility::Lock *)(Outpop::Utility::Logger::instance() + 144);
        Outpop::Utility::Lock::lock(v79);
        v83 = 4;
        v40 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
        v41 = Outpop::Utility::Logger::get_log_buffer(v40);
        v42 = sub_10023490(v41, L"\n%s", L"LOG_DEBUG");
        v68 = GetLastError();
        v64 = GetCurrentThreadId();
        v60 = GetCurrentProcessId();
        v43 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
        v56 = Outpop::Utility::Logger::make_tm(v43);
        v44 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
        v45 = Outpop::Utility::Logger::make_dt(v44);
        v46 = sub_10023490(
                &v41[v42],
                L" %s:%s PID:%d TID:%d EID:%d\n\tFILE:%s %d Line \n\tMessage:",
                v45,
                v56,
                v60,
                v64,
                v68,
                L"D:\\R3\\OutpopGameProject\\MessageService\\Channel_Manager.cpp",
                137);
        v47 = *a3;
        v48 = v46 + v42;
        v49 = *a3;
        v80 = *((_DWORD *)*a3 + 28);
        v73 = Outpop::IONetwork::Channel::get_error_code(v49);
        v50 = Outpop::IONetwork::Channel::get_remote_address(v47);
        v70 = Outpop::IONetwork::INET_Addr::get_port_number(v50);
        v51 = Outpop::IONetwork::Channel::get_remote_address(v47);
        v52 = Outpop::IONetwork::INET_Addr::get_host_addr(v51);
        sub_10023490(&v41[v48], L"Channel Manager channel id %d from %S:%d error %d", v80, v52, v70, v73);
        if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 136) )
          wprintf(L"%s", v41);
        if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) )
        {
          v53 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
          Outpop::Utility::Logger::write_file(v53);
        }
        v83 = -1;
        Outpop::Utility::Lock::unlock(v79);
        v39 = a3;
      }
      if ( (*(int (__thiscall **)(Outpop::IONetwork::Channel *))(*(_DWORD *)*v39 + 40))(*v39) )
      {
        (*(void (__thiscall **)(Outpop::IONetwork::Channel *))(*(_DWORD *)*v39 + 40))(*v39);
        sub_100167C0();
      }
    }
  }
  else
  {
    if ( (*(_BYTE *)(Outpop::Utility::Logger::instance() + 136) == 1
       || *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) == 1)
      && *(_BYTE *)(Outpop::Utility::Logger::instance() + 138) == 1 )
    {
      v77 = (Outpop::Utility::Lock *)(Outpop::Utility::Logger::instance() + 144);
      Outpop::Utility::Lock::lock(v77);
      LOBYTE(v83) = 1;
      v5 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
      v6 = Outpop::Utility::Logger::get_log_buffer(v5);
      v7 = sub_10023490(v6, L"\n%s", L"LOG_DEBUG");
      v65 = GetLastError();
      v61 = GetCurrentThreadId();
      v57 = GetCurrentProcessId();
      v8 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
      v54 = Outpop::Utility::Logger::make_tm(v8);
      v9 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
      v10 = Outpop::Utility::Logger::make_dt(v9);
      v11 = sub_10023490(
              &v6[v7],
              L" %s:%s PID:%d TID:%d EID:%d\n\tFILE:%s %d Line \n\tMessage:",
              v10,
              v54,
              v57,
              v61,
              v65,
              L"D:\\R3\\OutpopGameProject\\MessageService\\Channel_Manager.cpp",
              111);
      v12 = *a3;
      v13 = v11 + v7;
      v14 = Outpop::IONetwork::Channel::get_remote_address(*a3);
      v71 = Outpop::IONetwork::INET_Addr::get_port_number(v14);
      v15 = Outpop::IONetwork::Channel::get_remote_address(v12);
      v16 = Outpop::IONetwork::INET_Addr::get_host_addr(v15);
      sub_10023490(
        &v6[v13],
        L"Channel_Manager::handle_close but channel manager is close remote id %d remote type %d local id %d local type %d"
         " remote address %S:%d",
        *((_DWORD *)v12 + 3),
        *((_DWORD *)v12 + 5),
        *((_DWORD *)v12 + 2),
        *((_DWORD *)v12 + 4),
        v16,
        v71);
      if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 136) )
        wprintf(L"%s", v6);
      if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) )
      {
        v17 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
        Outpop::Utility::Logger::write_file(v17);
      }
      LOBYTE(v83) = 0;
      Outpop::Utility::Lock::unlock(v77);
      v4 = v75;
    }
    v83 = -1;
    Outpop::Utility::Lock::unlock(v4);
  }
}
