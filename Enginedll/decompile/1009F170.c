/*
 * func-name: ?GetMaterials@ModelFrame@@QAEXAAV?$vector@PAVMaterial@@V?$allocator@PAVMaterial@@@std@@@std@@@Z
 * func-address: 0x1009f170
 * callers: 0x1009f170, 0x10166120
 * callees: 0x10012aa0, 0x1009f170
 */

void __thiscall ModelFrame::GetMaterials(_DWORD *this, _DWORD *a2)
{
  int v3; // ecx
  unsigned int i; // ebx
  int *v5; // ecx
  int v6; // eax
  int v7; // edx
  int v8; // esi
  int v9; // ecx

  do
  {
    v3 = this[1];
    if ( v3 && (this[2] - v3) >> 2 && *(_DWORD *)this[1] )
    {
      for ( i = 0; ; ++i )
      {
        v5 = (int *)this[1];
        if ( v5 && (this[2] - (int)v5) >> 2 )
        {
          v5 = (int *)this[1];
          v6 = *v5;
        }
        else
        {
          v6 = 0;
        }
        v7 = *(_DWORD *)(v6 + 2464);
        if ( !v7 || i >= (*(_DWORD *)(v6 + 2468) - v7) >> 2 )
          break;
        if ( v5 && (this[2] - (int)v5) >> 2 )
          v8 = *(_DWORD *)this[1];
        else
          v8 = 0;
        v9 = *(_DWORD *)(v8 + 2464);
        if ( !v9 || i >= (*(_DWORD *)(v8 + 2468) - v9) >> 2 )
          invalid_parameter_noinfo();
        std::vector<Material *>::push_back(a2, (int *)(*(_DWORD *)(v8 + 2464) + 4 * i));
      }
    }
    if ( this[89] )
      ModelFrame::GetMaterials(a2);
    this = (_DWORD *)this[90];
  }
  while ( this );
}
