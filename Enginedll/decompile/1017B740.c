/*
 * func-name: sub_1017B740
 * func-address: 0x1017b740
 * callers: none
 * callees: 0x1004c240, 0x101a28e0
 */

double __thiscall sub_1017B740(float *this, float *a2, float *a3)
{
  float v4; // eax
  double v5; // st7
  float v7[2]; // [esp+4h] [ebp-18h] BYREF
  float v8; // [esp+Ch] [ebp-10h]
  float v9[2]; // [esp+10h] [ebp-Ch] BYREF
  float v10; // [esp+18h] [ebp-4h]
  float v11; // [esp+20h] [ebp+4h]
  float v12; // [esp+20h] [ebp+4h]
  float v13; // [esp+20h] [ebp+4h]
  float v14; // [esp+20h] [ebp+4h]
  float v16; // [esp+24h] [ebp+8h]

  v4 = a2[2];
  v7[0] = *a2;
  v7[1] = 0.0;
  v8 = v4;
  sub_1004C240(v7);
  v9[0] = *a3 - *this;
  v10 = a3[2] - this[2];
  v9[1] = 0.0;
  sub_1004C240(v9);
  v11 = atan2(v8, v7[0]);
  v16 = v11;
  v12 = atan2(v10, v9[0]);
  v13 = v16 - v12;
  v5 = v13;
  if ( v13 < 0.0 )
  {
    v14 = v5 + 6.283185482025146;
    v5 = v14;
  }
  return (float)(v5 * 57.29577791868205);
}
