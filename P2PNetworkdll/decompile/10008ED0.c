/*
 * func-name: sub_10008ED0
 * func-address: 0x10008ed0
 * callers: 0x10008500, 0x10009400
 * callees: 0x10002490, 0x10023bc6
 */

void __cdecl __noreturn sub_10008ED0(int a1, int a2)
{
  _BYTE v2[28]; // [esp+8h] [ebp-54h] BYREF
  _DWORD pExceptionObject[14]; // [esp+24h] [ebp-38h] BYREF

  std::string::string(v2, "vector<T> too long");
  pExceptionObject[13] = 0;
  sub_10002490((std::exception *)pExceptionObject, (int)v2);
  pExceptionObject[0] = &std::length_error::`vftable';
  CxxThrowException(pExceptionObject, (_ThrowInfo *)&_TI3_AVlength_error_std__);
}
