/*
 * func-name: sub_1006C380
 * func-address: 0x1006c380
 * callers: 0x1006e140, 0x1006f820
 * callees: none
 */

void __thiscall sub_1006C380(_DWORD *this)
{
  int v2; // eax
  int **v3; // ecx
  int *j; // eax
  int i; // eax

  if ( !*this )
    invalid_parameter_noinfo();
  v2 = this[1];
  if ( *(_BYTE *)(v2 + 81) )
  {
    invalid_parameter_noinfo();
  }
  else
  {
    v3 = *(int ***)(v2 + 8);
    if ( *((_BYTE *)v3 + 81) )
    {
      for ( i = *(_DWORD *)(v2 + 4); !*(_BYTE *)(i + 81); i = *(_DWORD *)(i + 4) )
      {
        if ( this[1] != *(_DWORD *)(i + 8) )
          break;
        this[1] = i;
      }
      this[1] = i;
    }
    else
    {
      for ( j = *v3; !*((_BYTE *)j + 81); j = (int *)*j )
        v3 = (int **)j;
      this[1] = v3;
    }
  }
}
