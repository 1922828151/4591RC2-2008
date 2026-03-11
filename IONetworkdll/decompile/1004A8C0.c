/*
 * func-name: sub_1004A8C0
 * func-address: 0x1004a8c0
 * callers: 0x1004a720, 0x1004d220
 * callees: 0x1000c980, 0x1004f112
 */

int __fastcall sub_1004A8C0(unsigned int a1, int a2)
{
  int v2; // eax
  int result; // eax
  _BYTE v4[28]; // [esp+Ch] [ebp-50h] BYREF
  _DWORD pExceptionObject[13]; // [esp+28h] [ebp-34h] BYREF

  v2 = *(_DWORD *)(a2 + 8);
  if ( 0x7FFFFFF - v2 < a1 )
  {
    std::string::string(v4, "list<T> too long");
    pExceptionObject[12] = 0;
    sub_1000C980(pExceptionObject, (int)v4);
    CxxThrowException(pExceptionObject, (_ThrowInfo *)&_TI3_AVlength_error_std__);
  }
  result = a1 + v2;
  *(_DWORD *)(a2 + 8) = result;
  return result;
}
