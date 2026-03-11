/*
 * func-name: ?open_event@Event_Base@Utility@Outpop@@QAE_NKHPA_W@Z
 * func-address: 0x1000bf00
 * callers: none
 * callees: none
 */

bool __thiscall Outpop::Utility::Event_Base::open_event(
        Outpop::Utility::Event_Base *this,
        DWORD dwDesiredAccess,
        BOOL bInheritHandle,
        wchar_t *lpName)
{
  HANDLE v5; // eax

  v5 = OpenEventW(dwDesiredAccess, bInheritHandle, lpName);
  *(_DWORD *)this = v5;
  return v5 != 0;
}
