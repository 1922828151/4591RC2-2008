/*
 * func-name: sub_10149270
 * func-address: 0x10149270
 * callers: none
 * callees: none
 */

int __thiscall sub_10149270(_DWORD *this)
{
  unsigned __int16 *v1; // edx
  int result; // eax

  v1 = (unsigned __int16 *)this[1];
  result = *v1;
  this[1] = v1 + 1;
  return result;
}
