/*
 * func-name: sub_1000BD60
 * func-address: 0x1000bd60
 * callers: 0x1000b0f0
 * callees: 0x10003860, 0x10029d92
 */

int __thiscall sub_1000BD60(_DWORD *this)
{
  int v1; // eax
  int result; // eax
  _BYTE v3[28]; // [esp+4h] [ebp-50h] BYREF
  _DWORD pExceptionObject[13]; // [esp+20h] [ebp-34h] BYREF

  v1 = this[2];
  if ( v1 == 0x1FFFFFFF )
  {
    std::string::string(v3, "list<T> too long");
    pExceptionObject[12] = 0;
    sub_10003860(pExceptionObject, (int)v3);
    CxxThrowException(pExceptionObject, (_ThrowInfo *)&_TI3_AVlength_error_std__);
  }
  result = v1 + 1;
  this[2] = result;
  return result;
}
