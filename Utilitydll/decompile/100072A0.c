/*
 * func-name: sub_100072A0
 * func-address: 0x100072a0
 * callers: 0x10005e10, 0x100067f0, 0x10006fd0, 0x1000d580, 0x1000fd30, 0x10010540, 0x10012a10, 0x10013100, 0x100139b0, 0x10013c70
 * callees: 0x100078a0, 0x10007c50
 */

unsigned int __userpurge sub_100072A0@<eax>(int a1@<eax>, unsigned int a2, char a3, int a4)
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
        return sub_100078A0(v11, a1, v10, a1, v8);
      }
    }
  }
  else
  {
    v7 = *(_DWORD *)(a1 + 8);
    if ( v5 > v7 )
      invalid_parameter_noinfo();
    return sub_10007C50(&a3, a1, v7);
  }
  return result;
}
