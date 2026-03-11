/*
 * func-name: sub_1001DC30
 * func-address: 0x1001dc30
 * callers: 0x1001c100, 0x1001c6d0, 0x1001ce80
 * callees: 0x1000a1e0, 0x1001df40
 */

unsigned int __userpurge sub_1001DC30@<eax>(int a1@<eax>, unsigned int a2, int a3, unsigned int a4)
{
  unsigned int v5; // ecx
  unsigned int result; // eax
  _DWORD *v7; // esi
  int v8; // ecx
  int v9; // eax
  unsigned int v10; // edi
  unsigned int v11; // esi
  unsigned int v12; // esi

  v5 = *(_DWORD *)(a1 + 4);
  if ( v5 )
    result = (int)(*(_DWORD *)(a1 + 8) - v5) >> 3;
  else
    result = 0;
  if ( result >= a2 )
  {
    if ( v5 )
    {
      v10 = *(_DWORD *)(a1 + 8);
      result = (int)(v10 - v5) >> 3;
      if ( a2 < result )
      {
        if ( v5 > v10 )
          invalid_parameter_noinfo();
        v11 = *(_DWORD *)(a1 + 4);
        if ( v11 > *(_DWORD *)(a1 + 8) )
          invalid_parameter_noinfo();
        a4 = v11;
        v12 = v11 + 8 * a2;
        if ( v12 > *(_DWORD *)(a1 + 8) || v12 < *(_DWORD *)(a1 + 4) )
          invalid_parameter_noinfo();
        return sub_1001DF40(&a3, a1, v12, a1, v10);
      }
    }
  }
  else
  {
    v7 = *(_DWORD **)(a1 + 8);
    if ( v5 > (unsigned int)v7 )
      invalid_parameter_noinfo();
    v8 = *(_DWORD *)(a1 + 4);
    if ( v8 )
      v9 = (*(_DWORD *)(a1 + 8) - v8) >> 3;
    else
      v9 = 0;
    return (unsigned int)sub_1000A1E0(a2 - v9, a1, &a3, a1, v7);
  }
  return result;
}
