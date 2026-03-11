/*
 * func-name: sub_1000BA00
 * func-address: 0x1000ba00
 * callers: 0x10001610, 0x10002930, 0x1000a940, 0x1000dc30, 0x1000de00
 * callees: 0x10003860, 0x10029d92
 */

int __thiscall sub_1000BA00(_DWORD *this)
{
  int v1; // eax
  int result; // eax
  _BYTE v3[28]; // [esp+4h] [ebp-50h] BYREF
  _DWORD pExceptionObject[13]; // [esp+20h] [ebp-34h] BYREF

  v1 = this[2];
  if ( v1 == 0x3FFFFFFF )
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
