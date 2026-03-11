/*
 * func-name: ??0TF_rwlock_t@Utility@Outpop@@QAE@XZ
 * func-address: 0x1000c970
 * callers: 0x1000cad0
 * callees: none
 */

LPCRITICAL_SECTION __thiscall Outpop::Utility::TF_rwlock_t::TF_rwlock_t(LPCRITICAL_SECTION lpCriticalSection)
{
  InitializeCriticalSection(lpCriticalSection);
  lpCriticalSection[2].LockCount = 0;
  lpCriticalSection[2].RecursionCount = 0;
  lpCriticalSection[4].DebugInfo = 0;
  lpCriticalSection[4].LockCount = 0;
  lpCriticalSection[6].LockCount = 0;
  lpCriticalSection[6].RecursionCount = 0;
  return lpCriticalSection;
}
