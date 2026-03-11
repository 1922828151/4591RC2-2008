/*
 * func-name: ?acquire@Thread_Mutex@Utility@Outpop@@QAE_NXZ
 * func-address: 0x1000c2f0
 * callers: none
 * callees: none
 */

char __thiscall Outpop::Utility::Thread_Mutex::acquire(LPCRITICAL_SECTION lpCriticalSection)
{
  EnterCriticalSection(lpCriticalSection);
  return 1;
}
