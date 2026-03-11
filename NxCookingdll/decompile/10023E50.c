/*
 * func-name: sub_10023E50
 * func-address: 0x10023e50
 * callers: 0x10024900
 * callees: 0x10001160, 0x1000d700, 0x1000d9a0, 0x10023310, 0x10023610, 0x100236d0, 0x10023790, 0x10023900, 0x100239c0, 0x10024560
 */

char __thiscall sub_10023E50(int *this, _BYTE *a2)
{
  int *v2; // ebp
  int v4; // esi
  _DWORD *v5; // eax
  _DWORD *v6; // ecx
  int v7; // ebx
  int v8; // edx
  int v9; // edi
  int CookingParams; // eax
  char v12; // al
  int v13; // [esp+14h] [ebp-28h]
  int v15[7]; // [esp+20h] [ebp-1Ch] BYREF

  v2 = this;
  if ( *(_DWORD *)a2 < 3u
    || *(_DWORD *)a2 > 0xFFFFu && (a2[24] & 2) != 0
    || !*((_DWORD *)a2 + 4)
    || *((_DWORD *)a2 + 2) < 0xCu )
  {
    goto LABEL_26;
  }
  if ( !*((_DWORD *)a2 + 5) )
  {
    if ( (a2[24] & 4) != 0 )
      goto LABEL_11;
LABEL_26:
    sub_1000D700(
      1,
      (int)"g:\\scm\\release\\PhysX_2.8.0\\novodex\\SDKs\\Cooking\\src\\ConvexMeshBuilder.cpp",
      79,
      0,
      "ConvexMesh::loadFromDesc: desc.isValid() failed!",
      v13);
    return 0;
  }
  if ( *((_DWORD *)a2 + 1) < 2u )
    goto LABEL_26;
  if ( (a2[24] & 2) != 0 ? *((_DWORD *)a2 + 3) < 6u : *((_DWORD *)a2 + 3) < 0xCu )
    goto LABEL_26;
LABEL_11:
  qmemcpy(v15, a2, sizeof(v15));
  if ( v15[5] )
  {
    if ( (v15[6] & 4) != 0 )
      v12 = sub_100236D0(this, v15);
    else
      v12 = sub_10023790(this, v15);
    if ( !v12 )
      return 0;
  }
  else
  {
    if ( (v15[6] & 4) == 0
      && !byte_1005B1CE
      && (!dword_100580A4
       || sub_10001160(
            (_DWORD *)dword_100580A4,
            107,
            (int)"g:\\scm\\release\\PhysX_2.8.0\\novodex\\SDKs\\Cooking\\src\\ConvexMeshBuilder.cpp",
            97,
            &byte_1005B1CE,
            "desc.flags & NX_CF_COMPUTE_CONVEX",
            0)) )
    {
      __debugbreak();
    }
    v4 = v15[0];
    v5 = (_DWORD *)(*(int (__thiscall **)(int, int, int))(*(_DWORD *)dword_100580A0 + 8))(
                     dword_100580A0,
                     12 * v15[0],
                     261);
    v6 = (_DWORD *)v15[4];
    v7 = (int)v5;
    v8 = v4;
    if ( v4 )
    {
      v9 = v15[2];
      do
      {
        *v5 = *v6;
        v5[1] = v6[1];
        --v8;
        v5[2] = v6[2];
        v5 += 3;
        v6 = (_DWORD *)((char *)v6 + v9);
      }
      while ( v8 );
      v2 = this;
    }
    CookingParams = NxGetCookingParams(v6);
    if ( !sub_10023310(v7, (int)(v2 + 39), v4, COERCE_INT(*(float *)(CookingParams + 4))) )
      return 0;
    if ( v7 )
      (*(void (__thiscall **)(int, int))(*(_DWORD *)dword_100580A0 + 20))(dword_100580A0, v7);
  }
  sub_10023610(v2);
  sub_10023900((int)v2);
  if ( !sub_100239C0(v2) )
    return 0;
  return sub_1000D9A0();
}
