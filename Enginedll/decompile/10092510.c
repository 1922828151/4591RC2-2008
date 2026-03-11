/*
 * func-name: sub_10092510
 * func-address: 0x10092510
 * callers: 0x10092a20, 0x10092aa0
 * callees: 0x101a2516
 */

float *__thiscall sub_10092510(int this, float *a2, float a3, float a4)
{
  long double v4; // st7
  float *result; // eax
  float v6; // [esp+0h] [ebp-8h]
  float v7; // [esp+4h] [ebp-4h]
  float v8; // [esp+4h] [ebp-4h]
  float v9; // [esp+4h] [ebp-4h]
  float v10; // [esp+4h] [ebp-4h]
  float v11; // [esp+4h] [ebp-4h]
  float v12; // [esp+10h] [ebp+8h]
  float v13; // [esp+14h] [ebp+Ch]

  v12 = -((a3 - (double)(*(_DWORD *)(this + 272) / 2)) / ((double)*(int *)(this + 272) * *(float *)(this + 288) * 0.5));
  v13 = (a4 - (double)(*(_DWORD *)(this + 276) / 2)) / (0.5 * ((double)*(int *)(this + 276) * *(float *)(this + 288)));
  v6 = 0.0;
  v7 = v13 * v13 + v12 * v12;
  v4 = v7;
  if ( v7 <= 1.0 )
  {
    v10 = 1.0 - v4;
    v11 = sqrt(v10);
    v6 = v11;
  }
  else
  {
    v8 = sqrt(v4);
    v9 = 1.0 / v8;
    v12 = v9 * v12;
    v13 = v9 * v13;
  }
  result = a2;
  *a2 = v12;
  a2[1] = v13;
  a2[2] = v6;
  return result;
}
