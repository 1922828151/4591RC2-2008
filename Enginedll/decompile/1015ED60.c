/*
 * func-name: ?FindTerrain@Terrain@@SAPAV1@HH@Z
 * func-address: 0x1015ed60
 * callers: 0x10167c60
 * callees: none
 */

struct Terrain *__cdecl Terrain::FindTerrain(int a1, int a2)
{
  int v2; // edx
  _DWORD *v3; // ecx
  unsigned int i; // esi

  v2 = dword_11242A38;
  v3 = dword_11242A34;
  for ( i = 0; ; ++i )
  {
    if ( !v3 || i >= (v2 - (int)v3) >> 2 )
      return 0;
    if ( *(_DWORD *)(v3[i] + 1304) == a1 )
    {
      if ( i >= (v2 - (int)v3) >> 2 )
      {
        invalid_parameter_noinfo();
        v2 = dword_11242A38;
        v3 = dword_11242A34;
      }
      if ( *(_DWORD *)(v3[i] + 1308) == a2 )
        break;
    }
  }
  if ( !v3 || i >= (v2 - (int)v3) >> 2 )
  {
    invalid_parameter_noinfo();
    v3 = dword_11242A34;
  }
  return (struct Terrain *)v3[i];
}
