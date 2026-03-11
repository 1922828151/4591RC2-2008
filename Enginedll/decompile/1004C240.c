/*
 * func-name: sub_1004C240
 * func-address: 0x1004c240
 * callers: 0x1004c6f0, 0x1005faa0, 0x10066590, 0x10067d40, 0x100797d0, 0x1007a540, 0x1007fa00, 0x1008fcc0, 0x10094d10, 0x100b2510, 0x100ddae0, 0x100df7d0, 0x10116ff0, 0x1012c460, 0x10132c30, 0x10143c20, 0x10143e00, 0x10144670, 0x10178340, 0x10178370, 0x101783a0, 0x10178e50, 0x10179e00, 0x1017b740, 0x1017b990, 0x1017ba40
 * callees: 0x101a2516
 */

char __thiscall sub_1004C240(float *this)
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
