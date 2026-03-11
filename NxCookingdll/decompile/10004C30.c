/*
 * func-name: sub_10004C30
 * func-address: 0x10004c30
 * callers: 0x10004cd0, 0x100054a0
 * callees: none
 */

void __thiscall sub_10004C30(double *this, double *a2)
{
  double v2[9]; // [esp+8h] [ebp-48h] BYREF

  v2[0] = (this[41] + this[42]) * this[7];
  v2[4] = (this[42] + this[40]) * this[7];
  v2[8] = (this[41] + this[40]) * this[7];
  v2[3] = -(this[43] * this[7]);
  v2[1] = v2[3];
  v2[7] = -(this[44] * this[7]);
  v2[5] = v2[7];
  v2[2] = -(this[45] * this[7]);
  v2[6] = v2[2];
  qmemcpy(a2, v2, 0x48u);
}
