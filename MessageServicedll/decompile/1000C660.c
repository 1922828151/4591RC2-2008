/*
 * func-name: ?run@Message_Facade@Message@Outpop@@SAXXZ
 * func-address: 0x1000c660
 * callers: none
 * callees: 0x100063b0, 0x10023490
 */

void __cdecl Outpop::Message::Message_Facade::run()
{
  Outpop::Utility::Lock *v0; // edi
  Outpop::Utility::Logger *v1; // eax
  wchar_t *log_buffer; // esi
  Outpop::Utility::Logger *v3; // eax
  Outpop::Utility::Logger *v4; // eax
  wchar_t *dt; // eax
  int v6; // eax
  Outpop::Utility::Logger *v7; // eax
  wchar_t *tm; // [esp-4h] [ebp-20h]

  if ( (*(_BYTE *)(Outpop::Utility::Logger::instance() + 136) == 1
     || *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) == 1)
    && *(_BYTE *)(Outpop::Utility::Logger::instance() + 141) == 1 )
  {
    v0 = (Outpop::Utility::Lock *)(Outpop::Utility::Logger::instance() + 144);
    Outpop::Utility::Lock::lock(v0);
    v1 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
    log_buffer = Outpop::Utility::Logger::get_log_buffer(v1);
    v3 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
    tm = Outpop::Utility::Logger::make_tm(v3);
    v4 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
    dt = Outpop::Utility::Logger::make_dt(v4);
    v6 = sub_10023490(log_buffer, L"\nLOGINFO %s:%s Message:", dt, tm);
    sub_10023490(&log_buffer[v6], L"Message_Facade run...");
    if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 136) )
      wprintf(L"%s", log_buffer);
    if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) )
    {
      v7 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
      Outpop::Utility::Logger::write_file(v7);
    }
    Outpop::Utility::Lock::unlock(v0);
  }
  Outpop::Message::Context::initialize(Outpop::Message::Message_Facade::g_c_);
}
