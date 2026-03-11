/*
 * func-name: sub_10022810
 * func-address: 0x10022810
 * callers: 0x10003220, 0x10007810, 0x10021d60
 * callees: 0x1001df40, 0x10022e00
 */

unsigned int __userpurge sub_10022810@<eax>(int a1@<eax>, unsigned int a2, int a3, unsigned int a4)
{
  unsigned int v5; // ecx
  unsigned int result; // eax
  unsigned int v7; // esi
  char *v8; // edi
  unsigned int v9; // esi
  char *v10; // esi

  v5 = *(_DWORD *)(a1 + 4);
  if ( v5 )
    result = (int)(*(_DWORD *)(a1 + 8) - v5) >> 3;
  else
    result = 0;
  if ( result >= a2 )
  {
    if ( v5 )
    {
      v8 = *(char **)(a1 + 8);
      result = (int)&v8[-v5] >> 3;
      if ( a2 < result )
      {
        if ( v5 > (unsigned int)v8 )
          invalid_parameter_noinfo();
        v9 = *(_DWORD *)(a1 + 4);
        if ( v9 > *(_DWORD *)(a1 + 8) )
          invalid_parameter_noinfo();
        a4 = v9;
        v10 = (char *)(v9 + 8 * a2);
        if ( (unsigned int)v10 > *(_DWORD *)(a1 + 8) || (unsigned int)v10 < *(_DWORD *)(a1 + 4) )
          invalid_parameter_noinfo();
        return (unsigned int)sub_1001DF40(a1, &a3, a1, v10, a1, v8);
      }
    }
  }
  else
  {
    v7 = *(_DWORD *)(a1 + 8);
    if ( v5 > v7 )
      invalid_parameter_noinfo();
    return sub_10022E00(&a3, a1, v7);
  }
  return result;
}
