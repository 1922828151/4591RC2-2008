/*
 * func-name: NxCookTriangleMesh
 * func-address: 0x10024be0
 * callers: 0x10024cd0
 * callees: 0x100143f0, 0x100144e0, 0x1002f7f0, 0x1002fc50
 */

char __cdecl NxCookTriangleMesh(int a1, int a2)
{
  unsigned int v3; // ecx
  int v4; // esi
  float *v6; // eax
  float *v7; // esi

  if ( !dword_1005B464 )
    return 0;
  v3 = *(_DWORD *)a1;
  if ( *(_DWORD *)a1 < 3u )
    return 0;
  v4 = *(_DWORD *)(a1 + 20);
  if ( !v4 )
  {
    if ( v3 % 3 )
      return 0;
  }
  if ( *(_DWORD *)(a1 + 32) && *(_DWORD *)(a1 + 28) < 2u )
    return 0;
  if ( v3 > 0xFFFF && (*(_BYTE *)(a1 + 24) & 2) != 0 )
    return 0;
  if ( !*(_DWORD *)(a1 + 16) || *(_DWORD *)(a1 + 8) < 0xCu )
    return 0;
  if ( v4 )
  {
    if ( (*(_BYTE *)(a1 + 24) & 2) != 0 ? *(_DWORD *)(a1 + 12) < 6u : *(_DWORD *)(a1 + 12) < 0xCu )
      return 0;
  }
  v6 = (float *)(*(int (__thiscall **)(int, int, int))(*(_DWORD *)dword_100580A0 + 8))(dword_100580A0, 264, 49);
  v7 = v6;
  if ( !v6 )
    return 0;
  sub_100144E0(v6);
  *(_DWORD *)v7 = &TriangleMeshBuilder::`vftable';
  if ( !(unsigned __int8)sub_1002F7F0(v7, a1) )
  {
    sub_100143F0(v7);
    (*(void (__thiscall **)(int, float *))(*(_DWORD *)dword_100580A0 + 20))(dword_100580A0, v7);
    return 0;
  }
  sub_1002FC50(a2);
  sub_100143F0(v7);
  (*(void (__thiscall **)(int, float *))(*(_DWORD *)dword_100580A0 + 20))(dword_100580A0, v7);
  return 1;
}
