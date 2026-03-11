/*
 * func-name: sub_10061060
 * func-address: 0x10061060
 * callers: 0x1005faa0, 0x100632a0, 0x100d9db0, 0x100e9620, 0x10101a60, 0x10102180, 0x10104050, 0x101042c0
 * callees: none
 */

bool __thiscall sub_10061060(float *this, float *a2)
{
  return this[7] >= (double)*a2
      && this[4] <= (double)*a2
      && this[8] >= (double)a2[1]
      && this[5] <= (double)a2[1]
      && this[9] >= (double)a2[2]
      && this[6] <= (double)a2[2];
}
