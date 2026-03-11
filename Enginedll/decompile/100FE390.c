/*
 * func-name: sub_100FE390
 * func-address: 0x100fe390
 * callers: 0x100fd750, 0x100ff960, 0x10100380, 0x101004c0
 * callees: none
 */

void __thiscall sub_100FE390(_DWORD *this)
{
  int v2; // eax
  int **v3; // ecx
  int *j; // eax
  int i; // eax

  if ( !*this )
    invalid_parameter_noinfo();
  v2 = this[1];
  if ( *(_BYTE *)(v2 + 41) )
  {
    invalid_parameter_noinfo();
  }
  else
  {
    v3 = *(int ***)(v2 + 8);
    if ( *((_BYTE *)v3 + 41) )
    {
      for ( i = *(_DWORD *)(v2 + 4); !*(_BYTE *)(i + 41); i = *(_DWORD *)(i + 4) )
      {
        if ( this[1] != *(_DWORD *)(i + 8) )
          break;
        this[1] = i;
      }
      this[1] = i;
    }
    else
    {
      for ( j = *v3; !*((_BYTE *)j + 41); j = (int *)*j )
        v3 = (int **)j;
      this[1] = v3;
    }
  }
}
