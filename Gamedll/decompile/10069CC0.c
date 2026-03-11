/*
 * func-name: sub_10069CC0
 * func-address: 0x10069cc0
 * callers: 0x10003eea
 * callees: 0x10009ac0, 0x102c9d86
 */

void __cdecl __noreturn sub_10069CC0(int a1, int a2)
{
  _BYTE v2[28]; // [esp+4h] [ebp-50h] BYREF
  _DWORD pExceptionObject[13]; // [esp+20h] [ebp-34h] BYREF

  std::string::string(v2, "vector<T> too long");
  pExceptionObject[12] = 0;
  sub_10009AC0(v2);
  pExceptionObject[0] = &std::length_error::`vftable';
  CxxThrowException(pExceptionObject, (_ThrowInfo *)&_TI3_AVlength_error_std__);
}
