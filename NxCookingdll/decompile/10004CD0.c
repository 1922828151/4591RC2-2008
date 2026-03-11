/*
 * func-name: sub_10004CD0
 * func-address: 0x10004cd0
 * callers: 0x100054a0
 * callees: 0x10004c30
 */

void __thiscall sub_10004CD0(double *this, void *a2)
{
  const void *v2; // eax
  double v3; // [esp+30h] [ebp-48h] BYREF

  this[6] = this[7] * this[36];
  sub_10004C30(this, &v3);
  qmemcpy(a2, v2, 0x48u);
}
