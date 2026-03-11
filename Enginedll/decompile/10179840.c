/*
 * func-name: sub_10179840
 * func-address: 0x10179840
 * callers: 0x10006780, 0x10033d30, 0x10038ca0, 0x10045740, 0x1004dd80, 0x1004df10, 0x1007da70, 0x10080a00, 0x10084160, 0x1008ce00, 0x10092c60, 0x10094190, 0x100e97f0, 0x10116ff0, 0x101799d0
 * callees: 0x10178b10
 */

float *__thiscall sub_10179840(const void *this, float *a2)
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
  sub_10178B10(a2);
  return a2;
}
