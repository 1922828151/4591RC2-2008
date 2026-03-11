/*
 * func-name: sub_10016920
 * func-address: 0x10016920
 * callers: none
 * callees: 0x100145a0, 0x10023490
 */

int __thiscall sub_10016920(int this, int a2, int a3, int a4, int a5)
{
  Outpop::Utility::Lock *v6; // edi
  Outpop::Utility::Logger *v7; // eax
  wchar_t *log_buffer; // esi
  Outpop::Utility::Logger *v9; // eax
  Outpop::Utility::Logger *v10; // eax
  wchar_t *dt; // eax
  int v12; // eax
  Outpop::Utility::Logger *v13; // eax
  wchar_t *tm; // [esp-4h] [ebp-24h]

  if ( (*(_BYTE *)(Outpop::Utility::Logger::instance() + 136) == 1
     || *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) == 1)
    && *(_BYTE *)(Outpop::Utility::Logger::instance() + 141) == 1 )
  {
    v6 = (Outpop::Utility::Lock *)(Outpop::Utility::Logger::instance() + 144);
    Outpop::Utility::Lock::lock(v6);
    v7 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
    log_buffer = Outpop::Utility::Logger::get_log_buffer(v7);
    v9 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
    tm = Outpop::Utility::Logger::make_tm(v9);
    v10 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
    dt = Outpop::Utility::Logger::make_dt(v10);
    v12 = sub_10023490(log_buffer, L"\nLOGINFO %s:%s Message:", dt, tm);
    sub_10023490(&log_buffer[v12], L"Auto reconnect connector id %d", *(_DWORD *)(this + 12));
    if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 136) )
      wprintf(L"%s", log_buffer);
    if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) )
    {
      v13 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
      Outpop::Utility::Logger::write_file(v13);
    }
    Outpop::Utility::Lock::unlock(v6);
  }
  return Outpop::Message::Connector_Manager::connect(
           *(Outpop::Message::Connector_Manager **)(*(_DWORD *)(this + 8) + 36),
           *(Outpop::Utility::Ref_Object **)(this + 12));
}
