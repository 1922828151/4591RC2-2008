/*
 * func-name: ?init@Recursive_mutex@Utility@Outpop@@QAEXXZ
 * func-address: 0x1000c4d0
 * callers: none
 * callees: none
 */

void __thiscall Outpop::Utility::Recursive_mutex::init(LPCRITICAL_SECTION lpCriticalSection)
{
  InitializeCriticalSection(lpCriticalSection);
  lpCriticalSection[1].DebugInfo = (PRTL_CRITICAL_SECTION_DEBUG)1;
}
