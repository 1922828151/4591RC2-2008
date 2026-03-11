/*
 * func-name: sub_102C07A0
 * func-address: 0x102c07a0
 * callers: 0x100eca70, 0x10173520
 * callees: 0x100029cd, 0x102ca0d2
 */

double __thiscall sub_102C07A0(float *this, float *a2, float *a3)
{
  double v4; // st7
  float v6; // [esp+4h] [ebp-18h]
  float v7; // [esp+Ch] [ebp-10h]
  float v8; // [esp+10h] [ebp-Ch]
  float v9; // [esp+18h] [ebp-4h]
  float v10; // [esp+20h] [ebp+4h]
  float v11; // [esp+20h] [ebp+4h]
  float v12; // [esp+20h] [ebp+4h]
  float v13; // [esp+20h] [ebp+4h]
  float v15; // [esp+24h] [ebp+8h]

  v6 = *a2;
  v7 = a2[2];
  sub_100029CD();
  v8 = *a3 - *this;
  v9 = a3[2] - this[2];
  sub_100029CD();
  v10 = atan2(v7, v6);
  v15 = v10;
  v11 = atan2(v9, v8);
  v12 = v15 - v11;
  v4 = v12;
  if ( v12 < 0.0 )
  {
    v13 = v4 + 6.283185482025146;
    v4 = v13;
  }
  return (float)(v4 * 57.29577791868205);
}
