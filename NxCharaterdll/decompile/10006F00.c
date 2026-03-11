/*
 * func-name: sub_10006F00
 * func-address: 0x10006f00
 * callers: 0x10008e70
 * callees: none
 */

int __usercall sub_10006F00@<eax>(int a1@<ecx>, double *a2@<edi>, _DWORD *a3@<esi>, int a4)
{
  _DWORD *v4; // ecx
  int v5; // edx
  int v6; // edx
  _DWORD *v7; // eax
  unsigned int v8; // ebx
  unsigned int v9; // edx
  unsigned int v10; // edx
  unsigned int v11; // eax
  int v12; // eax
  _DWORD *v13; // edx
  _DWORD *v14; // ebx
  _DWORD *v15; // eax
  _DWORD *i; // ecx
  int v17; // edx
  _DWORD *v18; // edx
  _DWORD *j; // ecx
  double v20; // st7
  int result; // eax
  int v22; // ecx
  double v23; // st7
  int v24; // [esp+10h] [ebp-60h]
  int v25; // [esp+14h] [ebp-5Ch]
  int v26; // [esp+18h] [ebp-58h]
  float v27[7]; // [esp+1Ch] [ebp-54h] BYREF
  double v28; // [esp+38h] [ebp-38h]
  double v29; // [esp+40h] [ebp-30h]
  double v30; // [esp+48h] [ebp-28h]
  double v31; // [esp+50h] [ebp-20h]
  double v32; // [esp+58h] [ebp-18h]
  double v33; // [esp+60h] [ebp-10h]

  (*(void (__thiscall **)(int, float *))(*(_DWORD *)a1 + 176))(a1, v27);
  v4 = (_DWORD *)*a3;
  v28 = v27[0];
  v5 = a3[1];
  v29 = v27[1];
  v6 = (v5 - (int)v4) >> 2;
  v30 = v27[2];
  v26 = 4 * v6;
  v31 = v27[3];
  v7 = &v4[v6];
  v32 = v27[4];
  v33 = v27[5];
  if ( v4 )
    v8 = (a3[2] - (int)v4) >> 2;
  else
    v8 = 0;
  v9 = v6 + 15;
  if ( v8 < v9 )
  {
    v10 = 2 * v9;
    v25 = v7 - v4;
    if ( v4 )
      v11 = (a3[2] - (int)v4) >> 2;
    else
      v11 = 0;
    if ( v11 < v10 )
    {
      v24 = v10;
      v12 = (*(int (__thiscall **)(int, unsigned int, int))(*(_DWORD *)dword_1002F7BC + 8))(
              dword_1002F7BC,
              4 * v10,
              289);
      v13 = (_DWORD *)a3[1];
      v14 = (_DWORD *)v12;
      v15 = (_DWORD *)*a3;
      for ( i = v14; v15 != v13; ++i )
        *i = *v15++;
      if ( *a3 )
        (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_1002F7BC + 20))(dword_1002F7BC, *a3);
      v17 = (a3[1] - *a3) >> 2;
      a3[2] = &v14[v24];
      a3[1] = &v14[v17];
      *a3 = v14;
    }
    v7 = (_DWORD *)(*a3 + 4 * v25);
  }
  v18 = (_DWORD *)a3[1];
  for ( j = v7; j != v18; ++j )
    j[15] = *j;
  v20 = v27[6];
  *v7 = 0;
  v7[1] = 0;
  v7[2] = 0;
  v7[3] = 0;
  v7[4] = 0;
  v7[5] = 0;
  v7[6] = 0;
  v7[7] = 0;
  v7[8] = 0;
  v7[9] = 0;
  v7[10] = 0;
  v7[11] = 0;
  v7[12] = 0;
  v7[13] = 0;
  v7[14] = 0;
  a3[1] += 60;
  result = v26 + *a3;
  *(_DWORD *)result = 5;
  *(_DWORD *)(result + 4) = a4;
  *(_DWORD *)(result + 8) = *(_DWORD *)a2;
  *(_DWORD *)(result + 12) = *((_DWORD *)a2 + 1);
  *(_DWORD *)(result + 16) = *((_DWORD *)a2 + 2);
  *(_DWORD *)(result + 20) = *((_DWORD *)a2 + 3);
  *(_DWORD *)(result + 24) = *((_DWORD *)a2 + 4);
  v22 = *((_DWORD *)a2 + 5);
  *(float *)(result + 56) = v20;
  v23 = v28;
  *(_DWORD *)(result + 28) = v22;
  *(float *)(result + 32) = v23 - *a2;
  *(float *)(result + 36) = v29 - a2[1];
  *(float *)(result + 40) = v30 - a2[2];
  *(float *)(result + 44) = v31 - *a2;
  *(float *)(result + 48) = v32 - a2[1];
  *(float *)(result + 52) = v33 - a2[2];
  return result;
}
