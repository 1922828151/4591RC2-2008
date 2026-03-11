/*
 * func-name: sub_100FDA70
 * func-address: 0x100fda70
 * callers: none
 * callees: 0x101a2516
 */

bool __stdcall sub_100FDA70(float *a1, float *a2, float *a3)
{
  float v3; // ecx
  double v4; // st5
  float v5; // edx
  float v6; // eax
  float v8; // [esp+0h] [ebp-18h]
  float v9; // [esp+0h] [ebp-18h]
  float v10; // [esp+4h] [ebp-14h]
  float v11; // [esp+8h] [ebp-10h]
  float v12; // [esp+Ch] [ebp-Ch]
  float v13; // [esp+10h] [ebp-8h]
  float v14; // [esp+10h] [ebp-8h]
  float v15; // [esp+14h] [ebp-4h]
  float v16; // [esp+1Ch] [ebp+4h]
  float v17; // [esp+1Ch] [ebp+4h]
  float v18; // [esp+1Ch] [ebp+4h]
  float v19; // [esp+1Ch] [ebp+4h]
  float v20; // [esp+1Ch] [ebp+4h]
  float v21; // [esp+1Ch] [ebp+4h]
  float v22; // [esp+1Ch] [ebp+4h]

  v3 = a1[9];
  v13 = a1[10];
  v4 = a1[11];
  v5 = a2[10];
  v6 = a2[11];
  v8 = a2[9];
  v16 = v13 * v13 + v3 * v3 + v4 * v4;
  v17 = sqrt(v16);
  v18 = 1.0 / v17;
  v12 = v3 * v18;
  v14 = v13 * v18;
  v15 = v18 * v4;
  v19 = v8 * v8 + v5 * v5 + v6 * v6;
  v20 = sqrt(v19);
  v21 = 1.0 / v20;
  v9 = v8 * v21;
  v10 = v21 * v5;
  v11 = v21 * v6;
  v22 = v11 * v15 + v14 * v10 + v9 * v12;
  if ( *a3 <= (double)v22 )
    return 1;
  return 0.0 == v12 && 0.0 == v14 && 0.0 == v15 && 0.0 == v9 && 0.0 == v10 && 0.0 == v11;
}
