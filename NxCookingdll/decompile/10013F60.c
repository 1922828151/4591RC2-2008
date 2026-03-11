/*
 * func-name: sub_10013F60
 * func-address: 0x10013f60
 * callers: none
 * callees: 0x1000d700, 0x10012670, 0x100126b0, 0x10014da0, 0x10014f50, 0x10015020
 */

char __thiscall sub_10013F60(int *this, int a2)
{
  void (__thiscall ***v3)(_DWORD, int); // ecx
  float *v4; // eax
  float *v5; // eax
  void (__thiscall ***v6)(_DWORD, int); // ecx
  int v8; // [esp+8h] [ebp-24h]
  _BYTE v9[28]; // [esp+10h] [ebp-1Ch] BYREF

  if ( *(_DWORD *)a2 && *(_DWORD *)(a2 + 4) )
  {
    v3 = (void (__thiscall ***)(_DWORD, int))this[46];
    if ( v3 )
    {
      (**v3)(v3, 1);
      this[46] = 0;
    }
    v4 = (float *)(*(int (__thiscall **)(int, int, int))(*(_DWORD *)dword_100580A0 + 8))(dword_100580A0, 116, 39);
    if ( v4 )
      v5 = sub_10012670(v4);
    else
      v5 = 0;
    this[46] = (int)v5;
    sub_10014F50(*(_DWORD *)a2, *(void **)(a2 + 4));
    sub_10014DA0(0);
    if ( sub_100126B0(this[46], (int)this, 0, 0, v9, 1, 0) )
    {
      sub_10015020(v9);
      return 1;
    }
    else
    {
      v6 = (void (__thiscall ***)(_DWORD, int))this[46];
      if ( v6 )
      {
        (**v6)(v6, 1);
        this[46] = 0;
      }
      sub_1000D700(
        1,
        (int)"g:\\scm\\release\\PhysX_2.8.0\\novodex\\SDKs\\Core\\Common\\src\\TriangleMesh.cpp",
        401,
        0,
        "TriangleMesh::loadPMap: pmap creation failed!",
        v8);
      sub_10015020(v9);
      return 0;
    }
  }
  else
  {
    sub_1000D700(
      1,
      (int)"g:\\scm\\release\\PhysX_2.8.0\\novodex\\SDKs\\Core\\Common\\src\\TriangleMesh.cpp",
      388,
      0,
      "TriangleMesh::loadPMap: invalid pmap data!",
      v8);
    return 0;
  }
}
