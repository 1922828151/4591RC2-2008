/*
 * func-name: sub_10207490
 * func-address: 0x10207490
 * callers: 0x100184cb
 * callees: 0x1000115e, 0x10007e41
 */

int __thiscall sub_10207490(_DWORD *this, int a2)
{
  int v3; // eax

  v3 = this[1];
  this[62] = a2;
  sub_1000115E(v3);
  return sub_10007E41(a2, (int)this);
}
