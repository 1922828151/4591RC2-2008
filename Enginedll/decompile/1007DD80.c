/*
 * func-name: sub_1007DD80
 * func-address: 0x1007dd80
 * callers: 0x1007d280, 0x1008ce00, 0x100935b0
 * callees: 0x101786e0, 0x10179590, 0x101a251c
 */

float *__thiscall sub_1007DD80(float *this, int a2)
{
  float v4[16]; // [esp+10h] [ebp-40h] BYREF

  memset(v4, 0, sizeof(v4));
  sub_101786E0(1.0);
  v4[15] = 1.0;
  sub_10179590(this, a2, v4);
  qmemcpy(this, v4, 0x40u);
  return this;
}
