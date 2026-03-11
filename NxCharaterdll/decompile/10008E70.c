/*
 * func-name: sub_10008E70
 * func-address: 0x10008e70
 * callers: 0x10005170
 * callees: 0x10006d60, 0x10006f00, 0x100070e0, 0x100072c0, 0x10007c00, 0x10008410, 0x1000a47c, 0x1000b170
 */

char __cdecl sub_10008E70(int *a1, double *a2, int *a3, int *a4, int *a5, int *a6, int a7, char a8, char a9, int a10)
{
  double v10; // st6
  int (__thiscall *v11)(int *); // edx
  double v12; // st7
  int v13; // ebx
  void *v14; // esp
  int v15; // eax
  int v16; // edx
  int (__thiscall *v17)(int *, float *, int, int, _BYTE *, _DWORD, int, int, _DWORD); // edx
  int v18; // eax
  int v20; // ebx
  bool v21; // zf
  int v22; // eax
  _BYTE v23[12]; // [esp+0h] [ebp-4Ch] BYREF
  float v24[6]; // [esp+Ch] [ebp-40h] BYREF
  double v25[3]; // [esp+24h] [ebp-28h] BYREF
  int v26; // [esp+3Ch] [ebp-10h]
  int v27; // [esp+40h] [ebp-Ch]
  _BYTE *v28; // [esp+44h] [ebp-8h]

  v10 = a2[4] + a2[1];
  v11 = *(int (__thiscall **)(int *))(*a1 + 272);
  v12 = a2[5] + a2[2];
  v25[0] = (*a2 + a2[3]) * 0.5;
  v25[1] = v10 * 0.5;
  v25[2] = v12 * 0.5;
  v13 = v11(a1);
  v14 = alloca(4 * v13);
  v28 = v23;
  v15 = a8 != 0;
  if ( a9 )
    v15 |= 2u;
  v16 = *a1;
  v24[0] = *a2;
  v17 = *(int (__thiscall **)(int *, float *, int, int, _BYTE *, _DWORD, int, int, _DWORD))(v16 + 456);
  v24[1] = a2[1];
  v24[2] = a2[2];
  v24[3] = a2[3];
  v24[4] = a2[4];
  v24[5] = a2[5];
  v18 = v17(a1, v24, v15, v13, v23, 0, a7, a10, 0);
  if ( !v18 )
    return 0;
  do
  {
    v20 = *(_DWORD *)v28;
    v21 = *(_DWORD *)(*(_DWORD *)v28 + 4) == 1128485971;
    v27 = v18 - 1;
    v26 = v20;
    v28 += 4;
    if ( !v21
      && !(*(int (__thiscall **)(int, int))(*(_DWORD *)v20 + 24))(v20, 16)
      && !(*(int (__thiscall **)(int, int))(*(_DWORD *)v20 + 24))(v20, 7) )
    {
      v22 = (*(int (__thiscall **)(int))(*(_DWORD *)v20 + 92))(v20);
      switch ( v22 )
      {
        case 1:
          sub_10006D60(v20, v25, a6, v20);
          break;
        case 3:
          sub_10006F00(v20, v25, a6, v20);
          break;
        case 2:
          sub_100070E0(a6, v26, v25, v20);
          break;
        case 6:
          sub_100072C0((int)v25, a6, v20, v20, a3, a4, a5, (int)v24);
          break;
        case 7:
          sub_10007C00((int)v25, a6, v20, v20, (float **)a3, a4, a5, (int)v24);
          break;
        case 5:
          sub_10008410((int)v25, a6, v20, v20, (float **)a3, a4, a5);
          break;
      }
    }
    v18 = v27;
  }
  while ( v27 );
  return 1;
}
