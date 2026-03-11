/*
 * func-name: ?FindFormat@VertexManager@@UAEPAUVFormat@1@H@Z
 * func-address: 0x1001bb40
 * callers: none
 * callees: none
 */

struct VertexManager::VFormat *__thiscall VertexManager::FindFormat(VertexManager *this, int a2)
{
  unsigned int v2; // edi
  int i; // ebx
  int v5; // eax
  int v6; // eax
  int v7; // eax

  v2 = 0;
  for ( i = 0; ; i += 40 )
  {
    v5 = *((_DWORD *)this + 2);
    if ( !v5 || v2 >= (*((_DWORD *)this + 3) - v5) / 40 )
      return 0;
    v6 = *((_DWORD *)this + 2);
    if ( !v6 || v2 >= (*((_DWORD *)this + 3) - v6) / 40 )
      invalid_parameter_noinfo();
    v7 = *((_DWORD *)this + 2);
    if ( *(_DWORD *)(v7 + i + 36) == a2 )
      break;
    ++v2;
  }
  if ( !v7 || v2 >= (*((_DWORD *)this + 3) - v7) / 40 )
    invalid_parameter_noinfo();
  return (struct VertexManager::VFormat *)(*((_DWORD *)this + 2) + 40 * v2);
}
