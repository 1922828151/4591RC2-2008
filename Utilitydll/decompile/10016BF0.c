/*
 * func-name: ?instance@Record_Logger@Utility@Outpop@@SAPAV123@XZ
 * func-address: 0x10016bf0
 * callers: none
 * callees: none
 */

struct Outpop::Utility::Record_Logger *__cdecl Outpop::Utility::Record_Logger::instance()
{
  return (struct Outpop::Utility::Record_Logger *)&Outpop::Utility::Record_Logger::g_record_logger_;
}
