/*
 * func-name: sub_100251B0
 * func-address: 0x100251b0
 * callers: 0x10023520, 0x10024d40, 0x10025540
 * callees: 0x1000c980, 0x1004f112
 */

int __thiscall sub_100251B0(_DWORD *this)
{
  int v1; // eax
  int result; // eax
  _BYTE v3[28]; // [esp+4h] [ebp-50h] BYREF
  _DWORD pExceptionObject[13]; // [esp+20h] [ebp-34h] BYREF

  v1 = this[2];
  if ( v1 == 214748364 )
  {
    std::string::string(v3, "list<T> too long");
    pExceptionObject[12] = 0;
    sub_1000C980(pExceptionObject, (int)v3);
    CxxThrowException(pExceptionObject, (_ThrowInfo *)&_TI3_AVlength_error_std__);
  }
  result = v1 + 1;
  this[2] = result;
  return result;
}
