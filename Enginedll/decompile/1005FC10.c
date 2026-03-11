/*
 * func-name: sub_1005FC10
 * func-address: 0x1005fc10
 * callers: none
 * callees: none
 */

int __thiscall sub_1005FC10(_DWORD *this, int a2, unsigned __int16 a3)
{
  int v3; // ecx
  int v4; // eax

  v3 = this[5];
  v4 = 44 * a3;
  *(_DWORD *)(v4 + v3 + 8) |= a2;
  return v4 + v3 + 8;
}
