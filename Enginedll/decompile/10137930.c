/*
 * func-name: ?EnumerateMeshes@World@@QAEXAAV?$vector@PAUModelFrame@@V?$allocator@PAUModelFrame@@@std@@@std@@@Z
 * func-address: 0x10137930
 * callers: none
 * callees: 0x1009ee50
 */

void __thiscall World::EnumerateMeshes(_DWORD *this, int a2)
{
  unsigned int i; // edi
  int v4; // ecx
  int v5; // eax
  int v6; // edx

  for ( i = 0; ; ++i )
  {
    v4 = this[806];
    if ( !v4 || i >= (this[807] - v4) >> 2 )
      break;
    v5 = this[806];
    if ( *(_DWORD *)(*(_DWORD *)(v5 + 4 * i) + 716) )
    {
      if ( !v5 || i >= (this[807] - v5) >> 2 )
        invalid_parameter_noinfo();
      v6 = this[806];
      if ( *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(v6 + 4 * i) + 716) + 308) )
      {
        if ( !v6 || i >= (this[807] - v6) >> 2 )
          invalid_parameter_noinfo();
        ModelFrame::EnumerateMeshes(*(_DWORD **)(*(_DWORD *)(*(_DWORD *)(this[806] + 4 * i) + 716) + 308), a2);
      }
    }
  }
}
