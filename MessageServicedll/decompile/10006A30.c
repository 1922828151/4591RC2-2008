/*
 * func-name: ?close@Context@Message@Outpop@@QAEXXZ
 * func-address: 0x10006a30
 * callers: 0x1000c7a0
 * callees: 0x10014150, 0x10023490
 */

void __thiscall Outpop::Message::Context::close(Outpop::Message::Context *this)
{
  Outpop::Message::Context *v1; // esi
  Outpop::Utility::Lock *v2; // edi
  Outpop::Utility::Logger *v3; // eax
  wchar_t *log_buffer; // esi
  Outpop::Utility::Logger *v5; // eax
  Outpop::Utility::Logger *v6; // eax
  wchar_t *dt; // eax
  int v8; // eax
  Outpop::Utility::Logger *v9; // eax
  Outpop::Utility::Lock *v10; // edi
  Outpop::Utility::Logger *v11; // eax
  wchar_t *v12; // esi
  Outpop::Utility::Logger *v13; // eax
  Outpop::Utility::Logger *v14; // eax
  wchar_t *v15; // eax
  int v16; // eax
  Outpop::Utility::Logger *v17; // eax
  wchar_t *tm; // [esp-4h] [ebp-2Ch]
  wchar_t *v19; // [esp-4h] [ebp-2Ch]

  v1 = this;
  if ( (*(_BYTE *)(Outpop::Utility::Logger::instance() + 136) == 1
     || *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) == 1)
    && *(_BYTE *)(Outpop::Utility::Logger::instance() + 141) == 1 )
  {
    v2 = (Outpop::Utility::Lock *)(Outpop::Utility::Logger::instance() + 144);
    Outpop::Utility::Lock::lock(v2);
    v3 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
    log_buffer = Outpop::Utility::Logger::get_log_buffer(v3);
    v5 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
    tm = Outpop::Utility::Logger::make_tm(v5);
    v6 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
    dt = Outpop::Utility::Logger::make_dt(v6);
    v8 = sub_10023490(log_buffer, L"\nLOGINFO %s:%s Message:", dt, tm);
    sub_10023490(&log_buffer[v8], L"Context stop io thread...");
    if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 136) )
      wprintf(L"%s", log_buffer);
    if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) )
    {
      v9 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
      Outpop::Utility::Logger::write_file(v9);
    }
    Outpop::Utility::Lock::unlock(v2);
    v1 = this;
  }
  Outpop::IONetwork::WIN32_IoCompletionPort::end_event_loop((Outpop::IONetwork::WIN32_IoCompletionPort *)(*((_DWORD *)v1 + 16) + 76));
  if ( (*(_BYTE *)(Outpop::Utility::Logger::instance() + 136) == 1
     || *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) == 1)
    && *(_BYTE *)(Outpop::Utility::Logger::instance() + 141) == 1 )
  {
    v10 = (Outpop::Utility::Lock *)(Outpop::Utility::Logger::instance() + 144);
    Outpop::Utility::Lock::lock(v10);
    v11 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
    v12 = Outpop::Utility::Logger::get_log_buffer(v11);
    v13 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
    v19 = Outpop::Utility::Logger::make_tm(v13);
    v14 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
    v15 = Outpop::Utility::Logger::make_dt(v14);
    v16 = sub_10023490(v12, L"\nLOGINFO %s:%s Message:", v15, v19);
    sub_10023490(&v12[v16], L"Context stop block thread...");
    if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 136) )
      wprintf(L"%s", v12);
    if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) )
    {
      v17 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
      Outpop::Utility::Logger::write_file(v17);
    }
    Outpop::Utility::Lock::unlock(v10);
    v1 = this;
  }
  (*(void (__thiscall **)(_DWORD))(**((_DWORD **)v1 + 15) + 12))(*((_DWORD *)v1 + 15));
  Outpop::Message::Connector_Manager::stop(*((Outpop::Message::Connector_Manager **)v1 + 9));
}
