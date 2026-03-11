/*
 * func-name: sub_100236D0
 * func-address: 0x100236d0
 * callers: 0x10023e50
 * callees: 0x1000d700, 0x10023310, 0x10024560, 0x10034ca4, 0x10035700
 */

char __thiscall sub_100236D0(_DWORD *this, int *a2)
{
  int v3; // esi
  void *v4; // esp
  int v5; // edx
  int *v6; // eax
  int *v7; // ecx
  int v8; // esi
  int CookingParams; // eax
  int v11[3]; // [esp+4h] [ebp-18h] BYREF
  int *v12; // [esp+10h] [ebp-Ch]
  int v13; // [esp+14h] [ebp-8h]

  this[27] &= ~1u;
  v3 = *a2;
  v4 = alloca(12 * *a2);
  v5 = *a2;
  v6 = v11;
  v13 = a2[2];
  v7 = (int *)a2[4];
  v12 = v11;
  if ( v3 )
  {
    do
    {
      *v6 = *v7;
      v6[1] = v7[1];
      v8 = v7[2];
      v7 = (int *)((char *)v7 + v13);
      --v5;
      v6[2] = v8;
      v6 += 3;
    }
    while ( v5 );
  }
  CookingParams = NxGetCookingParams(v7);
  if ( sub_10023310((int)v12, (int)(this + 39), *a2, COERCE_INT(*(float *)(CookingParams + 4))) )
  {
    this[27] |= 1u;
    return 1;
  }
  else
  {
    sub_1000D700(
      4,
      (int)"g:\\scm\\release\\PhysX_2.8.0\\novodex\\SDKs\\Cooking\\src\\ConvexMeshBuilder.cpp",
      443,
      0,
      "ConvexMesh::computeConvexHull: convex hull creation failed!",
      v11[0]);
    return 0;
  }
}
