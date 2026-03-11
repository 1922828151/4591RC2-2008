/*
 * func-name: sub_100B4940
 * func-address: 0x100b4940
 * callers: 0x100146be
 * callees: 0x102c0730
 */

float *__thiscall sub_100B4940(float *this, float *a2, float *a3)
{
  float v5; // [esp+Ch] [ebp-18h] BYREF
  float v6; // [esp+10h] [ebp-14h]
  float v7; // [esp+14h] [ebp-10h]
  float v8; // [esp+18h] [ebp-Ch]
  float v9; // [esp+1Ch] [ebp-8h]
  float v10; // [esp+20h] [ebp-4h]

  v5 = *a3 - *a2;
  v6 = a3[1] - a2[1];
  v7 = a3[2] - a2[2];
  v8 = v5 * 0.5;
  v9 = v6 * 0.5;
  v10 = 0.5 * v7;
  v5 = *a2 + v8;
  v6 = v9 + a2[1];
  v7 = a2[2] + v10;
  sub_102C0730(&v5);
  *(_DWORD *)this = &BBox::`vftable';
  this[4] = 0.0;
  this[5] = 0.0;
  this[6] = 0.0;
  this[7] = 0.0;
  this[8] = 0.0;
  this[9] = 0.0;
  this[4] = *a2;
  this[5] = a2[1];
  this[6] = a2[2];
  this[7] = *a3;
  this[8] = a3[1];
  this[9] = a3[2];
  return this;
}
