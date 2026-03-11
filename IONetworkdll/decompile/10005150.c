/*
 * func-name: ?set_id@Channel@IONetwork@Outpop@@QAEXI@Z
 * func-address: 0x10005150
 * callers: none
 * callees: 0x10007400
 */

void __thiscall Outpop::IONetwork::Channel::set_id(Outpop::IONetwork::Channel *this, unsigned int a2)
{
  Outpop::Utility::Lock *v3; // edi
  Outpop::Utility::Logger *v4; // eax
  wchar_t *log_buffer; // esi
  Outpop::Utility::Logger *v6; // eax
  Outpop::Utility::Logger *v7; // eax
  wchar_t *dt; // eax
  int v9; // eax
  Outpop::Utility::Logger *v10; // eax
  wchar_t *tm; // [esp-4h] [ebp-28h]

  if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 136) == 1
    || *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) == 1 )
  {
    if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 141) == 1 )
    {
      v3 = (Outpop::Utility::Lock *)(Outpop::Utility::Logger::instance() + 144);
      Outpop::Utility::Lock::lock(v3);
      v4 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
      log_buffer = Outpop::Utility::Logger::get_log_buffer(v4);
      v6 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
      tm = Outpop::Utility::Logger::make_tm(v6);
      v7 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
      dt = Outpop::Utility::Logger::make_dt(v7);
      v9 = sub_10007400(log_buffer, L"\nLOGINFO %s:%s Message:", dt, tm);
      sub_10007400(&log_buffer[v9], L"channel set id  id  is %d", a2);
      if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 136) )
        wprintf(L"%s", log_buffer);
      if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) )
      {
        v10 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
        Outpop::Utility::Logger::write_file(v10);
      }
      Outpop::Utility::Lock::unlock(v3);
      *((_DWORD *)this + 28) = a2;
    }
    else
    {
      *((_DWORD *)this + 28) = a2;
    }
  }
  else
  {
    *((_DWORD *)this + 28) = a2;
  }
}
