/*
 * func-name: sub_10015200
 * func-address: 0x10015200
 * callers: 0x10014eb0, 0x10024020, 0x10024980, 0x1002a530, 0x1002bd30, 0x10034e50, 0x10039b80, 0x1003d1f0, 0x100490f0, 0x100493d0, 0x10049b20, 0x10049d30, 0x1004d220
 * callees: 0x100152c0, 0x10015330
 */

unsigned int __userpurge sub_10015200@<eax>(int a1@<eax>, unsigned int a2, char a3, int a4)
{
  unsigned int v5; // ecx
  unsigned int result; // eax
  unsigned int v7; // edi
  unsigned int v8; // edi
  unsigned int v9; // esi
  unsigned int v10; // esi
  _BYTE v11[4]; // [esp+10h] [ebp-8h] BYREF
  unsigned int v12; // [esp+14h] [ebp-4h]

  v5 = *(_DWORD *)(a1 + 4);
  if ( v5 )
    result = (int)(*(_DWORD *)(a1 + 8) - v5) >> 3;
  else
    result = 0;
  if ( result >= a2 )
  {
    if ( v5 )
    {
      v8 = *(_DWORD *)(a1 + 8);
      result = (int)(v8 - v5) >> 3;
      if ( a2 < result )
      {
        if ( v5 > v8 )
          invalid_parameter_noinfo();
        v9 = *(_DWORD *)(a1 + 4);
        if ( v9 > *(_DWORD *)(a1 + 8) )
          invalid_parameter_noinfo();
        v12 = v9;
        v10 = v9 + 8 * a2;
        if ( v10 > *(_DWORD *)(a1 + 8) || v10 < *(_DWORD *)(a1 + 4) )
          invalid_parameter_noinfo();
        return sub_100152C0(v11, a1, v10, a1, v8);
      }
    }
  }
  else
  {
    v7 = *(_DWORD *)(a1 + 8);
    if ( v5 > v7 )
      invalid_parameter_noinfo();
    return sub_10015330(&a3, a1, v7);
  }
  return result;
}
