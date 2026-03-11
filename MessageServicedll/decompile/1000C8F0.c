/*
 * func-name: ?wait@Message_Facade@Message@Outpop@@SAXXZ
 * func-address: 0x1000c8f0
 * callers: none
 * callees: 0x10023490
 */

void __cdecl Outpop::Message::Message_Facade::wait()
{
  Outpop::Utility::Lock *v0; // edi
  Outpop::Utility::Logger *v1; // eax
  wchar_t *log_buffer; // esi
  Outpop::Utility::Logger *v3; // eax
  Outpop::Utility::Logger *v4; // eax
  wchar_t *dt; // eax
  int v6; // eax
  Outpop::Utility::Logger *v7; // eax
  Outpop::Utility::Lock *v8; // edi
  Outpop::Utility::Logger *v9; // eax
  wchar_t *v10; // esi
  Outpop::Utility::Logger *v11; // eax
  Outpop::Utility::Logger *v12; // eax
  wchar_t *v13; // eax
  int v14; // eax
  Outpop::Utility::Logger *v15; // eax
  wchar_t *tm; // [esp-4h] [ebp-28h]
  wchar_t *v17; // [esp-4h] [ebp-28h]

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
    sub_10023490(&log_buffer[v6], L"Message_Facade begin waiting...");
    if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 136) )
      wprintf(L"%s", log_buffer);
    if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) )
    {
      v7 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
      Outpop::Utility::Logger::write_file(v7);
    }
    Outpop::Utility::Lock::unlock(v0);
  }
  Outpop::Utility::Task::wait(*((Outpop::Utility::Task **)Outpop::Message::Message_Facade::g_c_ + 15));
  Outpop::Utility::Task::wait(*((Outpop::Utility::Task **)Outpop::Message::Message_Facade::g_c_ + 16));
  if ( (*(_BYTE *)(Outpop::Utility::Logger::instance() + 136) == 1
     || *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) == 1)
    && *(_BYTE *)(Outpop::Utility::Logger::instance() + 141) == 1 )
  {
    v8 = (Outpop::Utility::Lock *)(Outpop::Utility::Logger::instance() + 144);
    Outpop::Utility::Lock::lock(v8);
    v9 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
    v10 = Outpop::Utility::Logger::get_log_buffer(v9);
    v11 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
    v17 = Outpop::Utility::Logger::make_tm(v11);
    v12 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
    v13 = Outpop::Utility::Logger::make_dt(v12);
    v14 = sub_10023490(v10, L"\nLOGINFO %s:%s Message:", v13, v17);
    sub_10023490(&v10[v14], L"Message_Facade end waiting...");
    if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 136) )
      wprintf(L"%s", v10);
    if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) )
    {
      v15 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
      Outpop::Utility::Logger::write_file(v15);
    }
    Outpop::Utility::Lock::unlock(v8);
  }
}
