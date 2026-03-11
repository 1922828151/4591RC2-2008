/*
 * func-name: sub_10007820
 * func-address: 0x10007820
 * callers: 0x10005e10, 0x10007740, 0x10008d00, 0x1000d580
 * callees: 0x10001f20, 0x10019586
 */

int __fastcall sub_10007820(unsigned int a1, int a2)
{
  int v2; // eax
  int result; // eax
  _BYTE v4[28]; // [esp+Ch] [ebp-50h] BYREF
  _BYTE pExceptionObject[40]; // [esp+28h] [ebp-34h] BYREF
  int v6; // [esp+58h] [ebp-4h]

  v2 = *(_DWORD *)(a2 + 8);
  if ( 0x1FFFFFFF - v2 < a1 )
  {
    std::string::string(v4, "list<T> too long");
    v6 = 0;
    sub_10001F20((std::exception *)pExceptionObject, (int)v4);
    CxxThrowException(pExceptionObject, (_ThrowInfo *)&_TI3_AVlength_error_std__);
  }
  result = a1 + v2;
  *(_DWORD *)(a2 + 8) = result;
  return result;
}
