/*
 * func-name: sub_1001CC90
 * func-address: 0x1001cc90
 * callers: none
 * callees: 0x10018cdf
 */

int sub_1001CC90()
{
  InitializeCriticalSection(&Outpop::Utility::Singleton_Manager::g_singleton_lock_);
  InitializeCriticalSectionAndSpinCount(&Outpop::Utility::Singleton_Manager::g_singleton_lock_, 0xAu);
  return atexit(sub_1001CCF0);
}
