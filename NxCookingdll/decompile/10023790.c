/*
 * func-name: sub_10023790
 * func-address: 0x10023790
 * callers: 0x10023e50
 * callees: 0x1000d700, 0x1001e1d0, 0x1001e200, 0x1001e3c0, 0x10034ca4, 0x10035700
 */

char __thiscall sub_10023790(_DWORD *this, int *a2)
{
  int v2; // edi
  int v3; // eax
  void *v4; // esp
  int v5; // ebx
  int *v6; // ecx
  int v7; // edx
  int *v8; // eax
  int v9; // edi
  void *v10; // esp
  unsigned __int16 *v11; // ecx
  int *j; // eax
  _DWORD *v13; // eax
  int v14; // edx
  int *k; // eax
  int v16; // edi
  int v17; // eax
  int v19[3]; // [esp+0h] [ebp-44h] BYREF
  _DWORD v20[2]; // [esp+Ch] [ebp-38h] BYREF
  __int16 v21; // [esp+14h] [ebp-30h]
  _DWORD v22[5]; // [esp+20h] [ebp-24h] BYREF
  int *i; // [esp+34h] [ebp-10h]
  int v24; // [esp+38h] [ebp-Ch]
  _DWORD *v25; // [esp+3Ch] [ebp-8h]

  this[27] &= ~1u;
  v2 = *a2;
  v3 = 12 * *a2;
  v25 = this;
  v4 = alloca(v3);
  v5 = a2[2];
  v6 = (int *)a2[4];
  v7 = v2;
  v8 = v19;
  for ( i = v19; v7; v6 = (int *)((char *)v6 + v5) )
  {
    *v8 = *v6;
    v8[1] = v6[1];
    --v7;
    v8[2] = v6[2];
    v8 += 3;
  }
  v9 = 3 * a2[1];
  v10 = alloca(v9 * 4);
  v11 = (unsigned __int16 *)a2[5];
  if ( (a2[6] & 2) != 0 )
  {
    for ( j = v19; j < &v19[v9]; j = v13 + 1 )
    {
      *j = *v11;
      v13 = j + 1;
      *v13++ = v11[1];
      *v13 = v11[2];
      v11 = (unsigned __int16 *)((char *)v11 + a2[3]);
    }
  }
  else
  {
    v14 = a2[1];
    v24 = a2[3];
    for ( k = v19; v14; k += 3 )
    {
      *k = *(_DWORD *)v11;
      k[1] = *((_DWORD *)v11 + 1);
      v16 = *((_DWORD *)v11 + 2);
      v11 = (unsigned __int16 *)((char *)v11 + v24);
      --v14;
      k[2] = v16;
    }
  }
  v17 = a2[1];
  v22[0] = *a2;
  v22[4] = 0;
  v22[1] = i;
  v22[2] = v17;
  v22[3] = v19;
  sub_1001E1D0(v20, (int)(v25 + 39));
  if ( (a2[6] & 0x20) != 0 )
    v21 = 1;
  if ( sub_1001E200(v20, (int)v22, 0, 0, 0) )
  {
    sub_1001E3C0(v20);
    return 1;
  }
  else
  {
    sub_1000D700(
      4,
      (int)"g:\\scm\\release\\PhysX_2.8.0\\novodex\\SDKs\\Cooking\\src\\ConvexMeshBuilder.cpp",
      494,
      0,
      "ConvexMesh::loadConvexHull: convex hull init failed!",
      v19[0]);
    sub_1001E3C0(v20);
    return 0;
  }
}
