/*
 * func-name: sub_100A11E0
 * func-address: 0x100a11e0
 * callers: 0x10014952
 * callees: none
 */

void __thiscall sub_100A11E0(_DWORD *this)
{
  int v2; // eax
  int **v3; // ecx
  int *j; // eax
  int i; // eax

  if ( !*this )
    _invalid_parameter_noinfo();
  v2 = this[1];
  if ( *(_BYTE *)(v2 + 21) )
  {
    _invalid_parameter_noinfo();
  }
  else
  {
    v3 = *(int ***)(v2 + 8);
    if ( *((_BYTE *)v3 + 21) )
    {
      for ( i = *(_DWORD *)(v2 + 4); !*(_BYTE *)(i + 21); i = *(_DWORD *)(i + 4) )
      {
        if ( this[1] != *(_DWORD *)(i + 8) )
          break;
        this[1] = i;
      }
      this[1] = i;
    }
    else
    {
      for ( j = *v3; !*((_BYTE *)j + 21); j = (int *)*j )
        v3 = (int **)j;
      this[1] = v3;
    }
  }
}
