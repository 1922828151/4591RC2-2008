/*
 * func-name: sub_1000DBC0
 * func-address: 0x1000dbc0
 * callers: 0x1000cd90, 0x1000dc70
 * callees: 0x10008500, 0x100088f0
 */

unsigned int __userpurge sub_1000DBC0@<eax>(unsigned int a1@<eax>, int a2@<ecx>, int a3, unsigned int a4)
{
  unsigned int v5; // ecx
  unsigned int result; // eax
  _DWORD *v8; // esi
  int v9; // ecx
  int v10; // eax
  char *v11; // ebp
  unsigned int v12; // esi
  char *v13; // esi

  v5 = *(_DWORD *)(a2 + 4);
  if ( v5 )
    result = (int)(*(_DWORD *)(a2 + 8) - v5) >> 3;
  else
    result = 0;
  if ( result >= a1 )
  {
    if ( v5 )
    {
      v11 = *(char **)(a2 + 8);
      result = (int)&v11[-v5] >> 3;
      if ( a1 < result )
      {
        if ( v5 > (unsigned int)v11 )
          invalid_parameter_noinfo();
        v12 = *(_DWORD *)(a2 + 4);
        if ( v12 > *(_DWORD *)(a2 + 8) )
          invalid_parameter_noinfo();
        a4 = v12;
        v13 = (char *)(v12 + 8 * a1);
        if ( (unsigned int)v13 > *(_DWORD *)(a2 + 8) || (unsigned int)v13 < *(_DWORD *)(a2 + 4) )
          invalid_parameter_noinfo();
        return (unsigned int)sub_100088F0(a2, &a3, a2, v13, a2, v11);
      }
    }
  }
  else
  {
    v8 = *(_DWORD **)(a2 + 8);
    if ( v5 > (unsigned int)v8 )
      invalid_parameter_noinfo();
    v9 = *(_DWORD *)(a2 + 4);
    if ( v9 )
      v10 = (*(_DWORD *)(a2 + 8) - v9) >> 3;
    else
      v10 = 0;
    return (unsigned int)sub_10008500(a2, a1 - v10, &a3, a2, v8);
  }
  return result;
}
