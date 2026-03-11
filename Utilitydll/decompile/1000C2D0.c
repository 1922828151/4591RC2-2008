/*
 * func-name: ??0Thread_Mutex@Utility@Outpop@@QAE@XZ
 * func-address: 0x1000c2d0
 * callers: none
 * callees: none
 */

LPCRITICAL_SECTION __thiscall Outpop::Utility::Thread_Mutex::Thread_Mutex(LPCRITICAL_SECTION lpCriticalSection)
{
  InitializeCriticalSection(lpCriticalSection);
  return lpCriticalSection;
}
