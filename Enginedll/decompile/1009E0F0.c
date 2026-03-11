/*
 * func-name: ?FindMat@ModelFrame@@QAEPAVMaterial@@AAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
 * func-address: 0x1009e0f0
 * callers: 0x1009e0f0, 0x100ee260
 * callees: 0x1009e0f0
 */

int __thiscall ModelFrame::FindMat(_DWORD *this, int a2)
{
  int v3; // ecx
  unsigned int i; // ebx
  int *v5; // ecx
  int v6; // eax
  int v7; // edx
  int v8; // esi
  int v9; // ecx
  int v10; // ecx
  int v11; // esi
  int v12; // ecx
  int result; // eax

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
      if ( (unsigned __int8)std::operator==<char>(*(_DWORD *)(*(_DWORD *)(v8 + 2464) + 4 * i) + 184, a2) )
      {
        v10 = this[1];
        if ( v10 && (this[2] - v10) >> 2 )
          v11 = *(_DWORD *)this[1];
        else
          v11 = 0;
        v12 = *(_DWORD *)(v11 + 2464);
        if ( !v12 || i >= (*(_DWORD *)(v11 + 2468) - v12) >> 2 )
          invalid_parameter_noinfo();
        return *(_DWORD *)(*(_DWORD *)(v11 + 2464) + 4 * i);
      }
    }
  }
  if ( !this[89] || (result = ModelFrame::FindMat(a2)) == 0 )
  {
    if ( !this[90] )
      return 0;
    result = ModelFrame::FindMat(a2);
    if ( !result )
      return 0;
  }
  return result;
}
