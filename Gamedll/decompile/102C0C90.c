/*
 * func-name: sub_102C0C90
 * func-address: 0x102c0c90
 * callers: 0x1002f800, 0x101b1c00, 0x101b1f60, 0x1027b700, 0x1027e170
 * callees: 0x102c9db6
 */

double __thiscall sub_102C0C90(float *this)
{
  long double v1; // st7
  float v3; // [esp+0h] [ebp-4h]

  v3 = this[1] * flt_103B4AE0 + *this * flt_103B4ADC + flt_103B4AE4 * this[2];
  v1 = v3;
  if ( this[2] >= 0.0 )
    return 90.0 - acos(v1) * 57.2957763671875;
  if ( *this < 0.0 )
    return acos(v1) * 57.2957763671875 - 270.0;
  return acos(v1) * 57.2957763671875 + 90.0;
}
