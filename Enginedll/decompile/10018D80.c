/*
 * func-name: ??HLightState@@QBE?AV0@ABV0@@Z
 * func-address: 0x10018d80
 * callers: 0x100df7d0
 * callees: none
 */

float *__thiscall LightState::operator+(float *this, float *a2, float *a3)
{
  float *result; // eax
  double v4; // st7
  double v5; // st7
  double v6; // st7
  double v7; // st7
  double v8; // st7
  double v9; // st7
  double v10; // st7
  float v11; // [esp+8h] [ebp-10h]
  float v12; // [esp+8h] [ebp-10h]
  float v13; // [esp+Ch] [ebp-Ch]
  float v14; // [esp+Ch] [ebp-Ch]
  float v15; // [esp+10h] [ebp-8h]
  float v16; // [esp+10h] [ebp-8h]
  float v17; // [esp+14h] [ebp-4h]

  result = a2;
  qmemcpy(a2, this, 0x48u);
  a2[15] = a3[15] + this[15];
  v11 = this[9] + a3[9];
  v4 = this[10];
  a2[9] = v11;
  v13 = v4 + a3[10];
  v5 = this[11];
  a2[10] = v13;
  v15 = v5 + a3[11];
  v6 = *a3;
  a2[11] = v15;
  v12 = v6 + *this;
  v7 = a3[1];
  *a2 = v12;
  v14 = v7 + this[1];
  v8 = a3[2];
  a2[1] = v14;
  v16 = v8 + this[2];
  v9 = a3[3];
  a2[2] = v16;
  v17 = v9 + this[3];
  v10 = a3[4];
  a2[3] = v17;
  a2[4] = v10 + this[4];
  return result;
}
