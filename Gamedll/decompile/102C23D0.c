/*
 * func-name: sub_102C23D0
 * func-address: 0x102c23d0
 * callers: 0x10080c50, 0x10080eb0, 0x10080f90, 0x100bd1e0, 0x100bdd20, 0x100d8db0, 0x100dd3d0, 0x100dd510, 0x100e7d90, 0x100f1680, 0x100f17c0, 0x100f2c60, 0x10110440, 0x10120300, 0x1012cad0, 0x10131040, 0x10132580, 0x10133960, 0x1015a560, 0x10196950, 0x101a23b0, 0x101a3340, 0x101a4f40, 0x101d0a90, 0x102c2560
 * callees: 0x102c16a0
 */

float *__thiscall sub_102C23D0(const void *this, float *a2)
{
  float v3[16]; // [esp+Ch] [ebp-40h] BYREF

  qmemcpy(v3, this, sizeof(v3));
  v3[14] = 0.0;
  v3[13] = 0.0;
  v3[12] = 0.0;
  *a2 = 0.0;
  a2[1] = 0.0;
  a2[2] = 0.0;
  a2[4] = 0.0;
  a2[5] = 0.0;
  a2[6] = 0.0;
  a2[8] = 0.0;
  a2[9] = 0.0;
  a2[10] = 0.0;
  a2[12] = 0.0;
  a2[13] = 0.0;
  a2[14] = 0.0;
  qmemcpy(a2, v3, 0x40u);
  sub_102C16A0(a2);
  return a2;
}
