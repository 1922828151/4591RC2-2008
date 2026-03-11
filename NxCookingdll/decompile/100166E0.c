/*
 * func-name: sub_100166E0
 * func-address: 0x100166e0
 * callers: 0x10022c20
 * callees: 0x10016250
 */

int __cdecl sub_100166E0(unsigned int a1, unsigned int a2, float *a3, int a4, char a5)
{
  int result; // eax
  unsigned int j; // esi
  unsigned int i; // esi
  unsigned __int16 v8; // ax
  int v9; // [esp+14h] [ebp+4h]

  result = a1;
  if ( a1 > 0xFF )
  {
    if ( a1 > 0xFFFF )
    {
      return sub_10016250(a3, a2, a5, a4);
    }
    else
    {
      for ( i = 0; i < a2; ++i )
      {
        v8 = LOWORD(a3[i]);
        v9 = v8;
        if ( a5 )
        {
          LOBYTE(v9) = HIBYTE(v8);
          BYTE1(v9) = v8;
        }
        result = (*(int (__thiscall **)(int, int))(*(_DWORD *)a4 + 32))(a4, v9);
      }
    }
  }
  else
  {
    for ( j = 0; j < a2; ++j )
      result = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)a4 + 28))(a4, LOBYTE(a3[j]));
  }
  return result;
}
