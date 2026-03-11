/*
 * func-name: sub_1000F070
 * func-address: 0x1000f070
 * callers: 0x100031a0
 * callees: 0x1000a570
 */

int __userpurge sub_1000F070@<eax>(int a1@<esi>, int a2, int a3, __int16 a4)
{
  Outpop::Utility::Lock *v4; // ebp
  Outpop::Utility::Logger *v5; // eax
  wchar_t *log_buffer; // edi
  Outpop::Utility::Logger *v7; // eax
  Outpop::Utility::Logger *v8; // eax
  wchar_t *dt; // eax
  int v10; // eax
  Outpop::Utility::Logger *v11; // eax
  wchar_t *tm; // [esp+10h] [ebp-1Ch]

  Outpop::IONetwork::INET_Addr::operator=(a1 + 104, a2);
  Outpop::IONetwork::INET_Addr::operator=(a1 + 132, a3);
  *(_WORD *)(a1 + 160) = a4;
  *(_WORD *)(a1 + 162) = 0;
  *(_DWORD *)(a1 + 100) = 10;
  if ( (*(_BYTE *)(Outpop::Utility::Logger::instance() + 136) == 1
     || *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) == 1)
    && *(_BYTE *)(Outpop::Utility::Logger::instance() + 141) == 1 )
  {
    v4 = (Outpop::Utility::Lock *)(Outpop::Utility::Logger::instance() + 144);
    Outpop::Utility::Lock::lock(v4);
    v5 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
    log_buffer = Outpop::Utility::Logger::get_log_buffer(v5);
    v7 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
    tm = Outpop::Utility::Logger::make_tm(v7);
    v8 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
    dt = Outpop::Utility::Logger::make_dt(v8);
    v10 = sub_1000A570(0xFFFFu, log_buffer, L"\nLOGINFO %s:%s Message:", dt, tm);
    sub_1000A570(0xFFFF - v10, &log_buffer[v10], L"UPNP_Network start upnp maping thread!");
    if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 136) )
      wprintf(L"%s", log_buffer);
    if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) )
    {
      v11 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
      Outpop::Utility::Logger::write_file(v11);
    }
    Outpop::Utility::Lock::unlock(v4);
  }
  return Outpop::Utility::Task::activate((Outpop::Utility::Task *)a1, 1, 0, 0, 0, 0);
}
