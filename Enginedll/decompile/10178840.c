/*
 * func-name: sub_10178840
 * func-address: 0x10178840
 * callers: 0x100b27b0, 0x100b2990
 * callees: 0x101a281a, 0x101a2820
 */

void __thiscall sub_10178840(float *this, float a2)
{
  float v2; // [esp+0h] [ebp-4h]
  float v3; // [esp+8h] [ebp+4h]

  v2 = sin(a2);
  v3 = cos(a2);
  *this = v3;
  this[8] = v2;
  this[2] = -v2;
  this[10] = v3;
}
