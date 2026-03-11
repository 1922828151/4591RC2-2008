/*
 * func-name: ?EffectsActive@PostProcess@@QAE_NXZ
 * func-address: 0x10106520
 * callers: 0x10106720, 0x10106760
 * callees: none
 */

char __thiscall PostProcess::EffectsActive(PostProcess *this)
{
  unsigned int i; // edi
  int v3; // ecx
  int v4; // eax

  for ( i = 0; ; ++i )
  {
    v3 = *((_DWORD *)this + 17);
    if ( !v3 || i >= (*((_DWORD *)this + 18) - v3) >> 2 )
      break;
    v4 = *((_DWORD *)this + 17);
    if ( *(_BYTE *)(*(_DWORD *)(v4 + 4 * i) + 15) )
      return 1;
    if ( !v4 || i >= (*((_DWORD *)this + 18) - v4) >> 2 )
      invalid_parameter_noinfo();
    if ( *(_BYTE *)(*(_DWORD *)(*((_DWORD *)this + 17) + 4 * i) + 16) )
      return 1;
  }
  return 0;
}
