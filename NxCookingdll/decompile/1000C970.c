/*
 * func-name: sub_1000C970
 * func-address: 0x1000c970
 * callers: 0x100201a0, 0x10020e00, 0x10021280, 0x10021fa0
 * callees: 0x10015390
 */

char __thiscall sub_1000C970(_DWORD *this, float *a2)
{
  int v3; // ebp
  double v5; // st7
  int v6; // eax
  double v7; // st7
  int v8; // eax
  float *v9; // ecx
  float *v10; // edx
  float *v11; // eax
  char result; // al
  double v13; // st7
  float v14; // [esp+8h] [ebp-28h]
  int v15; // [esp+Ch] [ebp-24h]
  int v16; // [esp+10h] [ebp-20h]
  int v17; // [esp+14h] [ebp-1Ch]
  float v18; // [esp+18h] [ebp-18h]
  float v19; // [esp+1Ch] [ebp-14h]
  float v20; // [esp+20h] [ebp-10h]
  float v21; // [esp+24h] [ebp-Ch]
  float v22; // [esp+28h] [ebp-8h]
  float v23; // [esp+2Ch] [ebp-4h]
  unsigned int v24; // [esp+34h] [ebp+4h]

  v3 = 0;
  if ( !this[3] || !this[4] )
    return 0;
  v14 = 0.0;
  v24 = 0;
  v5 = 0.0;
  a2[2] = 0.0;
  a2[1] = 0.0;
  for ( *a2 = 0.0; v24 < this[1]; v14 = v5 )
  {
    v6 = this[2];
    v17 = *(_DWORD *)(v6 + v3 + 8);
    v15 = *(_DWORD *)(v3 + v6);
    v16 = *(_DWORD *)(v6 + v3 + 4);
    v7 = sub_10015390(this[4]);
    v8 = this[4];
    if ( v8 )
    {
      v9 = (float *)(v8 + 12 * v15);
      v10 = (float *)(v8 + 12 * v16);
      v11 = (float *)(v8 + 12 * v17);
      v18 = (*v10 + *v9 + *v11) * 0.33333334;
      v21 = v18;
      v19 = (v10[1] + v9[1] + v11[1]) * 0.33333334;
      v22 = v19;
      v20 = 0.33333334 * (v10[2] + v9[2] + v11[2]);
      v23 = v20;
    }
    v3 += 12;
    ++v24;
    *a2 = v21 * v7 + *a2;
    a2[1] = v22 * v7 + a2[1];
    a2[2] = v23 * v7 + a2[2];
    v5 = v7 + v14;
  }
  result = 1;
  v13 = 1.0 / v5;
  *a2 = *a2 * v13;
  a2[1] = a2[1] * v13;
  a2[2] = v13 * a2[2];
  return result;
}
