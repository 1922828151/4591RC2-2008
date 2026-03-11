/*
 * func-name: sub_1007BCC0
 * func-address: 0x1007bcc0
 * callers: 0x1007d280, 0x1008ce00
 * callees: none
 */

bool __thiscall sub_1007BCC0(float *this, float a2)
{
  double v2; // st7
  bool result; // al
  float v4; // [esp+0h] [ebp-4h]
  float v5; // [esp+0h] [ebp-4h]
  float v6; // [esp+8h] [ebp+4h]
  float v7; // [esp+8h] [ebp+4h]

  v4 = this[5] + *this + this[10] - 3.0;
  v5 = fabs(v4);
  v2 = a2;
  result = 0;
  if ( a2 >= (double)v5 )
  {
    v6 = this[2] + this[1] + this[4] + this[6] + this[8] + this[9] + this[12] + this[13] + this[14];
    v7 = fabs(v6);
    if ( v7 <= v2 )
      return 1;
  }
  return result;
}
