/*
 * func-name: sub_102C1BE0
 * func-address: 0x102c1be0
 * callers: 0x10033ce0, 0x10035730, 0x10080c50, 0x10080eb0, 0x10080f90, 0x1008a2d0, 0x100b9700, 0x100beff0, 0x100bfce0, 0x100c1310, 0x100ccb70, 0x100e7530, 0x100e7d90, 0x10110440, 0x1012cad0, 0x1014e270, 0x101749c0, 0x101791a0, 0x1017e700, 0x101963e0, 0x10196950, 0x101a1a80, 0x101a2510, 0x101a3800, 0x101a3aa0, 0x101a4f40, 0x101bf320, 0x101bf400, 0x101bf8e0, 0x101c0110, 0x101c0210, 0x101c02d0
 * callees: none
 */

float *__thiscall sub_102C1BE0(float *this, float *a2, float *a3)
{
  float *result; // eax

  result = a2;
  *a3 = this[4] * a2[1] + *a2 * *this + this[8] * a2[2] + this[12];
  a3[1] = this[1] * *a2 + this[5] * a2[1] + this[9] * a2[2] + this[13];
  a3[2] = this[2] * *a2 + this[6] * a2[1] + this[10] * a2[2] + this[14];
  return result;
}
