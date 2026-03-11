/*
 * func-name: sub_10032860
 * func-address: 0x10032860
 * callers: 0x10032980
 * callees: 0x10032460, 0x10032620, 0x10037449
 */

void __cdecl __noreturn sub_10032860(int a1, int a2)
{
  int v2; // [esp+4h] [ebp-50h] BYREF
  char v3; // [esp+8h] [ebp-4Ch]
  int v4; // [esp+18h] [ebp-3Ch]
  int v5; // [esp+1Ch] [ebp-38h]
  _DWORD pExceptionObject[13]; // [esp+20h] [ebp-34h] BYREF

  v5 = 15;
  v4 = 0;
  v3 = 0;
  sub_10032460(&v2, "vector<T> too long", 0x12u);
  pExceptionObject[12] = 0;
  sub_10032620(pExceptionObject, &v2);
  pExceptionObject[0] = &std::length_error::`vftable';
  _CxxThrowException(pExceptionObject, (_ThrowInfo *)&_TI3_AVlength_error_std__);
}
