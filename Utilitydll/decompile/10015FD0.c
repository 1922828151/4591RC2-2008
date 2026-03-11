/*
 * func-name: ??0Lock@Utility@Outpop@@QAE@XZ
 * func-address: 0x10015fd0
 * callers: none
 * callees: none
 */

LPCRITICAL_SECTION __thiscall Outpop::Utility::Lock::Lock(LPCRITICAL_SECTION lpCriticalSection)
{
  InitializeCriticalSection(lpCriticalSection);
  InitializeCriticalSectionAndSpinCount(lpCriticalSection, 0xAu);
  return lpCriticalSection;
}
