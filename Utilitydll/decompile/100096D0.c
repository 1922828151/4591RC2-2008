/*
 * func-name: ??1Barrier_T@Utility@Outpop@@QAE@XZ
 * func-address: 0x100096d0
 * callers: 0x1000ce30, 0x1000d3c0
 * callees: 0x10009520
 */

void __thiscall Outpop::Utility::Barrier_T::~Barrier_T(LPCRITICAL_SECTION lpCriticalSection)
{
  Outpop::Utility::Sub_Barrier_T::~Sub_Barrier_T((Outpop::Utility::Sub_Barrier_T *)&lpCriticalSection[3].LockSemaphore);
  Outpop::Utility::Sub_Barrier_T::~Sub_Barrier_T((Outpop::Utility::Sub_Barrier_T *)&lpCriticalSection[1].RecursionCount);
  DeleteCriticalSection(lpCriticalSection);
}
