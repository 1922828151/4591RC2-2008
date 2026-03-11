/*
 * func-name: sub_100278E0
 * func-address: 0x100278e0
 * callers: 0x100291a0, 0x100295d0
 * callees: 0x10025f50, 0x10026ec0
 */

int __cdecl sub_100278E0(int a1, int a2, float *a3, _DWORD *a4)
{
  int v4; // edi
  double v5; // st7
  int v6; // ebp
  double v7; // st6
  double v8; // st5
  double v9; // st4
  long double v10; // st4
  long double v11; // rtt
  long double v12; // st3
  int v13; // eax
  int v14; // ecx
  double v15; // st7
  double v16; // st6
  double v17; // st7
  long double v18; // st7
  long double v19; // rt2
  long double v20; // st6
  int v21; // eax
  double v22; // st7
  float v24; // [esp+10h] [ebp-3Ch]
  float v25; // [esp+14h] [ebp-38h]
  int v26; // [esp+18h] [ebp-34h]
  float v27; // [esp+1Ch] [ebp-30h] BYREF
  float v28; // [esp+20h] [ebp-2Ch]
  float v29; // [esp+24h] [ebp-28h]
  float v30; // [esp+28h] [ebp-24h]
  float v31; // [esp+2Ch] [ebp-20h]
  float v32; // [esp+30h] [ebp-1Ch]
  float v33[3]; // [esp+34h] [ebp-18h] BYREF
  float v34[3]; // [esp+40h] [ebp-Ch] BYREF

LABEL_1:
  v4 = sub_10026EC0(a1, a2, a3, a4);
  if ( *(_DWORD *)(*a4 + 4 * v4) == 3 )
    return v4;
  sub_10025F50(&v27, a3);
  v5 = v28;
  v6 = -1;
  v7 = v29;
  v30 = v28 * a3[2] - v29 * a3[1];
  v8 = v27;
  v31 = *a3 * v29 - v27 * a3[2];
  v32 = v27 * a3[1] - *a3 * v28;
  v9 = 0.0;
  v24 = 0.0;
  while ( 1 )
  {
    v10 = v9 * 0.017453292;
    v11 = sin(v10);
    v12 = cos(v10);
    v33[0] = (v8 * v11 + v30 * v12) * 0.025 + *a3;
    v33[1] = (v31 * v12 + v5 * v11) * 0.025 + a3[1];
    v33[2] = (v12 * v32 + v11 * v7) * 0.025 + a3[2];
    v13 = sub_10026EC0(a1, a2, v33, a4);
    v14 = v13;
    v26 = v13;
    if ( v6 == v4 && v13 == v4 )
    {
      *(_DWORD *)(*a4 + 4 * v4) = 3;
      return v4;
    }
    if ( v6 == -1 || v6 == v13 )
    {
      v15 = v24;
      goto LABEL_14;
    }
    v15 = v24;
    v16 = v24 - 40.0;
    v25 = v16;
    if ( v16 <= v24 )
      break;
LABEL_14:
    v22 = v15 + 45.0;
    v6 = v14;
    v24 = v22;
    if ( v22 > 360.0 )
    {
      *(_DWORD *)(*a4 + 4 * v4) = 0;
      goto LABEL_1;
    }
    v7 = v29;
    v8 = v27;
    v9 = v22;
    v5 = v28;
  }
  v17 = v16;
  while ( 1 )
  {
    v18 = v17 * 0.017453292;
    v19 = sin(v18);
    v20 = cos(v18);
    v34[0] = (v30 * v20 + v27 * v19) * 0.025 + *a3;
    v34[1] = (v31 * v20 + v28 * v19) * 0.025 + a3[1];
    v34[2] = (v20 * v32 + v19 * v29) * 0.025 + a3[2];
    v21 = sub_10026EC0(a1, a2, v34, a4);
    if ( v6 == v4 && v21 == v4 )
      break;
    v6 = v21;
    v17 = v25 + 5.0;
    v25 = v17;
    if ( v24 < v17 )
    {
      v14 = v26;
      v15 = v24;
      goto LABEL_14;
    }
  }
  *(_DWORD *)(*a4 + 4 * v4) = 3;
  return v4;
}
