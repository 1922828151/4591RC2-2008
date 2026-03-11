/*
 * func-name: ?process@Record@Utility@Outpop@@MAE_NXZ
 * func-address: 0x10016d40
 * callers: none
 * callees: 0x10016fc0
 */

char __thiscall Outpop::Utility::Record::process(Outpop::Utility::Record *this)
{
  Outpop::Utility::Record_Logger::log_record(
    (Outpop::Utility::Record_Logger *)Outpop::Utility::Record_Logger::g_record_logger_,
    this);
  return 1;
}
