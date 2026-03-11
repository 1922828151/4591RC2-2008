/*
 * func-name: sub_1005FC90
 * func-address: 0x1005fc90
 * callers: none
 * callees: none
 */

int __thiscall sub_1005FC90(_DWORD *this, unsigned __int16 a2, int a3)
{
  int result; // eax

  result = 44 * a2;
  *(_DWORD *)(result + this[5] + 8) = a3;
  return result;
}
