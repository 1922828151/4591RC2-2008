/*
 * func-name: sub_100E0940
 * func-address: 0x100e0940
 * callers: 0x1001801b
 * callees: none
 */

void __thiscall sub_100E0940(_DWORD *this)
{
  int v2; // eax
  int **v3; // ecx
  int *j; // eax
  int i; // eax

  if ( !*this )
    _invalid_parameter_noinfo();
  v2 = this[1];
  if ( *(_BYTE *)(v2 + 33) )
  {
    _invalid_parameter_noinfo();
  }
  else
  {
    v3 = *(int ***)(v2 + 8);
    if ( *((_BYTE *)v3 + 33) )
    {
      for ( i = *(_DWORD *)(v2 + 4); !*(_BYTE *)(i + 33); i = *(_DWORD *)(i + 4) )
      {
        if ( this[1] != *(_DWORD *)(i + 8) )
          break;
        this[1] = i;
      }
      this[1] = i;
    }
    else
    {
      for ( j = *v3; !*((_BYTE *)j + 33); j = (int *)*j )
        v3 = (int **)j;
      this[1] = v3;
    }
  }
}
