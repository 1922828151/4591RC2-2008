/*
 * func-name: ?handle_time_result@Dgram_Channel@IONetwork@Outpop@@QAEXPAVAsynch_Result@23@@Z
 * func-address: 0x10031df0
 * callers: 0x100346b0
 * callees: 0x10007400
 */

int __thiscall Outpop::IONetwork::Dgram_Channel::handle_time_result(
        Outpop::IONetwork::Dgram_Channel *this,
        struct Outpop::IONetwork::Asynch_Result *a2)
{
  int result; // eax
  Outpop::Utility::Lock *v4; // edi
  Outpop::Utility::Logger *v5; // eax
  wchar_t *log_buffer; // esi
  Outpop::Utility::Logger *v7; // eax
  Outpop::Utility::Logger *v8; // eax
  wchar_t *v9; // eax
  int v10; // eax
  Outpop::Utility::Logger *v11; // eax
  Outpop::Utility::Logger *v12; // eax
  Outpop::Utility::Logger *v13; // eax
  wchar_t *dt; // eax
  int v15; // eax
  Outpop::Utility::Logger *v16; // eax
  wchar_t *v17; // [esp-4h] [ebp-24h]
  wchar_t *tm; // [esp-4h] [ebp-24h]

  if ( *((_DWORD *)a2 + 6) == 1 )
  {
    if ( (*(_BYTE *)(Outpop::Utility::Logger::instance() + 136) == 1
       || *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) == 1)
      && *(_BYTE *)(Outpop::Utility::Logger::instance() + 141) == 1 )
    {
      v4 = (Outpop::Utility::Lock *)(Outpop::Utility::Logger::instance() + 144);
      Outpop::Utility::Lock::lock(v4);
      v11 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
      log_buffer = Outpop::Utility::Logger::get_log_buffer(v11);
      v12 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
      tm = Outpop::Utility::Logger::make_tm(v12);
      v13 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
      dt = Outpop::Utility::Logger::make_dt(v13);
      v15 = sub_10007400(0xFFFFu, log_buffer, L"\nLOGINFO %s:%s Message:", dt, tm);
      sub_10007400(
        0xFFFF - v15,
        &log_buffer[v15],
        L" Dgram_Channel::handle_time_result bytes_to_transmit is :%d,channel id is %d",
        *((_DWORD *)a2 + 6),
        *((_DWORD *)this + 28));
      goto LABEL_11;
    }
  }
  else
  {
    result = *((_DWORD *)a2 + 6) - 2;
    if ( *((_DWORD *)a2 + 6) != 2 )
      return result;
    if ( (*(_BYTE *)(Outpop::Utility::Logger::instance() + 136) == 1
       || *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) == 1)
      && *(_BYTE *)(Outpop::Utility::Logger::instance() + 141) == 1 )
    {
      v4 = (Outpop::Utility::Lock *)(Outpop::Utility::Logger::instance() + 144);
      Outpop::Utility::Lock::lock(v4);
      v5 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
      log_buffer = Outpop::Utility::Logger::get_log_buffer(v5);
      v7 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
      v17 = Outpop::Utility::Logger::make_tm(v7);
      v8 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
      v9 = Outpop::Utility::Logger::make_dt(v8);
      v10 = sub_10007400(0xFFFFu, log_buffer, L"\nLOGINFO %s:%s Message:", v9, v17);
      sub_10007400(
        0xFFFF - v10,
        &log_buffer[v10],
        L" Dgram_Channel::handle_time_result bytes_to_transmit is :%d,channel  id is %d",
        *((_DWORD *)a2 + 6),
        *((_DWORD *)this + 28));
LABEL_11:
      if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 136) )
        wprintf(L"%s", log_buffer);
      if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) )
      {
        v16 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
        Outpop::Utility::Logger::write_file(v16);
      }
      Outpop::Utility::Lock::unlock(v4);
    }
  }
  return (*(int (__thiscall **)(Outpop::IONetwork::Dgram_Channel *))(*(_DWORD *)this + 24))(this);
}
