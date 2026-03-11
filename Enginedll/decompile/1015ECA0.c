/*
 * func-name: ?FindNode@Terrain@@QAEPAVTerrainNode@@HH@Z
 * func-address: 0x1015eca0
 * callers: 0x10160210, 0x10160740, 0x10164f30, 0x10167810, 0x10169d00
 * callees: none
 */

struct TerrainNode *__thiscall Terrain::FindNode(Terrain *this, int a2, int a3)
{
  unsigned int i; // edi
  int v5; // ecx
  int v6; // eax
  int v7; // edx

  for ( i = 0; ; ++i )
  {
    v5 = *((_DWORD *)this + 299);
    if ( !v5 || i >= (*((_DWORD *)this + 300) - v5) >> 2 )
      return 0;
    v6 = *((_DWORD *)this + 299);
    if ( *(_DWORD *)(*(_DWORD *)(v6 + 4 * i) + 1172) == a2 )
    {
      if ( !v6 || i >= (*((_DWORD *)this + 300) - v6) >> 2 )
        invalid_parameter_noinfo();
      v7 = *((_DWORD *)this + 299);
      if ( *(_DWORD *)(*(_DWORD *)(v7 + 4 * i) + 1176) == a3 )
        break;
    }
  }
  if ( !v7 || i >= (*((_DWORD *)this + 300) - v7) >> 2 )
    invalid_parameter_noinfo();
  return *(struct TerrainNode **)(*((_DWORD *)this + 299) + 4 * i);
}
