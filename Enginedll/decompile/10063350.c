/*
 * func-name: sub_10063350
 * func-address: 0x10063350
 * callers: 0x100633c0, 0x10063830, 0x1007aa60
 * callees: none
 */

bool __thiscall sub_10063350(float *this, float *a2)
{
  return a2[4] <= (double)this[7]
      && a2[7] >= (double)this[4]
      && a2[5] <= (double)this[8]
      && a2[8] >= (double)this[5]
      && a2[6] <= (double)this[9]
      && a2[9] >= (double)this[6];
}
