/*
 * func-name: ??0Process_mutex@Utility@Outpop@@QAE@PBD@Z
 * func-address: 0x1000c310
 * callers: none
 * callees: 0x10019586
 */

Outpop::Utility::Process_mutex *__thiscall Outpop::Utility::Process_mutex::Process_mutex(
        Outpop::Utility::Process_mutex *this,
        LPCSTR lpName)
{
  HANDLE MutexA; // eax
  const CHAR *v5; // [esp-4h] [ebp-14h]
  _BYTE pExceptionObject[12]; // [esp+4h] [ebp-Ch] BYREF

  v5 = lpName;
  *((_DWORD *)this + 1) = lpName;
  MutexA = CreateMutexA(0, 0, v5);
  *(_DWORD *)this = MutexA;
  if ( !MutexA )
  {
    lpName = "CreateMutexA Mutex Falied";
    std::exception::exception((std::exception *)pExceptionObject, &lpName);
    CxxThrowException(pExceptionObject, (_ThrowInfo *)&_TI1_AVexception_std__);
  }
  return this;
}
