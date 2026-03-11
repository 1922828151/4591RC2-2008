/*
 * func-name: sub_10034010
 * func-address: 0x10034010
 * callers: 0x1000f1dc
 * callees: 0x102c0730
 */

float *__thiscall sub_10034010(float *this)
{
  float v2; // ecx
  float v3; // edx
  float v4; // eax
  float v6; // [esp+4h] [ebp-Ch] BYREF
  float v7; // [esp+8h] [ebp-8h]
  float v8; // [esp+Ch] [ebp-4h]

  v6 = 0.0;
  v7 = 0.0;
  v8 = 0.0;
  sub_102C0730(&v6);
  *(_DWORD *)this = &BBox::`vftable';
  this[4] = 0.0;
  this[5] = 0.0;
  this[6] = 0.0;
  this[7] = 0.0;
  this[8] = 0.0;
  this[9] = 0.0;
  v6 = -1.0e10;
  this[4] = 1.0e10;
  v7 = -1.0e10;
  v2 = v6;
  v8 = -1.0e10;
  this[5] = 1.0e10;
  v3 = v7;
  this[6] = 1.0e10;
  v4 = v8;
  this[7] = v2;
  this[8] = v3;
  this[9] = v4;
  return this;
}
