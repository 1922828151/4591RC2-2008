/*
 * func-name: ?remove@Thread_Mutex@Utility@Outpop@@QAE_NXZ
 * func-address: 0x1000c2e0
 * callers: none
 * callees: none
 */

char __thiscall Outpop::Utility::Thread_Mutex::remove(LPCRITICAL_SECTION lpCriticalSection)
{
  DeleteCriticalSection(lpCriticalSection);
  return 1;
}
