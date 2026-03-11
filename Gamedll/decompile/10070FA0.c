/*
 * func-name: sub_10070FA0
 * func-address: 0x10070fa0
 * callers: 0x1000b7b2
 * callees: 0x10009ac0, 0x102c9d86
 */

int __thiscall sub_10070FA0(_DWORD *this, unsigned int a2)
{
  int v2; // eax
  int result; // eax
  _BYTE v4[28]; // [esp+8h] [ebp-50h] BYREF
  _DWORD pExceptionObject[13]; // [esp+24h] [ebp-34h] BYREF

  v2 = this[2];
  if ( 0x7FFFFFF - v2 < a2 )
  {
    std::string::string(v4, "list<T> too long");
    pExceptionObject[12] = 0;
    sub_10009AC0(v4);
    pExceptionObject[0] = &std::length_error::`vftable';
    CxxThrowException(pExceptionObject, (_ThrowInfo *)&_TI3_AVlength_error_std__);
  }
  result = a2 + v2;
  this[2] = result;
  return result;
}
