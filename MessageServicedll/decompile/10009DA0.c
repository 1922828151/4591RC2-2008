/*
 * func-name: sub_10009DA0
 * func-address: 0x10009da0
 * callers: 0x100029f0, 0x10007e30, 0x10008540, 0x10008860, 0x10008b40, 0x10008df0, 0x100090e0, 0x10009320, 0x10009550, 0x10009780, 0x1000f300, 0x10012410, 0x10015740, 0x10017b10, 0x10018670, 0x1001fd80, 0x10027260, 0x10027b80
 * callees: 0x1000a1e0, 0x1001df40
 */

unsigned int __userpurge sub_10009DA0@<eax>(int a1@<eax>, unsigned int a2, char a3, int a4)
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
        return sub_1001DF40(v11, a1, v10, a1, v8);
      }
    }
  }
  else
  {
    v7 = *(_DWORD *)(a1 + 8);
    if ( v5 > v7 )
      invalid_parameter_noinfo();
    return sub_1000A1E0(&a3, a1, v7);
  }
  return result;
}
