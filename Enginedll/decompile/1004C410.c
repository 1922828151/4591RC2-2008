/*
 * func-name: sub_1004C410
 * func-address: 0x1004c410
 * callers: 0x1004c6f0
 * callees: 0x1004c1d0, 0x1004c200, 0x1004c3d0, 0x10079ac0
 */

char __cdecl sub_1004C410(_DWORD *a1, _DWORD *a2, float *a3, _DWORD *a4, char a5)
{
  double v5; // st6
  double v6; // st7
  int v7; // eax
  int v8; // edx
  int v9; // ecx
  int v10; // eax
  unsigned int v11; // esi
  _DWORD *v13; // eax
  int v14; // edx
  float v15; // [esp+10h] [ebp-98h] BYREF
  float v16; // [esp+14h] [ebp-94h]
  float v17; // [esp+18h] [ebp-90h]
  float v18; // [esp+1Ch] [ebp-8Ch] BYREF
  float v19; // [esp+20h] [ebp-88h]
  float v20; // [esp+24h] [ebp-84h]
  unsigned int v21; // [esp+28h] [ebp-80h]
  float v22; // [esp+2Ch] [ebp-7Ch]
  float v23; // [esp+30h] [ebp-78h]
  float v24; // [esp+34h] [ebp-74h]
  int v25; // [esp+38h] [ebp-70h]
  float v26[3]; // [esp+3Ch] [ebp-6Ch] BYREF
  _DWORD v27[24]; // [esp+48h] [ebp-60h] BYREF

  if ( !a1 )
    return 0;
  v18 = a3[7] + a3[4];
  v19 = a3[5] + a3[8];
  v20 = a3[6] + a3[9];
  v26[0] = v18 * 0.5;
  v26[1] = v19 * 0.5;
  v26[2] = v20 * 0.5;
  v5 = a3[7] - a3[4];
  if ( a5 )
  {
    v15 = v5;
    v16 = a3[8] - a3[5];
    v17 = a3[9] - a3[6];
    v22 = v15 * 0.5;
    v23 = v16 * 0.5;
    v24 = 0.5 * v17;
    v15 = v22 + 0.001000000047497451;
    v16 = v23 + 0.001000000047497451;
    v6 = v24 + 0.001000000047497451;
  }
  else
  {
    v18 = v5;
    v19 = a3[8] - a3[5];
    v20 = a3[9] - a3[6];
    v22 = v18 * 0.5;
    v23 = v19 * 0.5;
    v24 = 0.5 * v20;
    v15 = v22 - 0.001000000047497451;
    v16 = v23 - 0.001000000047497451;
    v6 = v24 - 0.001000000047497451;
  }
  v17 = v6;
  v19 = v16;
  v20 = v17;
  v18 = v15;
  v21 = 0;
  if ( !sub_1004C1D0(a2) )
    return 0;
  v25 = 0;
  while ( 1 )
  {
    v7 = a2[1];
    if ( !v7 || v21 >= (a2[2] - v7) / 92 )
      invalid_parameter_noinfo();
    qmemcpy(v27, (const void *)(v25 + a2[1]), 0x5Cu);
    if ( !v27[22] )
      goto LABEL_26;
    if ( *(_BYTE *)(v27[22] + 724) )
      goto LABEL_26;
    v8 = *(_DWORD *)(v27[22] + 728);
    if ( (v8 & 4) != 0 )
      goto LABEL_26;
    v9 = a1[182];
    if ( (v9 & 4) != 0 || (v9 & 8) != 0 && !*(_BYTE *)(v27[22] + 696) )
      goto LABEL_26;
    if ( (v8 & 8) != 0 )
      goto LABEL_26;
    if ( !a1[155] )
      break;
    if ( !*(_BYTE *)(*(_DWORD *)(sub_1004C200(a2, v21) + 88) + 696) )
    {
      v10 = a1[183];
      if ( (v10 & 0x800) != 0 )
      {
        if ( (v10 & 0x400) == 0 && *(_DWORD *)(v27[22] + 620) )
          goto LABEL_26;
      }
      else if ( (v10 & 0x400) != 0 && !*(_DWORD *)(v27[22] + 620) )
      {
        goto LABEL_26;
      }
      break;
    }
LABEL_26:
    v25 += 92;
    v11 = ++v21;
    if ( v11 >= sub_1004C1D0(a2) )
      return 0;
  }
  v15 = COERCE_FLOAT(&v27[3]);
  v16 = COERCE_FLOAT(&v27[6]);
  v17 = COERCE_FLOAT(&v27[9]);
  if ( !sub_10079AC0(v26, &v18, &v15) )
    goto LABEL_26;
  v13 = (_DWORD *)sub_1004C3D0(a4 + 4, 0);
  *v13 = v27[0];
  v13[1] = v27[1];
  v13[2] = v27[2];
  v14 = v27[22];
  a4[18] = v27[21];
  a4[16] = v14;
  return 1;
}
