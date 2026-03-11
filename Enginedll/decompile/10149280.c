/*
 * func-name: sub_10149280
 * func-address: 0x10149280
 * callers: none
 * callees: none
 */

int __thiscall sub_10149280(_DWORD *this)
{
  int *v1; // edx
  int result; // eax

  v1 = (int *)this[1];
  result = *v1;
  this[1] = v1 + 1;
  return result;
}
