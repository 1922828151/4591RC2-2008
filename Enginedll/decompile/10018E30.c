/*
 * func-name: ??GLightState@@QBE?AV0@ABV0@@Z
 * func-address: 0x10018e30
 * callers: 0x100df7d0
 * callees: none
 */

float *__thiscall LightState::operator-(float *this, float *a2, float *a3)
{
  float *result; // eax
  double v4; // st7
  double v5; // st7
  double v6; // st7
  double v7; // st7
  double v8; // st7
  double v9; // st7
  double v10; // st7
  double v11; // st7
  float v12; // [esp+8h] [ebp-10h]
  float v13; // [esp+8h] [ebp-10h]
  float v14; // [esp+Ch] [ebp-Ch]
  float v15; // [esp+Ch] [ebp-Ch]
  float v16; // [esp+10h] [ebp-8h]
  float v17; // [esp+10h] [ebp-8h]
  float v18; // [esp+14h] [ebp-4h]

  result = a2;
  v4 = this[15];
  qmemcpy(a2, this, 0x48u);
  a2[15] = v4 - a3[15];
  v12 = this[9] - a3[9];
  v5 = this[10];
  a2[9] = v12;
  v14 = v5 - a3[10];
  v6 = this[11];
  a2[10] = v14;
  v16 = v6 - a3[11];
  v7 = *this;
  a2[11] = v16;
  v13 = v7 - *a3;
  v8 = this[1];
  *a2 = v13;
  v15 = v8 - a3[1];
  v9 = this[2];
  a2[1] = v15;
  v17 = v9 - a3[2];
  v10 = this[3];
  a2[2] = v17;
  v18 = v10 - a3[3];
  v11 = this[4];
  a2[3] = v18;
  a2[4] = v11 - a3[4];
  return result;
}
