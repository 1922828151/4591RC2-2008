/*
 * func-name: sub_1002F4A0
 * func-address: 0x1002f4a0
 * callers: 0x1002f7f0
 * callees: 0x10001050, 0x10001160, 0x1000d700, 0x1000f900, 0x1000f970, 0x1000f9e0, 0x1000fc40, 0x1002df90, 0x1002e590, 0x1002ecc0
 */

char __fastcall sub_1002F4A0(int a1, int a2, int *a3)
{
  int v3; // ebx
  int *v4; // edi
  int v6; // ebp
  _DWORD *v7; // eax
  int v8; // edi
  _DWORD *v9; // edx
  _DWORD *i; // ecx
  int v11; // ebp
  unsigned int k; // edi
  unsigned int v13; // ebp
  _DWORD *v14; // ecx
  int v15; // eax
  int v16; // edi
  _WORD *v17; // edx
  int v18; // eax
  _WORD *j; // ecx
  int v21; // [esp+0h] [ebp-1Ch]
  int *v22; // [esp+10h] [ebp-Ch] BYREF
  _DWORD *v23; // [esp+14h] [ebp-8h]
  int v24; // [esp+18h] [ebp-4h]
  int v25; // [esp+20h] [ebp+4h]

  v3 = a1;
  v4 = (int *)(a1 + 4);
  v24 = a1;
  v23 = (_DWORD *)(a1 + 4);
  sub_1000FC40((_DWORD *)(a1 + 4));
  v6 = sub_1000F900(v4, *a3);
  v7 = (_DWORD *)sub_1000F970(v4, a3[1]);
  v8 = *v4;
  v25 = a3[2];
  v9 = (_DWORD *)a3[4];
  for ( i = (_DWORD *)v6; v8; i += 3 )
  {
    *i = *v9;
    i[1] = v9[1];
    v11 = v9[2];
    v9 = (_DWORD *)((char *)v9 + v25);
    --v8;
    i[2] = v11;
  }
  k = a3[6] & 1;
  v13 = (unsigned int)&v7[3 * *(_DWORD *)(v3 + 8)];
  v14 = (_DWORD *)a3[5];
  if ( (a3[6] & 2) != 0 )
  {
    for ( ; (unsigned int)v7 < v13; v7 += 3 )
    {
      *v7 = *(unsigned __int16 *)v14;
      v7[1] = *((unsigned __int16 *)v14 + k + 1);
      v3 = *((unsigned __int16 *)v14 + 2 - k);
      v7[2] = v3;
      v14 = (_DWORD *)((char *)v14 + a3[3]);
    }
  }
  else
  {
    for ( ; (unsigned int)v7 < v13; v7 += 3 )
    {
      *v7 = *v14;
      v7[1] = v14[k + 1];
      v3 = v14[2 - k];
      v7[2] = v3;
      v14 = (_DWORD *)((char *)v14 + a3[3]);
    }
  }
  if ( a3[8] )
  {
    v15 = sub_1000F9E0(v23);
    v3 = v24;
    v16 = a3[7];
    v17 = (_WORD *)a3[8];
    v13 = v15;
    v18 = *(_DWORD *)(v24 + 8);
    for ( j = (_WORD *)v13; v18; v17 = (_WORD *)((char *)v17 + v16) )
    {
      --v18;
      *j++ = *v17;
    }
    for ( k = 0; k < *(_DWORD *)(v3 + 8); ++k )
    {
      if ( *(_WORD *)(v13 + 2 * k) == 0xFFFF
        && !byte_1005B482
        && (!dword_100580A4
         || sub_10001160(
              (_DWORD *)dword_100580A4,
              107,
              (int)"g:\\scm\\release\\PhysX_2.8.0\\novodex\\SDKs\\Cooking\\src\\TriangleMeshBuilder.cpp",
              350,
              &byte_1005B482,
              "materials[i]!=0xffff",
              0)) )
      {
        __debugbreak();
      }
    }
  }
  unknown_libname_1(v23);
  if ( !sub_1002E590(&v22, v13) )
  {
    sub_1000D700(
      4,
      (int)"g:\\scm\\release\\PhysX_2.8.0\\novodex\\SDKs\\Cooking\\src\\TriangleMeshBuilder.cpp",
      361,
      0,
      "cleaning the mesh failed",
      v21);
LABEL_21:
    NxReportCooking();
    return 0;
  }
  if ( a3[9] == 255 && !sub_1002ECC0(&v22, v3, v13, k) )
    goto LABEL_21;
  NxReportCooking();
  return 1;
}
