/*
 * func-name: sub_10013650
 * func-address: 0x10013650
 * callers: 0x10013840
 * callees: 0x100131e0
 */

char __cdecl sub_10013650(unsigned int a1, unsigned int a2, int a3, int a4, char a5)
{
  unsigned __int16 v5; // ax
  unsigned int j; // esi
  unsigned int i; // esi
  unsigned __int16 v9; // [esp+14h] [ebp+4h]

  LOBYTE(v5) = a1;
  if ( a1 > 0xFF )
  {
    if ( a1 > 0xFFFF )
    {
      LOBYTE(v5) = sub_100131E0(a3, a2, a5, a4);
    }
    else
    {
      for ( i = 0; i < a2; ++i )
      {
        v5 = (*(int (__thiscall **)(int))(*(_DWORD *)a4 + 8))(a4);
        if ( a5 )
        {
          LOBYTE(v9) = HIBYTE(v5);
          HIBYTE(v9) = v5;
          v5 = v9;
        }
        *(_DWORD *)(a3 + 4 * i) = v5;
      }
    }
  }
  else
  {
    for ( j = 0; j < a2; ++j )
    {
      LOBYTE(v5) = (*(int (__thiscall **)(int))(*(_DWORD *)a4 + 4))(a4);
      *(_DWORD *)(a3 + 4 * j) = (unsigned __int8)v5;
    }
  }
  return v5;
}
