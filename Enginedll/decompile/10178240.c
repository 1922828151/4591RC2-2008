/*
 * func-name: sub_10178240
 * func-address: 0x10178240
 * callers: none
 * callees: 0x101a2516, 0x101a28e0
 */

float *__thiscall sub_10178240(float *this, float *a2)
{
  float *result; // eax
  double v4; // [esp+8h] [ebp-8h]
  float v5; // [esp+14h] [ebp+4h]
  float v6; // [esp+14h] [ebp+4h]
  float v7; // [esp+14h] [ebp+4h]
  float v8; // [esp+14h] [ebp+4h]
  float v9; // [esp+14h] [ebp+4h]
  float v10; // [esp+14h] [ebp+4h]
  float v11; // [esp+14h] [ebp+4h]
  float v12; // [esp+14h] [ebp+4h]
  float v13; // [esp+14h] [ebp+4h]

  *a2 = 0.0;
  a2[1] = 0.0;
  a2[2] = 0.0;
  a2[3] = 0.0;
  v5 = this[4] * this[4] + *this * *this;
  v6 = sqrt(v5);
  v4 = v6;
  if ( v6 <= 0.0000019073486328125 )
  {
    v11 = atan2(-this[6], this[5]);
    *a2 = v11;
    v12 = v4;
    v13 = atan2(-this[8], v12);
    result = a2;
    a2[1] = v13;
    a2[2] = 0.0;
  }
  else
  {
    v7 = atan2(this[9], this[10]);
    *a2 = v7;
    v8 = v4;
    v9 = atan2(-this[8], v8);
    a2[1] = v9;
    v10 = atan2(this[4], *this);
    result = a2;
    a2[2] = v10;
  }
  a2[3] = 0.0;
  return result;
}
