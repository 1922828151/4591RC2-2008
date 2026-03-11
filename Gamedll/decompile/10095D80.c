/*
 * func-name: sub_10095D80
 * func-address: 0x10095d80
 * callers: 0x1000f9d4
 * callees: none
 */

int __cdecl sub_10095D80(_DWORD *a1, _DWORD *a2)
{
  _DWORD *i; // esi
  int result; // eax

  for ( i = a1; i != a2; i += 2 )
  {
    if ( *i )
    {
      result = (**(int (__thiscall ***)(_DWORD, int))*i)(*i, 1);
      *i = 0;
    }
  }
  return result;
}
