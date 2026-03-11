/*
 * func-name: sub_1005FC70
 * func-address: 0x1005fc70
 * callers: none
 * callees: none
 */

int __thiscall sub_1005FC70(_DWORD *this, unsigned __int16 a2)
{
  int *v2; // ecx
  int result; // eax

  v2 = (int *)(44 * a2 + this[5] + 8);
  result = *v2;
  *v2 = 0;
  return result;
}
