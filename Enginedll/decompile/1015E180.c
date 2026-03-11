/*
 * func-name: ?FindMatBlock@Terrain@@QAEPAVMatBlock@@PAVMaterial@@@Z
 * func-address: 0x1015e180
 * callers: none
 * callees: none
 */

struct MatBlock *__thiscall Terrain::FindMatBlock(Terrain *this, struct Material *a2)
{
  unsigned int v2; // edi
  int i; // ebx
  int v5; // eax
  int v6; // eax
  int v7; // eax

  v2 = 0;
  for ( i = 0; ; i += 52 )
  {
    v5 = *((_DWORD *)this + 307);
    if ( !v5 || v2 >= (*((_DWORD *)this + 308) - v5) / 52 )
      return 0;
    v6 = *((_DWORD *)this + 307);
    if ( !v6 || v2 >= (*((_DWORD *)this + 308) - v6) / 52 )
      invalid_parameter_noinfo();
    v7 = *((_DWORD *)this + 307);
    if ( *(struct Material **)(v7 + i + 24) == a2 )
      break;
    ++v2;
  }
  if ( !v7 || v2 >= (*((_DWORD *)this + 308) - v7) / 52 )
    invalid_parameter_noinfo();
  return (struct MatBlock *)(*((_DWORD *)this + 307) + 52 * v2);
}
