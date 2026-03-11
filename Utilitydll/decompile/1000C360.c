/*
 * func-name: ??0Process_mutex@Utility@Outpop@@QAE@PB_W@Z
 * func-address: 0x1000c360
 * callers: none
 * callees: 0x10019586
 */

Outpop::Utility::Process_mutex *__thiscall Outpop::Utility::Process_mutex::Process_mutex(
        Outpop::Utility::Process_mutex *this,
        const wchar_t *lpName)
{
  HANDLE MutexW; // eax
  _BYTE pExceptionObject[12]; // [esp+4h] [ebp-Ch] BYREF

  MutexW = CreateMutexW(0, 0, lpName);
  *(_DWORD *)this = MutexW;
  if ( !MutexW )
  {
    lpName = (const wchar_t *)"CreateMutexW Mutex Falied";
    std::exception::exception((std::exception *)pExceptionObject, (const char *const *)&lpName);
    CxxThrowException(pExceptionObject, (_ThrowInfo *)&_TI1_AVexception_std__);
  }
  return this;
}
