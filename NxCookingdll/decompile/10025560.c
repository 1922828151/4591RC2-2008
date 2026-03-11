/*
 * func-name: sub_10025560
 * func-address: 0x10025560
 * callers: 0x10025630
 * callees: none
 */

double __usercall sub_10025560@<st0>(int a1@<eax>, _DWORD *a2@<edx>, int a3@<esi>)
{
  int v3; // ecx
  int v4; // edi
  int v5; // ecx
  double v6; // st7
  int v7; // ecx
  int v8; // eax
  double v9; // st7
  float *v10; // eax
  double v11; // st6
  double v12; // st5
  float *v13; // ecx
  double v14; // st4
  double v15; // st3
  double v16; // st2
  float v18; // [esp+8h] [ebp-14h]
  float v19; // [esp+Ch] [ebp-10h]
  float v20; // [esp+18h] [ebp-4h]

  v3 = 0;
  v4 = 0;
  if ( a1 == *a2 )
  {
    v3 = 2;
LABEL_7:
    v4 = 1;
    goto LABEL_8;
  }
  if ( a1 == a2[1] )
  {
    v3 = 2;
    v4 = 0;
  }
  else if ( a1 == a2[2] )
  {
    v3 = 0;
    goto LABEL_7;
  }
LABEL_8:
  v5 = 3 * a2[v3];
  v6 = *(float *)(a3 + 4 * v5);
  v7 = a3 + 4 * v5;
  v8 = 3 * a1;
  v9 = v6 - *(float *)(a3 + 4 * v8);
  v10 = (float *)(a3 + 4 * v8);
  v11 = *(float *)(v7 + 4) - v10[1];
  v12 = *(float *)(v7 + 8) - v10[2];
  v13 = (float *)(a3 + 12 * a2[v4]);
  v14 = *v13 - *v10;
  v15 = v13[1] - v10[1];
  v16 = v13[2] - v10[2];
  v20 = v16;
  v18 = v14 * v12 - v16 * v9;
  v19 = v15 * v9 - v14 * v11;
  return atan2(
           sqrt((v16 * v11 - v15 * v12) * (v16 * v11 - v15 * v12) + v18 * v18 + v19 * v19),
           v9 * v14 + v11 * v15 + v12 * v20);
}
