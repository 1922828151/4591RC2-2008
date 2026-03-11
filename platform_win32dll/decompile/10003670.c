/*
 * func-name: sub_10003670
 * func-address: 0x10003670
 * callers: 0x10003c00
 * callees: 0x10003580, 0x10019876
 */

void __cdecl __noreturn sub_10003670(int a1, int a2)
{
  _BYTE v2[28]; // [esp+4h] [ebp-50h] BYREF
  _DWORD pExceptionObject[13]; // [esp+20h] [ebp-34h] BYREF

  std::string::string("vector<T> too long");
  pExceptionObject[12] = 0;
  sub_10003580((std::exception *)pExceptionObject, (int)v2);
  pExceptionObject[0] = &std::length_error::`vftable';
  CxxThrowException(pExceptionObject, (_ThrowInfo *)&_TI3_AVlength_error_std__);
}
