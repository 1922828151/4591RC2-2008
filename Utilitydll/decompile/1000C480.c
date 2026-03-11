/*
 * func-name: ?open@Process_mutex@Utility@Outpop@@QAE_NK_NPA_W@Z
 * func-address: 0x1000c480
 * callers: none
 * callees: none
 */

bool __thiscall Outpop::Utility::Process_mutex::open(
        Outpop::Utility::Process_mutex *this,
        DWORD dwDesiredAccess,
        bool a3,
        wchar_t *lpName)
{
  HANDLE v5; // eax

  v5 = OpenMutexW(dwDesiredAccess, a3, lpName);
  *(_DWORD *)this = v5;
  return v5 != 0;
}
