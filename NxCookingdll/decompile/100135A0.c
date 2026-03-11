/*
 * func-name: sub_100135A0
 * func-address: 0x100135a0
 * callers: 0x1002fc50
 * callees: 0x10013370
 */

int __cdecl sub_100135A0(unsigned int a1, unsigned int a2, float *a3, int a4, char a5)
{
  int result; // eax
  unsigned int j; // esi
  unsigned int i; // esi
  int v8; // eax
  unsigned __int16 v9; // [esp+14h] [ebp+4h]

  result = a1;
  if ( a1 > 0xFF )
  {
    if ( a1 > 0xFFFF )
    {
      return sub_10013370(a3, a2, a5, a4);
    }
    else
    {
      for ( i = 0; i < a2; ++i )
      {
        v8 = LOWORD(a3[i]);
        if ( a5 )
        {
          LOBYTE(v9) = HIBYTE(LOWORD(a3[i]));
          HIBYTE(v9) = LOWORD(a3[i]);
          v8 = v9;
        }
        result = (*(int (__thiscall **)(int, int))(*(_DWORD *)a4 + 32))(a4, v8);
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
