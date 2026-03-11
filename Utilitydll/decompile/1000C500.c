/*
 * func-name: ?remove@Recursive_mutex@Utility@Outpop@@QAE_NXZ
 * func-address: 0x1000c500
 * callers: none
 * callees: none
 */

char __thiscall Outpop::Utility::Recursive_mutex::remove(LPCRITICAL_SECTION lpCriticalSection)
{
  LeaveCriticalSection(lpCriticalSection);
  return 1;
}
