/*
 * func-name: sub_1006A5F0
 * func-address: 0x1006a5f0
 * callers: 0x1000d288
 * callees: none
 */

void __thiscall sub_1006A5F0(_DWORD *this)
{
  int v2; // eax
  int **v3; // ecx
  int *j; // eax
  int i; // eax

  if ( !*this )
    _invalid_parameter_noinfo();
  v2 = this[1];
  if ( *(_BYTE *)(v2 + 17) )
  {
    _invalid_parameter_noinfo();
  }
  else
  {
    v3 = *(int ***)(v2 + 8);
    if ( *((_BYTE *)v3 + 17) )
    {
      for ( i = *(_DWORD *)(v2 + 4); !*(_BYTE *)(i + 17); i = *(_DWORD *)(i + 4) )
      {
        if ( this[1] != *(_DWORD *)(i + 8) )
          break;
        this[1] = i;
      }
      this[1] = i;
    }
    else
    {
      for ( j = *v3; !*((_BYTE *)j + 17); j = (int *)*j )
        v3 = (int **)j;
      this[1] = v3;
    }
  }
}
