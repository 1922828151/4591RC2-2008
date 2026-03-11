/*
 * func-name: sub_100070E0
 * func-address: 0x100070e0
 * callers: 0x10008e70
 * callees: none
 */

int __usercall sub_100070E0@<eax>(_DWORD *a1@<eax>, int a2@<ecx>, double *a3@<ebx>, int a4)
{
  _DWORD *v5; // ecx
  int v6; // edx
  int v7; // edx
  int v8; // ebp
  _DWORD *v9; // eax
  unsigned int v10; // edi
  unsigned int v11; // edx
  unsigned int v12; // edx
  unsigned int v13; // eax
  int v14; // ebp
  int v15; // eax
  _DWORD *v16; // edx
  _DWORD *v17; // edi
  _DWORD *v18; // eax
  _DWORD *v19; // ecx
  int v20; // ecx
  _DWORD *v21; // edx
  _DWORD *i; // ecx
  double v23; // st7
  int result; // eax
  int v25; // [esp+10h] [ebp-90h]
  int v26; // [esp+14h] [ebp-8Ch]
  int v27; // [esp+18h] [ebp-88h]
  float v28[6]; // [esp+1Ch] [ebp-84h] BYREF
  _BYTE v29[36]; // [esp+34h] [ebp-6Ch] BYREF
  double v30; // [esp+58h] [ebp-48h]
  double v31; // [esp+60h] [ebp-40h]
  double v32; // [esp+68h] [ebp-38h]

  (*(void (__thiscall **)(int, float *))(*(_DWORD *)a2 + 164))(a2, v28);
  v5 = (_DWORD *)*a1;
  v30 = v28[0];
  v6 = a1[1] - (_DWORD)v5;
  v31 = v28[1];
  v7 = v6 >> 2;
  v32 = v28[2];
  v8 = 4 * v7;
  v27 = 4 * v7;
  v9 = &v5[v7];
  if ( v5 )
    v10 = (a1[2] - (int)v5) >> 2;
  else
    v10 = 0;
  v11 = v7 + 23;
  if ( v10 < v11 )
  {
    v12 = 2 * v11;
    v25 = v9 - v5;
    if ( v5 )
      v13 = (a1[2] - (int)v5) >> 2;
    else
      v13 = 0;
    if ( v13 < v12 )
    {
      v14 = 4 * v12;
      v26 = 4 * v12;
      v15 = (*(int (__thiscall **)(int, unsigned int, int))(*(_DWORD *)dword_1002F7BC + 8))(
              dword_1002F7BC,
              4 * v12,
              289);
      v16 = (_DWORD *)a1[1];
      v17 = (_DWORD *)v15;
      v18 = (_DWORD *)*a1;
      v19 = v17;
      if ( (_DWORD *)*a1 != v16 )
      {
        do
          *v19++ = *v18++;
        while ( v18 != v16 );
        v14 = v26;
      }
      if ( *a1 )
        (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_1002F7BC + 20))(dword_1002F7BC, *a1);
      v20 = (a1[1] - *a1) >> 2;
      a1[2] = (char *)v17 + v14;
      v8 = v27;
      a1[1] = &v17[v20];
      *a1 = v17;
    }
    v9 = (_DWORD *)(*a1 + 4 * v25);
  }
  v21 = (_DWORD *)a1[1];
  for ( i = v9; i != v21; ++i )
    i[23] = *i;
  v23 = v28[3];
  *v9 = 0;
  v9[1] = 0;
  v9[2] = 0;
  v9[3] = 0;
  v9[4] = 0;
  v9[5] = 0;
  v9[6] = 0;
  v9[7] = 0;
  v9[8] = 0;
  v9[9] = 0;
  v9[10] = 0;
  v9[11] = 0;
  v9[12] = 0;
  v9[13] = 0;
  v9[14] = 0;
  v9[15] = 0;
  v9[16] = 0;
  v9[17] = 0;
  v9[18] = 0;
  v9[19] = 0;
  v9[20] = 0;
  v9[21] = 0;
  v9[22] = 0;
  a1[1] += 92;
  result = v8 + *a1;
  *(_DWORD *)result = 3;
  *(_DWORD *)(result + 4) = a4;
  *(_DWORD *)(result + 8) = *(_DWORD *)a3;
  *(_DWORD *)(result + 12) = *((_DWORD *)a3 + 1);
  *(_DWORD *)(result + 16) = *((_DWORD *)a3 + 2);
  *(_DWORD *)(result + 20) = *((_DWORD *)a3 + 3);
  *(_DWORD *)(result + 24) = *((_DWORD *)a3 + 4);
  *(_DWORD *)(result + 28) = *((_DWORD *)a3 + 5);
  *(float *)(result + 44) = v23;
  *(float *)(result + 48) = v28[4];
  *(float *)(result + 52) = v28[5];
  qmemcpy((void *)(result + 56), v29, 0x24u);
  *(float *)(result + 32) = v30 - *a3;
  *(float *)(result + 36) = v31 - a3[1];
  *(float *)(result + 40) = v32 - a3[2];
  return result;
}
