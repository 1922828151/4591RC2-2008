/*
 * func-name: sub_10032300
 * func-address: 0x10032300
 * callers: 0x100029cd
 * callees: 0x102c9dbc
 */

char __thiscall sub_10032300(float *this)
{
  char result; // al
  float v2; // [esp+4h] [ebp-4h]
  float v3; // [esp+4h] [ebp-4h]
  float v4; // [esp+4h] [ebp-4h]

  v2 = this[1] * this[1] + *this * *this + this[2] * this[2];
  if ( v2 < 0.0000000099999999 )
    return 0;
  v3 = sqrt(v2);
  result = 1;
  v4 = 1.0 / v3;
  *this = *this * v4;
  this[1] = v4 * this[1];
  this[2] = v4 * this[2];
  return result;
}
