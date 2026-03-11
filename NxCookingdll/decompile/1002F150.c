/*
 * func-name: sub_1002F150
 * func-address: 0x1002f150
 * callers: 0x1002f7f0
 * callees: 0x10001160, 0x1000d700, 0x1002e3f0, 0x1002ee60
 */

char __usercall sub_1002F150@<al>(int a1@<ecx>, int a2@<ebx>)
{
  unsigned int v3; // ebp
  unsigned int *v4; // edi
  unsigned int i; // eax
  unsigned int *v7; // eax
  unsigned int *v8; // esi
  unsigned int v9; // edx
  unsigned int *v10; // ecx
  unsigned int v11; // esi
  unsigned int v12; // edi
  unsigned int v13; // esi
  unsigned int v14; // edi
  unsigned int *v15; // eax
  unsigned int v16; // esi
  unsigned int v17; // ecx
  unsigned int *v18; // eax
  int v19; // ebp
  unsigned int *v20; // eax
  unsigned int v21; // ecx
  _BYTE *v22; // edi
  unsigned int *v23; // esi
  int v24; // edi
  int v25; // [esp+8h] [ebp-1Ch]
  unsigned int *v26; // [esp+18h] [ebp-Ch]
  unsigned int *v27; // [esp+1Ch] [ebp-8h]
  char *v28; // [esp+1Ch] [ebp-8h]
  int v29; // [esp+20h] [ebp-4h]
  char *retaddr; // [esp+24h] [ebp+0h]

  if ( !*(_DWORD *)a1
    && !byte_1005B481
    && (!dword_100580A4
     || sub_10001160(
          (_DWORD *)dword_100580A4,
          107,
          (int)"g:\\scm\\release\\PhysX_2.8.0\\novodex\\SDKs\\Cooking\\src\\InternalTriangleMeshBuilder.cpp",
          738,
          &byte_1005B481,
          "mesh",
          0)) )
  {
    __debugbreak();
  }
  if ( *(_DWORD *)(*(_DWORD *)a1 + 40) )
  {
    (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_100580A0 + 20))(
      dword_100580A0,
      *(_DWORD *)(*(_DWORD *)a1 + 40));
    *(_DWORD *)(*(_DWORD *)a1 + 40) = 0;
  }
  v3 = *(_DWORD *)(*(_DWORD *)a1 + 4);
  v4 = *(unsigned int **)(*(_DWORD *)a1 + 12);
  if ( v3 >= 0x40000000 )
    return sub_1000D700(
             1,
             (int)"g:\\scm\\release\\PhysX_2.8.0\\novodex\\SDKs\\Cooking\\src\\InternalTriangleMeshBuilder.cpp",
             752,
             0,
             "TriangleMesh: mesh is too big for this algo!",
             v25);
  *(_DWORD *)(*(_DWORD *)a1 + 40) = (*(int (__thiscall **)(int, unsigned int, int))(*(_DWORD *)dword_100580A0 + 8))(
                                      dword_100580A0,
                                      v3,
                                      27);
  for ( i = 0; i < v3; ++i )
    *(_BYTE *)(i + *(_DWORD *)(*(_DWORD *)a1 + 40)) = 0;
  v29 = 3 * v3;
  v7 = (unsigned int *)(*(int (__thiscall **)(int, unsigned int, int, int))(*(_DWORD *)dword_100580A0 + 8))(
                         dword_100580A0,
                         (unsigned __int64)(3 * v3) >> 28 != 0 ? -1 : 48 * v3,
                         17,
                         a2);
  v8 = v7;
  v9 = 0;
  v26 = v7;
  if ( v3 )
  {
    while ( 1 )
    {
      v10 = v4;
      v11 = v4[1];
      v27 = v4 + 3;
      v12 = *v4;
      if ( v12 >= v11 )
      {
        *v7 = v11;
        v7[1] = v12;
      }
      else
      {
        *v7 = v12;
        v7[1] = v11;
      }
      v7[2] = v9;
      v7[3] = -1;
      v13 = v10[2];
      v14 = *v10;
      v15 = v7 + 4;
      if ( *v10 >= v13 )
      {
        *v15 = v13;
        v15[1] = v14;
      }
      else
      {
        *v15 = v14;
        v15[1] = v13;
      }
      v15[2] = v9 | 0x40000000;
      v15[3] = -1;
      v16 = v10[2];
      v17 = v10[1];
      v18 = v15 + 4;
      if ( v17 >= v16 )
      {
        *v18 = v16;
        v18[1] = v17;
      }
      else
      {
        *v18 = v17;
        v18[1] = v16;
      }
      v18[2] = v9 | 0x80000000;
      v18[3] = -1;
      ++v9;
      v7 = v18 + 4;
      if ( v9 >= v3 )
        break;
      v4 = v27;
    }
    v8 = v26;
  }
  sub_1002E3F0((int)v8, 0, (int)(retaddr - 1));
  v19 = 0;
  if ( (unsigned int)retaddr > 1 )
  {
    v20 = v8 + 6;
    v28 = retaddr - 1;
    do
    {
      if ( *v8 == *(v20 - 2) && v8[1] == *(v20 - 1) )
      {
        v21 = *v20;
        if ( v8[3] == -1 )
        {
          v8[3] = v21;
        }
        else
        {
          v22 = (_BYTE *)((v21 & 0x3FFFFFFF) + *(_DWORD *)(*(_DWORD *)v29 + 40));
          *v22 |= 1 << (v21 >> 30);
        }
      }
      else
      {
        ++v19;
        v8 = &v26[4 * v19];
        *v8 = *(v20 - 2);
        v8[1] = *(v20 - 1);
        v8[2] = *v20;
        v8[3] = v20[1];
      }
      v20 += 4;
      --v28;
    }
    while ( v28 );
  }
  v23 = v26;
  v24 = v19 + 1;
  do
  {
    sub_1002EE60(v23, v29);
    v23 += 4;
    --v24;
  }
  while ( v24 );
  return (*(int (__thiscall **)(int, unsigned int *))(*(_DWORD *)dword_100580A0 + 20))(dword_100580A0, v26);
}
