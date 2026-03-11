/*
 * func-name: sub_1001DEC0
 * func-address: 0x1001dec0
 * callers: 0x1000b380, 0x1000b480, 0x1000f300, 0x10012410, 0x10015740, 0x1001c100, 0x1001c6d0, 0x1001ce80, 0x10027260
 * callees: 0x10003860, 0x10029d92
 */

int __fastcall sub_1001DEC0(unsigned int a1, int a2)
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
    sub_10003860(pExceptionObject, (int)v4);
    CxxThrowException(pExceptionObject, (_ThrowInfo *)&_TI3_AVlength_error_std__);
  }
  result = a1 + v2;
  *(_DWORD *)(a2 + 8) = result;
  return result;
}
