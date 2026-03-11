/*
 * func-name: ??DLightState@@QBE?AV0@M@Z
 * func-address: 0x10018ce0
 * callers: 0x100df7d0
 * callees: none
 */

float *__thiscall LightState::operator*(float *this, float *a2, float a3)
{
  float *result; // eax
  double v4; // st6
  double v5; // st6
  double v6; // st6
  double v7; // st6
  double v8; // st6
  double v9; // st6
  float v10; // [esp+4h] [ebp-10h]
  float v11; // [esp+4h] [ebp-10h]
  float v12; // [esp+8h] [ebp-Ch]
  float v13; // [esp+8h] [ebp-Ch]
  float v14; // [esp+Ch] [ebp-8h]
  float v15; // [esp+Ch] [ebp-8h]
  float v16; // [esp+10h] [ebp-4h]

  result = a2;
  v4 = this[15] * a3;
  qmemcpy(a2, this, 0x48u);
  a2[15] = v4;
  v10 = this[9] * a3;
  v12 = this[10] * a3;
  v5 = this[11];
  a2[9] = v10;
  a2[10] = v12;
  v14 = v5 * a3;
  v6 = *this;
  a2[11] = v14;
  v11 = v6 * a3;
  v7 = this[1];
  *a2 = v11;
  v13 = v7 * a3;
  v8 = this[2];
  a2[1] = v13;
  v15 = v8 * a3;
  v9 = this[3];
  a2[2] = v15;
  v16 = v9 * a3;
  a2[3] = v16;
  a2[4] = a3 * this[4];
  return result;
}
