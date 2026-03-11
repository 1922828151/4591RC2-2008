/*
 * func-name: sub_10006D60
 * func-address: 0x10006d60
 * callers: 0x10008e70
 * callees: none
 */

int __usercall sub_10006D60@<eax>(int a1@<ecx>, double *a2@<edi>, _DWORD *a3@<esi>, int a4)
{
  _DWORD *v4; // ecx
  int v5; // edx
  int v6; // edx
  int v7; // ebp
  _DWORD *v8; // eax
  unsigned int v9; // ebx
  unsigned int v10; // edx
  unsigned int v11; // edx
  unsigned int v12; // eax
  int v13; // ebp
  int v14; // eax
  _DWORD *v15; // edx
  _DWORD *v16; // ebx
  _DWORD *v17; // eax
  _DWORD *v18; // ecx
  int v19; // ecx
  _DWORD *v20; // edx
  _DWORD *i; // ecx
  double v22; // st7
  int result; // eax
  int v24; // edx
  double v25; // st7
  int v26; // [esp+Ch] [ebp-3Ch]
  int v27; // [esp+10h] [ebp-38h]
  int v28; // [esp+14h] [ebp-34h]
  float v29[4]; // [esp+18h] [ebp-30h] BYREF
  double v30; // [esp+28h] [ebp-20h]
  double v31; // [esp+30h] [ebp-18h]
  double v32; // [esp+38h] [ebp-10h]

  (*(void (__thiscall **)(int, float *))(*(_DWORD *)a1 + 164))(a1, v29);
  v4 = (_DWORD *)*a3;
  v30 = v29[0];
  v5 = a3[1] - (_DWORD)v4;
  v31 = v29[1];
  v6 = v5 >> 2;
  v32 = v29[2];
  v7 = 4 * v6;
  v27 = 4 * v6;
  v8 = &v4[v6];
  if ( v4 )
    v9 = (a3[2] - (int)v4) >> 2;
  else
    v9 = 0;
  v10 = v6 + 12;
  if ( v9 < v10 )
  {
    v11 = 2 * v10;
    v28 = v8 - v4;
    if ( v4 )
      v12 = (a3[2] - (int)v4) >> 2;
    else
      v12 = 0;
    if ( v12 < v11 )
    {
      v13 = 4 * v11;
      v26 = 4 * v11;
      v14 = (*(int (__thiscall **)(int, unsigned int, int))(*(_DWORD *)dword_1002F7BC + 8))(
              dword_1002F7BC,
              4 * v11,
              289);
      v15 = (_DWORD *)a3[1];
      v16 = (_DWORD *)v14;
      v17 = (_DWORD *)*a3;
      v18 = v16;
      if ( (_DWORD *)*a3 != v15 )
      {
        do
          *v18++ = *v17++;
        while ( v17 != v15 );
        v13 = v26;
      }
      if ( *a3 )
        (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_1002F7BC + 20))(dword_1002F7BC, *a3);
      v19 = (a3[1] - *a3) >> 2;
      a3[2] = (char *)v16 + v13;
      v7 = v27;
      a3[1] = &v16[v19];
      *a3 = v16;
    }
    v8 = (_DWORD *)(*a3 + 4 * v28);
  }
  v20 = (_DWORD *)a3[1];
  for ( i = v8; i != v20; ++i )
    i[12] = *i;
  v22 = v29[3];
  *v8 = 0;
  v8[1] = 0;
  v8[2] = 0;
  v8[3] = 0;
  v8[4] = 0;
  v8[5] = 0;
  v8[6] = 0;
  v8[7] = 0;
  v8[8] = 0;
  v8[9] = 0;
  v8[10] = 0;
  v8[11] = 0;
  a3[1] += 48;
  result = v7 + *a3;
  *(_DWORD *)result = 4;
  *(_DWORD *)(result + 4) = a4;
  *(_DWORD *)(result + 8) = *(_DWORD *)a2;
  *(_DWORD *)(result + 12) = *((_DWORD *)a2 + 1);
  *(_DWORD *)(result + 16) = *((_DWORD *)a2 + 2);
  *(_DWORD *)(result + 20) = *((_DWORD *)a2 + 3);
  *(_DWORD *)(result + 24) = *((_DWORD *)a2 + 4);
  v24 = *((_DWORD *)a2 + 5);
  *(float *)(result + 44) = v22;
  v25 = v30;
  *(_DWORD *)(result + 28) = v24;
  *(float *)(result + 32) = v25 - *a2;
  *(float *)(result + 36) = v31 - a2[1];
  *(float *)(result + 40) = v32 - a2[2];
  return result;
}
