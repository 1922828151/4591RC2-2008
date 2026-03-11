/*
 * func-name: ?CombineSelectedTerrain@Editor@@QAEXXZ
 * func-address: 0x10084cf0
 * callers: none
 * callees: 0x10090fd0, 0x10168040, 0x101a2500, 0x101a28ec
 */

void __thiscall Editor::CombineSelectedTerrain(Editor *this)
{
  unsigned int i; // edi
  int v3; // ecx
  int v4; // [esp+10h] [ebp-20h] BYREF
  int v5; // [esp+14h] [ebp-1Ch] BYREF
  void *v6; // [esp+18h] [ebp-18h]
  int v7; // [esp+1Ch] [ebp-14h]
  int v8; // [esp+20h] [ebp-10h]
  int v9; // [esp+2Ch] [ebp-4h]

  v6 = 0;
  v7 = 0;
  v8 = 0;
  v9 = 0;
  for ( i = 0; ; ++i )
  {
    v3 = *((_DWORD *)this + 562);
    if ( !v3 || i >= (*((_DWORD *)this + 563) - v3) >> 2 )
      break;
    v4 = _RTDynamicCast(
           *(_DWORD *)(*((_DWORD *)this + 562) + 4 * i),
           0,
           &Actor `RTTI Type Descriptor',
           &Terrain `RTTI Type Descriptor',
           0);
    if ( v4 )
      sub_10090FD0((int)&v5, (int)&v4);
  }
  Terrain::Combin(&v5);
  if ( v6 )
    operator delete(v6);
}
