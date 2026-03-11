/*
 * func-name: ?interal_print_remote_peer@Peer@P2P@Outpop@@IAEXXZ
 * func-address: 0x10005b40
 * callers: 0x10002c50
 * callees: 0x1000a570, 0x100232f2, 0x100232f7, 0x10023356
 */

void __thiscall Outpop::P2P::Peer::interal_print_remote_peer(Outpop::P2P::Peer *this)
{
  _DWORD *v1; // edi
  char *v2; // esi
  int v3; // ebx
  char *v4; // ebx
  _DWORD *v5; // edi
  Outpop::Utility::Ref_Object *v6; // ebx
  struct Outpop::IONetwork::INET_Addr *remote_address; // eax
  const char *host_addr; // eax
  Outpop::Utility::Lock *v9; // edi
  Outpop::Utility::Logger *v10; // eax
  wchar_t *log_buffer; // esi
  Outpop::Utility::Logger *v12; // eax
  Outpop::Utility::Logger *v13; // eax
  wchar_t *dt; // eax
  int v15; // eax
  Outpop::Utility::Logger *v16; // eax
  int port_number; // [esp-4h] [ebp-60h]
  wchar_t *tm; // [esp-4h] [ebp-60h]
  Outpop::IONetwork::Channel *v19; // [esp+10h] [ebp-4Ch]
  const char *v20; // [esp+10h] [ebp-4Ch]
  int v21; // [esp+14h] [ebp-48h]
  char *v22; // [esp+18h] [ebp-44h]
  _BYTE v23[28]; // [esp+2Ch] [ebp-30h] BYREF
  int v24; // [esp+58h] [ebp-4h]

  v1 = (_DWORD *)**((_DWORD **)this + 17);
  v2 = (char *)this + 64;
  v3 = 0;
  while ( v1 != *((_DWORD **)this + 17) )
  {
    v3 += *(_DWORD *)(v1[9] + 32) + 64;
    v1 = (_DWORD *)*v1;
  }
  v4 = (char *)operator new(v3 + 512);
  v22 = v4;
  v21 = sprintf(v4, "Remote peer:\n");
  v5 = (_DWORD *)**((_DWORD **)v2 + 1);
  while ( v5 != *((_DWORD **)v2 + 1) )
  {
    v6 = (Outpop::Utility::Ref_Object *)v5[9];
    if ( v6 )
      Outpop::Utility::Ref_Object::addref(v6);
    v24 = 0;
    v19 = (Outpop::IONetwork::Channel *)*((_DWORD *)v6 + 2);
    Outpop::IONetwork::INET_Addr::INET_Addr((Outpop::IONetwork::INET_Addr *)v23);
    LOBYTE(v24) = 1;
    remote_address = Outpop::IONetwork::Channel::get_remote_address(v19);
    Outpop::IONetwork::INET_Addr::operator=(v23, remote_address);
    if ( v5 == *((_DWORD **)v2 + 1) )
      invalid_parameter_noinfo();
    if ( v5[8] < 0x10u )
      v20 = (const char *)(v5 + 3);
    else
      v20 = (const char *)v5[3];
    port_number = (unsigned __int16)Outpop::IONetwork::INET_Addr::get_port_number((Outpop::IONetwork::INET_Addr *)v23);
    host_addr = Outpop::IONetwork::INET_Addr::get_host_addr((Outpop::IONetwork::INET_Addr *)v23);
    v21 += sprintf(&v22[v21], "%s\tremote addr %s:%d\n", v20, host_addr, port_number);
    LOBYTE(v24) = 0;
    Outpop::IONetwork::INET_Addr::~INET_Addr((Outpop::IONetwork::INET_Addr *)v23);
    v24 = -1;
    Outpop::Utility::Ref_Object::release(v6);
    if ( v5 == *((_DWORD **)v2 + 1) )
      invalid_parameter_noinfo();
    v5 = (_DWORD *)*v5;
    v4 = v22;
  }
  if ( (*(_BYTE *)(Outpop::Utility::Logger::instance() + 136) == 1
     || *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) == 1)
    && *(_BYTE *)(Outpop::Utility::Logger::instance() + 141) == 1 )
  {
    v9 = (Outpop::Utility::Lock *)(Outpop::Utility::Logger::instance() + 144);
    Outpop::Utility::Lock::lock(v9);
    v24 = 2;
    v10 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
    log_buffer = Outpop::Utility::Logger::get_log_buffer(v10);
    v12 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
    tm = Outpop::Utility::Logger::make_tm(v12);
    v13 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
    dt = Outpop::Utility::Logger::make_dt(v13);
    v15 = sub_1000A570(log_buffer, L"\nLOGINFO %s:%s Message:", dt, tm);
    sub_1000A570(&log_buffer[v15], L"%S", v4);
    if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 136) )
      wprintf(L"%s", log_buffer);
    if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) )
    {
      v16 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
      Outpop::Utility::Logger::write_file(v16);
    }
    v24 = -1;
    Outpop::Utility::Lock::unlock(v9);
  }
  operator delete[](v4);
}
