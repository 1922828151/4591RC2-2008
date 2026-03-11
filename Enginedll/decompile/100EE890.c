/*
 * func-name: ?FindModelFromCache@StaticModel@@SAPAV1@PBD@Z
 * func-address: 0x100ee890
 * callers: 0x100ef9b0, 0x100f5330, 0x10171950, 0x10174d80
 * callees: none
 */

struct StaticModel *__cdecl StaticModel::FindModelFromCache(const char *a1)
{
  int v1; // ecx
  _DWORD *v2; // eax
  unsigned int i; // esi
  bool v4; // zf

  v1 = dword_11240DA8;
  v2 = dword_11240DA4;
  for ( i = 0; ; ++i )
  {
    if ( !v2 || i >= (v1 - (int)v2) >> 2 )
      return 0;
    v4 = std::string::compare(v2[i] + 348, a1) == 0;
    v2 = dword_11240DA4;
    if ( !v4 )
    {
      v1 = dword_11240DA8;
      continue;
    }
    if ( !dword_11240DA4 || (v1 = dword_11240DA8, i >= (dword_11240DA8 - (int)dword_11240DA4) >> 2) )
    {
      invalid_parameter_noinfo();
      v1 = dword_11240DA8;
      v2 = dword_11240DA4;
    }
    if ( *(_DWORD *)(v2[i] + 308) )
      break;
  }
  if ( !v2 || i >= (v1 - (int)v2) >> 2 )
  {
    invalid_parameter_noinfo();
    v2 = dword_11240DA4;
  }
  return (struct StaticModel *)v2[i];
}
