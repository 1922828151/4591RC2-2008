/*
 * func-name: sub_1000E530
 * func-address: 0x1000e530
 * callers: 0x1000dc70
 * callees: 0x10002490, 0x10023bc6
 */

int __fastcall sub_1000E530(unsigned int a1, int a2)
{
  int v2; // eax
  int result; // eax
  _BYTE v4[28]; // [esp+Ch] [ebp-50h] BYREF
  _DWORD pExceptionObject[13]; // [esp+28h] [ebp-34h] BYREF

  v2 = *(_DWORD *)(a2 + 8);
  if ( 0x1FFFFFFF - v2 < a1 )
  {
    std::string::string(v4, "list<T> too long");
    pExceptionObject[12] = 0;
    sub_10002490((std::exception *)pExceptionObject, (int)v4);
    pExceptionObject[0] = &std::length_error::`vftable';
    CxxThrowException(pExceptionObject, (_ThrowInfo *)&_TI3_AVlength_error_std__);
  }
  result = a1 + v2;
  *(_DWORD *)(a2 + 8) = result;
  return result;
}
