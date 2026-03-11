/*
 * func-name: sub_10149260
 * func-address: 0x10149260
 * callers: none
 * callees: none
 */

int __thiscall sub_10149260(_DWORD *this)
{
  _BYTE *v1; // edx
  int result; // eax

  v1 = (_BYTE *)this[1];
  LOBYTE(result) = *v1;
  this[1] = v1 + 1;
  return result;
}
