/*
 * func-name: ??0Recursive_mutex@Utility@Outpop@@QAE@XZ
 * func-address: 0x1000c4b0
 * callers: none
 * callees: none
 */

LPCRITICAL_SECTION __thiscall Outpop::Utility::Recursive_mutex::Recursive_mutex(LPCRITICAL_SECTION lpCriticalSection)
{
  lpCriticalSection[1].DebugInfo = 0;
  InitializeCriticalSection(lpCriticalSection);
  lpCriticalSection[1].DebugInfo = (PRTL_CRITICAL_SECTION_DEBUG)1;
  return lpCriticalSection;
}
