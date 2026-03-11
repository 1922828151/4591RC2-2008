/*
 * func-name: ?add_acceptor@Acceptor_Manager@Message@Outpop@@QAEHAAUAcceptor_Config@IONetwork@3@@Z
 * func-address: 0x1000ed90
 * callers: 0x1000cb30, 0x1000d350, 0x1000e1b0, 0x1000e7b0
 * callees: 0x1000e810, 0x10023490
 */

int __thiscall Outpop::Message::Acceptor_Manager::add_acceptor(
        Outpop::Message::Acceptor_Manager *this,
        struct Outpop::IONetwork::Acceptor_Config *a2)
{
  Outpop::Utility::Lock *v3; // ebx
  Outpop::Utility::Logger *v4; // eax
  wchar_t *log_buffer; // edi
  Outpop::Utility::Logger *v6; // eax
  Outpop::Utility::Logger *v7; // eax
  wchar_t *dt; // eax
  int v9; // eax
  Outpop::Utility::Logger *v10; // eax
  wchar_t *tm; // [esp-4h] [ebp-24h]

  if ( (*(_BYTE *)(Outpop::Utility::Logger::instance() + 136) == 1
     || *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) == 1)
    && *(_BYTE *)(Outpop::Utility::Logger::instance() + 141) == 1 )
  {
    v3 = (Outpop::Utility::Lock *)(Outpop::Utility::Logger::instance() + 144);
    Outpop::Utility::Lock::lock(v3);
    v4 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
    log_buffer = Outpop::Utility::Logger::get_log_buffer(v4);
    v6 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
    tm = Outpop::Utility::Logger::make_tm(v6);
    v7 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
    dt = Outpop::Utility::Logger::make_dt(v7);
    v9 = sub_10023490(log_buffer, L"\nLOGINFO %s:%s Message:", dt, tm);
    sub_10023490(
      &log_buffer[v9],
      L"initialize acceptor listen port %d,max allow accept %d ,security %d,bacaklog %d,channel send buffer %d,channel rec"
       "v buffer %d,channel cache %d,channel cache time %d",
      *((unsigned __int16 *)a2 + 36),
      *((_DWORD *)a2 + 19),
      *((unsigned __int8 *)a2 + 80),
      *((_DWORD *)a2 + 21),
      *((_DWORD *)a2 + 4),
      *((_DWORD *)a2 + 5));
    if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 136) )
      wprintf(L"%s", log_buffer);
    if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) )
    {
      v10 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
      Outpop::Utility::Logger::write_file(v10);
    }
    Outpop::Utility::Lock::unlock(v3);
  }
  return Outpop::Message::Acceptor_Manager::build_acceptor(this, a2);
}
