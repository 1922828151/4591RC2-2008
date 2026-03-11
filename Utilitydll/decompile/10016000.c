/*
 * func-name: ?lock@Lock@Utility@Outpop@@QAEXXZ
 * func-address: 0x10016000
 * callers: none
 * callees: none
 */

void __thiscall Outpop::Utility::Lock::lock(LPCRITICAL_SECTION lpCriticalSection)
{
  EnterCriticalSection(lpCriticalSection);
}
