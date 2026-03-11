/*
 * func-name: sub_10034070
 * func-address: 0x10034070
 * callers: 0x10034200
 * callees: none
 */

_DWORD *__usercall sub_10034070@<eax>(int a1@<eax>, unsigned __int16 a2@<si>, int a3, _DWORD *a4)
{
  int v4; // ebp
  float *v6; // eax
  float *v7; // ecx
  double v8; // st7
  double v9; // st6
  bool v10; // c0
  bool v11; // c3
  double v12; // st7
  float *v13; // ebx
  float *v14; // edx
  double v15; // st7
  double v16; // st6
  double v17; // st5
  float *v18; // edx
  char v19; // bl
  _DWORD *result; // eax
  int v21; // edx
  bool v22; // [esp+Eh] [ebp-2h]
  char v23; // [esp+Fh] [ebp-1h]

  v4 = a3;
  v6 = *(float **)(a1 + 4 * a2 + 16);
  if ( !v6 )
  {
    *(float *)(a3 + 4 * a2 + 8) = -2.0;
    v22 = 1;
    *(_WORD *)(a3 + 4) |= 16 << a2;
LABEL_7:
    v23 = 0;
    goto LABEL_8;
  }
  v7 = *(float **)(a1 + 12);
  v8 = v6[2] * v7[2] + v6[1] * v7[1] + *v6 * *v7;
  v9 = -1.0;
  if ( v8 <= -1.0 || (v9 = v8, v10 = v8 > 1.0, v11 = 1.0 == v8, v12 = 1.0, !v10 && !v11) )
    v12 = v9;
  *(float *)(a3 + 4 * a2 + 8) = v12;
  v13 = *(float **)(a1 + 4 * a2);
  v14 = *(float **)(a1 + 4 * ((a2 + 1) % 3));
  v15 = *v14 - *v13;
  v16 = v14[1] - v13[1];
  v17 = v14[2];
  v18 = *(float **)(a1 + 4 * a2 + 16);
  v22 = (v15 * v7[1] - v16 * *v7) * v18[2]
      + ((v17 - v13[2]) * *v7 - v7[2] * v15) * v18[1]
      + (v7[2] * v16 - v7[1] * (v17 - v13[2])) * *v18 > 0.0;
  v4 = a3;
  v23 = 1;
  if ( v18[2] * v7[2] + v18[1] * v7[1] + *v18 * *v7 <= 0.99000001 )
    goto LABEL_7;
LABEL_8:
  v19 = *(_BYTE *)(a2 + a1 + 28);
  result = (_DWORD *)*(unsigned __int8 *)((a2 + 1) % 3 + a1 + 28);
  if ( v22 )
  {
    *(_WORD *)(v4 + 4) |= (unsigned __int16)(256 << v19) | (256 << (char)result) | (1 << a2);
    v21 = (1 << v19) | (1 << (char)result);
    result = a4;
    *a4 |= v21;
  }
  if ( v23 )
    *(_WORD *)(v4 + 4) |= 2048 << a2;
  return result;
}
