/*
 * func-name: ?acquire@Recursive_mutex@Utility@Outpop@@QAEHXZ
 * func-address: 0x1000c4f0
 * callers: none
 * callees: none
 */

int __thiscall Outpop::Utility::Recursive_mutex::acquire(LPCRITICAL_SECTION lpCriticalSection)
{
  EnterCriticalSection(lpCriticalSection);
  return 0;
}
