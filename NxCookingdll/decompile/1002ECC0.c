/*
 * func-name: sub_1002ECC0
 * func-address: 0x1002ecc0
 * callers: 0x1002f4a0, 0x1002fc50
 * callees: 0x10001160, 0x1000d700, 0x1001e480, 0x1001e4a0, 0x1001efc0
 */

char __usercall sub_1002ECC0@<al>(int **a1@<ecx>, int a2@<ebx>, int a3@<ebp>, int a4@<edi>)
{
  int *v5; // eax
  int *v7; // eax
  unsigned int i; // ecx
  int v9; // edx
  int v10; // eax
  int *v11; // ecx
  unsigned int k; // eax
  int *v13; // ecx
  unsigned int j; // eax
  int v15; // [esp+Ch] [ebp-38h]
  int v16; // [esp+Ch] [ebp-38h]
  int v17[12]; // [esp+10h] [ebp-34h] BYREF
  int v18; // [esp+40h] [ebp-4h]

  if ( !*a1
    && !byte_1005B47F
    && (!dword_100580A4
     || sub_10001160(
          (_DWORD *)dword_100580A4,
          107,
          (int)"g:\\scm\\release\\PhysX_2.8.0\\novodex\\SDKs\\Cooking\\src\\InternalTriangleMeshBuilder.cpp",
          394,
          &byte_1005B47F,
          "mesh",
          0)) )
  {
    __debugbreak();
  }
  sub_1001E480(v17);
  sub_1001EFC0((int)v17, a2, a3, a4, (int)a1, (*a1)[1], (*a1)[3], **a1, (*a1)[2], v15, v17[0], v17[1], v17[2]);
  (*a1)[6] = v17[9];
  (*a1)[7] = v17[11];
  v5 = *a1;
  if ( (unsigned int)(*a1)[6] > 0x10000 )
  {
    sub_1000D700(
      4,
      (int)"g:\\scm\\release\\PhysX_2.8.0\\novodex\\SDKs\\Cooking\\src\\InternalTriangleMeshBuilder.cpp",
      411,
      0,
      "The mesh has more than 65536 convex parts. This is invalid. Please use a smaller mesh.",
      v16);
LABEL_8:
    sub_1001E4A0(v17);
    return 0;
  }
  if ( (unsigned int)v5[7] > 0x10000 )
  {
    sub_1000D700(
      4,
      (int)"g:\\scm\\release\\PhysX_2.8.0\\novodex\\SDKs\\Cooking\\src\\InternalTriangleMeshBuilder.cpp",
      417,
      0,
      "The mesh has a convex part made of more than 65536 flat parts. This is invalid. Please use a smaller mesh.",
      v16);
    goto LABEL_8;
  }
  (*a1)[8] = (*(int (__thiscall **)(int, int, int))(*(_DWORD *)dword_100580A0 + 8))(dword_100580A0, 2 * v5[1], 275);
  v7 = *a1;
  for ( i = 0; i < (*a1)[1]; ++i )
  {
    *(_WORD *)(v7[8] + 2 * i) = *(_WORD *)(v17[10] + 4 * i);
    v7 = *a1;
  }
  v9 = *(_DWORD *)dword_100580A0;
  v10 = (*a1)[1];
  if ( (unsigned int)(*a1)[7] >= 0x100 )
  {
    (*a1)[9] = (*(int (__stdcall **)(int, int))(v9 + 8))(2 * v10, 275);
    v13 = *a1;
    for ( j = 0; j < (*a1)[1]; ++j )
    {
      *(_WORD *)(v13[9] + 2 * j) = *(_WORD *)(v18 + 4 * j);
      v13 = *a1;
    }
  }
  else
  {
    (*a1)[9] = (*(int (__stdcall **)(int, int))(v9 + 8))(v10, 274);
    v11 = *a1;
    for ( k = 0; k < (*a1)[1]; ++k )
    {
      *(_BYTE *)(k + v11[9]) = *(_BYTE *)(v18 + 4 * k);
      v11 = *a1;
    }
  }
  sub_1001E4A0(v17);
  return 1;
}
