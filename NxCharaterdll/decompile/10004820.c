/*
 * func-name: sub_10004820
 * func-address: 0x10004820
 * callers: 0x10005510
 * callees: 0x10002ff0, 0x100031d0, 0x10003470, 0x100035c0, 0x10003880, 0x10003ad0, 0x10003d30, 0x10003f20, 0x10004110, 0x10004340, 0x10004670, 0x10004930
 */

char __usercall sub_10004820@<al>(int a1@<eax>, int a2@<esi>, int a3, int a4, double *a5, int a6)
{
  _DWORD *v6; // ebx
  _DWORD *v7; // edi
  char (__cdecl *v8)(int, int, int, double *, int, int); // eax
  double v9; // st7
  double v10; // st6
  int v11; // ecx
  int v12; // edx
  int v13; // eax
  int v14; // ecx
  int v15; // edx
  int v16; // eax
  char v18; // [esp+Fh] [ebp-31h]
  _DWORD v19[9]; // [esp+10h] [ebp-30h] BYREF
  float v20; // [esp+34h] [ebp-Ch]
  int v21; // [esp+38h] [ebp-8h]

  *(_DWORD *)(a2 + 40) = -1;
  *(_DWORD *)(a2 + 44) = 0;
  v6 = *(_DWORD **)(a1 + 4);
  v7 = *(_DWORD **)a1;
  v18 = 0;
  if ( *(_DWORD **)a1 == v6 )
    return 0;
  do
  {
    v8 = (char (__cdecl *)(int, int, int, double *, int, int))*(&funcs_1000488F[6 * *(_DWORD *)(a4 + 36)] + *v7);
    if ( v8 )
    {
      v20 = *(float *)(a2 + 36);
      v21 = -1;
      if ( v8(a3, a4, (int)v7, a5, a6, (int)v19) )
      {
        v9 = v20;
        if ( *(float *)(a2 + 36) > (double)v20 )
        {
          v10 = *(float *)&v19[6];
          v11 = v19[1];
          v12 = v19[2];
          *(_DWORD *)a2 = v19[0];
          v13 = v19[3];
          *(_DWORD *)(a2 + 4) = v11;
          v14 = v19[4];
          *(_DWORD *)(a2 + 8) = v12;
          v15 = v19[5];
          *(_DWORD *)(a2 + 12) = v13;
          v16 = v21;
          *(_DWORD *)(a2 + 16) = v14;
          *(_DWORD *)(a2 + 20) = v15;
          *(float *)(a2 + 24) = v10;
          v18 = 1;
          *(float *)(a2 + 28) = *(float *)&v19[7];
          *(float *)(a2 + 32) = *(float *)&v19[8];
          *(_DWORD *)(a2 + 40) = v16;
          *(_DWORD *)(a2 + 44) = v7;
          *(float *)(a2 + 36) = v9;
        }
      }
    }
    v7 = (_DWORD *)((char *)v7 + dword_1001C658[*v7]);
  }
  while ( v7 != v6 );
  return v18;
}
