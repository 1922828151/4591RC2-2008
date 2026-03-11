/*
 * func-name: sub_100080D0
 * func-address: 0x100080d0
 * callers: 0x10006440, 0x10006b20, 0x100079c0, 0x10007e60
 * callees: 0x10008500, 0x100088f0
 */

unsigned int __userpurge sub_100080D0@<eax>(unsigned int a1@<eax>, int a2@<ecx>, char a3, int a4)
{
  unsigned int v5; // ecx
  unsigned int result; // eax
  unsigned int v8; // esi
  int v9; // ecx
  int v10; // eax
  unsigned int v11; // esi
  unsigned int v12; // esi
  int v13; // [esp+Ch] [ebp-Ch]
  _BYTE v14[4]; // [esp+10h] [ebp-8h] BYREF
  unsigned int v15; // [esp+14h] [ebp-4h]

  v5 = *(_DWORD *)(a2 + 4);
  if ( v5 )
    result = (int)(*(_DWORD *)(a2 + 8) - v5) >> 3;
  else
    result = 0;
  if ( result >= a1 )
  {
    if ( v5 )
    {
      result = (int)(*(_DWORD *)(a2 + 8) - v5) >> 3;
      v13 = *(_DWORD *)(a2 + 8);
      if ( a1 < result )
      {
        if ( v5 > *(_DWORD *)(a2 + 8) )
          invalid_parameter_noinfo();
        v11 = *(_DWORD *)(a2 + 4);
        if ( v11 > *(_DWORD *)(a2 + 8) )
          invalid_parameter_noinfo();
        v15 = v11;
        v12 = v11 + 8 * a1;
        if ( v12 > *(_DWORD *)(a2 + 8) || v12 < *(_DWORD *)(a2 + 4) )
          invalid_parameter_noinfo();
        return sub_100088F0(v14, a2, v12, a2, v13);
      }
    }
  }
  else
  {
    v8 = *(_DWORD *)(a2 + 8);
    if ( v5 > v8 )
      invalid_parameter_noinfo();
    v9 = *(_DWORD *)(a2 + 4);
    if ( v9 )
      v10 = (*(_DWORD *)(a2 + 8) - v9) >> 3;
    else
      v10 = 0;
    return sub_10008500(a1 - v10, &a3, a2, v8);
  }
  return result;
}
