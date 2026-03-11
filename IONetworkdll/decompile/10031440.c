/*
 * func-name: ?get_squences_stream@Dgram_Channel@IONetwork@Outpop@@UAEXAAV?$vector@V?$Smart_Ptr@VBinary_Stream@Utility@Outpop@@@Utility@Outpop@@V?$allocator@V?$Smart_Ptr@VBinary_Stream@Utility@Outpop@@@Utility@Outpop@@@std@@@std@@00@Z
 * func-address: 0x10031440
 * callers: none
 * callees: 0x10007400, 0x1003cc10
 */

int __thiscall Outpop::IONetwork::Dgram_Channel::get_squences_stream(_DWORD *this, int a2, int a3, int a4)
{
  Outpop::Utility::Lock *v5; // edi
  Outpop::Utility::Logger *v6; // eax
  wchar_t *log_buffer; // esi
  Outpop::Utility::Logger *v8; // eax
  Outpop::Utility::Logger *v9; // eax
  wchar_t *dt; // eax
  int v11; // eax
  Outpop::Utility::Logger *v12; // eax
  wchar_t *tm; // [esp-4h] [ebp-24h]

  if ( (*(_BYTE *)(Outpop::Utility::Logger::instance() + 136) == 1
     || *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) == 1)
    && *(_BYTE *)(Outpop::Utility::Logger::instance() + 141) == 1 )
  {
    v5 = (Outpop::Utility::Lock *)(Outpop::Utility::Logger::instance() + 144);
    Outpop::Utility::Lock::lock(v5);
    v6 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
    log_buffer = Outpop::Utility::Logger::get_log_buffer(v6);
    v8 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
    tm = Outpop::Utility::Logger::make_tm(v8);
    v9 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
    dt = Outpop::Utility::Logger::make_dt(v9);
    v11 = sub_10007400(0xFFFFu, log_buffer, L"\nLOGINFO %s:%s Message:", dt, tm);
    sub_10007400(0xFFFF - v11, &log_buffer[v11], L"channe  %d   is  get_squences_stream", this[28]);
    if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 136) )
      wprintf(L"%s", log_buffer);
    if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) )
    {
      v12 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
      Outpop::Utility::Logger::write_file(v12);
    }
    Outpop::Utility::Lock::unlock(v5);
  }
  return Outpop::IONetwork::Sequence_Container::get_stream_from_container(a2, a3, a4);
}
