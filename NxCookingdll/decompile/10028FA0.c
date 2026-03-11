/*
 * func-name: sub_10028FA0
 * func-address: 0x10028fa0
 * callers: 0x100295d0
 * callees: 0x10025ff0, 0x10028ec0, 0x10028f40
 */

int __cdecl sub_10028FA0(int *a1, int a2)
{
  int v3; // ebx
  int v4; // ebp
  int v5; // edi
  float *v6; // eax
  float *v7; // ebx
  int v8; // ebp
  float *v9; // eax
  float *v10; // eax
  float *v11; // eax
  float *v12; // eax
  int v13; // edx
  _DWORD *v14; // eax
  int v15; // edx
  _DWORD *v16; // eax
  int v17; // edx
  _DWORD *v18; // eax
  float *v20; // [esp+18h] [ebp-14h]
  int v21; // [esp+1Ch] [ebp-10h]
  int v22; // [esp+20h] [ebp-Ch]
  int v23; // [esp+24h] [ebp-8h]
  int v24; // [esp+28h] [ebp-4h]
  float *v25; // [esp+30h] [ebp+4h]

  v3 = a1[1];
  v4 = a1[2];
  v5 = dword_1005B474;
  v22 = *a1;
  v23 = v3;
  v24 = v4;
  v6 = (float *)(*(int (__thiscall **)(int, int, int))(*(_DWORD *)dword_100580A0 + 8))(dword_100580A0, 36, 261);
  if ( v6 )
    v7 = sub_10028EC0(v6, a2, v3, v4);
  else
    v7 = 0;
  *((_DWORD *)v7 + 3) = a1[3];
  v8 = v5 + 1;
  *((_DWORD *)v7 + 4) = v5 + 1;
  *((_DWORD *)v7 + 5) = v5 + 2;
  v21 = v5 + 2;
  *(_DWORD *)sub_10025FF0(*(_DWORD **)(dword_1005B470 + 4 * a1[3]), v23, v24) = v5;
  v9 = (float *)(*(int (__thiscall **)(int, int, int))(*(_DWORD *)dword_100580A0 + 8))(dword_100580A0, 36, 261);
  if ( v9 )
  {
    v10 = sub_10028EC0(v9, a2, v24, v22);
    v25 = v10;
  }
  else
  {
    v25 = 0;
    v10 = 0;
  }
  *((_DWORD *)v10 + 3) = a1[4];
  *((_DWORD *)v10 + 4) = v21;
  *((_DWORD *)v10 + 5) = v5;
  *(_DWORD *)sub_10025FF0(*(_DWORD **)(dword_1005B470 + 4 * a1[4]), v24, v22) = v8;
  v11 = (float *)(*(int (__thiscall **)(int, int, int))(*(_DWORD *)dword_100580A0 + 8))(dword_100580A0, 36, 261);
  if ( v11 )
  {
    v12 = sub_10028EC0(v11, a2, v22, v23);
    v20 = v12;
  }
  else
  {
    v20 = 0;
    v12 = 0;
  }
  *((_DWORD *)v12 + 3) = a1[5];
  *((_DWORD *)v12 + 4) = v5;
  *((_DWORD *)v12 + 5) = v8;
  *(_DWORD *)sub_10025FF0(*(_DWORD **)(dword_1005B470 + 4 * a1[5]), v22, v23) = v21;
  v13 = *((_DWORD *)v7 + 3);
  v14 = *(_DWORD **)(dword_1005B470 + 4 * v13);
  if ( *v14 == a2 || v14[1] == a2 || v14[2] == a2 )
    sub_10028F40(v7, *(_DWORD **)(dword_1005B470 + 4 * v13));
  v15 = *((_DWORD *)v25 + 3);
  v16 = *(_DWORD **)(dword_1005B470 + 4 * v15);
  if ( *v16 == a2 || v16[1] == a2 || v16[2] == a2 )
    sub_10028F40(v25, *(_DWORD **)(dword_1005B470 + 4 * v15));
  v17 = *((_DWORD *)v20 + 3);
  v18 = *(_DWORD **)(dword_1005B470 + 4 * v17);
  if ( *v18 == a2 || v18[1] == a2 || v18[2] == a2 )
    sub_10028F40(v20, *(_DWORD **)(dword_1005B470 + 4 * v17));
  *(_DWORD *)(dword_1005B470 + 4 * a1[6]) = 0;
  return (*(int (__thiscall **)(int, int *))(*(_DWORD *)dword_100580A0 + 20))(dword_100580A0, a1);
}
