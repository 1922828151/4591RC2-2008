/*
 * func-name: ?SetMaterials@ModelFrame@@QAEXAAV?$vector@PAVMaterial@@V?$allocator@PAVMaterial@@@std@@@std@@AAH@Z
 * func-address: 0x1009e270
 * callers: 0x1009e270
 * callees: 0x1009e270
 */

void __thiscall ModelFrame::SetMaterials(_DWORD *this, int a2, unsigned int *a3)
{
  int v4; // ecx
  unsigned int i; // ebp
  int v6; // ecx
  int v7; // eax
  int v8; // ecx
  int v9; // ecx
  unsigned int v10; // esi
  _DWORD *v11; // ebx
  int v12; // eax
  int v13; // esi
  int v14; // ecx

  do
  {
    v4 = this[1];
    if ( v4 && (this[2] - v4) >> 2 && *(_DWORD *)this[1] )
    {
      for ( i = 0; ; ++i )
      {
        v6 = this[1];
        if ( v6 && (this[2] - v6) >> 2 )
          v7 = *(_DWORD *)this[1];
        else
          v7 = 0;
        v8 = *(_DWORD *)(v7 + 2464);
        if ( !v8 || i >= (*(_DWORD *)(v7 + 2468) - v8) >> 2 )
          break;
        v9 = *(_DWORD *)(a2 + 4);
        v10 = *a3;
        if ( !v9 || v10 >= (*(_DWORD *)(a2 + 8) - v9) >> 2 )
          invalid_parameter_noinfo();
        v11 = (_DWORD *)(*(_DWORD *)(a2 + 4) + 4 * v10);
        v12 = this[1];
        if ( v12 && (this[2] - v12) >> 2 )
          v13 = *(_DWORD *)this[1];
        else
          v13 = 0;
        v14 = *(_DWORD *)(v13 + 2464);
        if ( !v14 || i >= (*(_DWORD *)(v13 + 2468) - v14) >> 2 )
          invalid_parameter_noinfo();
        *(_DWORD *)(*(_DWORD *)(v13 + 2464) + 4 * i) = *v11;
        ++*a3;
      }
    }
    if ( this[89] )
      ModelFrame::SetMaterials(a2, a3);
    this = (_DWORD *)this[90];
  }
  while ( this );
}
