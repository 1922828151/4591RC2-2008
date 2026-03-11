/*
 * func-name: ??1Sub_Barrier_T@Utility@Outpop@@QAE@XZ
 * func-address: 0x10009520
 * callers: 0x10009580, 0x100096d0
 * callees: none
 */

void __thiscall Outpop::Utility::Sub_Barrier_T::~Sub_Barrier_T(Outpop::Utility::Sub_Barrier_T *this)
{
  CloseHandle(*((HANDLE *)this + 8));
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 4));
  CloseHandle(*((HANDLE *)this + 7));
}
