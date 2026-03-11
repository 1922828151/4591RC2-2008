/*
 * func-name: sub_100A0F30
 * func-address: 0x100a0f30
 * callers: 0x1000b8e8
 * callees: 0x10009ac0, 0x102c9d86
 */

void __cdecl __noreturn sub_100A0F30(int a1, int a2)
{
  _BYTE v2[28]; // [esp+4h] [ebp-50h] BYREF
  _DWORD pExceptionObject[13]; // [esp+20h] [ebp-34h] BYREF

  std::string::string(v2, "vector<T> too long");
  pExceptionObject[12] = 0;
  sub_10009AC0(v2);
  pExceptionObject[0] = &std::length_error::`vftable';
  CxxThrowException(pExceptionObject, (_ThrowInfo *)&_TI3_AVlength_error_std__);
}
