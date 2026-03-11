/*
 * func-name: sub_10136090
 * func-address: 0x10136090
 * callers: 0x10135650
 * callees: 0x10136000, 0x101a2516
 */

void __thiscall sub_10136090(float **this, float **a2)
{
  float *v3; // ecx
  double v4; // st7
  float *v5; // eax
  int v6[2]; // [esp+4h] [ebp-14h] BYREF
  float v7; // [esp+Ch] [ebp-Ch]
  float v8; // [esp+10h] [ebp-8h]
  float v9; // [esp+14h] [ebp-4h]
  float v10; // [esp+1Ch] [ebp+4h]
  int v11; // [esp+1Ch] [ebp+4h]

  v3 = *this;
  v4 = *v3;
  v6[0] = (int)a2;
  v5 = *a2;
  v7 = v4 - **a2;
  v8 = v3[1] - v5[1];
  v9 = v3[2] - v5[2];
  v10 = v7 * v7 + v8 * v8 + v9 * v9;
  *(float *)&v11 = sqrt(v10);
  v6[1] = v11;
  sub_10136000(this + 5, v6);
}
