/*
 * func-name: ?unlock@Lock@Utility@Outpop@@QAEXXZ
 * func-address: 0x10016010
 * callers: none
 * callees: none
 */

void __thiscall Outpop::Utility::Lock::unlock(LPCRITICAL_SECTION lpCriticalSection)
{
  LeaveCriticalSection(lpCriticalSection);
}
