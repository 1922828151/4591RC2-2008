/*
 * func-name: sub_10001700
 * func-address: 0x10001700
 * callers: none
 * callees: none
 */

int __thiscall sub_10001700(_DWORD *this, _DWORD *a2)
{
  int result; // eax

  this[1] = *a2;
  this[2] = a2[1];
  result = a2[2];
  this[3] = result;
  return result;
}
