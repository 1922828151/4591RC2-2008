/*
 * func-name: sub_100634E0
 * func-address: 0x100634e0
 * callers: none
 * callees: 0x1005faa0
 */

char __thiscall sub_100634E0(_DWORD *this, float *a2)
{
  int v2; // eax
  double v4; // st7
  double v5; // st7
  double v6; // st7
  double v7; // st7
  int v8; // eax
  float v9; // [esp+0h] [ebp-24h] BYREF
  float v10; // [esp+4h] [ebp-20h]
  float v11; // [esp+8h] [ebp-1Ch]
  float v12; // [esp+Ch] [ebp-18h] BYREF
  float v13; // [esp+10h] [ebp-14h]
  float v14; // [esp+14h] [ebp-10h]
  float v15; // [esp+18h] [ebp-Ch]
  float v16; // [esp+1Ch] [ebp-8h]
  float v17; // [esp+20h] [ebp-4h]

  v2 = this[5];
  if ( *(_BYTE *)(v2 + 48) )
    return sub_1005FAA0(a2 + 4, a2 + 7, v2, (float *)(v2 + 12));
  v12 = 0.0;
  v13 = 0.0;
  v14 = 0.0;
  v9 = 0.0;
  v10 = 0.0;
  v11 = 0.0;
  v15 = a2[7] + *(float *)(v2 + 36);
  v16 = *(float *)(v2 + 40) + a2[8];
  v4 = *(float *)(v2 + 44);
  v9 = v15;
  v5 = v4 + a2[9];
  v10 = v16;
  v17 = v5;
  v6 = a2[4];
  v11 = v17;
  v15 = v6 - *(float *)(v2 + 36);
  v16 = a2[5] - *(float *)(v2 + 40);
  v7 = a2[6] - *(float *)(v2 + 44);
  v13 = v16;
  v8 = this[5];
  v12 = v15;
  v17 = v7;
  v14 = v17;
  return sub_1005FAA0(&v12, &v9, v8, (float *)(v8 + 12));
}
