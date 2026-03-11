/*
 * func-name: ?open@Process_mutex@Utility@Outpop@@QAE_NK_NPAD@Z
 * func-address: 0x1000c450
 * callers: none
 * callees: none
 */

bool __thiscall Outpop::Utility::Process_mutex::open(
        Outpop::Utility::Process_mutex *this,
        DWORD dwDesiredAccess,
        bool a3,
        char *lpName)
{
  HANDLE v5; // eax

  v5 = OpenMutexA(dwDesiredAccess, a3, lpName);
  *(_DWORD *)this = v5;
  return v5 != 0;
}
