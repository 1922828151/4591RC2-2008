/*
 * func-name: sub_1001B2E0
 * func-address: 0x1001b2e0
 * callers: 0x10020500, 0x10026e50, 0x10138880, 0x10139890
 * callees: none
 */

void __thiscall sub_1001B2E0(_DWORD *this)
{
  int v2; // eax
  int **v3; // ecx
  int *j; // eax
  int i; // eax

  if ( !*this )
    invalid_parameter_noinfo();
  v2 = this[1];
  if ( *(_BYTE *)(v2 + 49) )
  {
    invalid_parameter_noinfo();
  }
  else
  {
    v3 = *(int ***)(v2 + 8);
    if ( *((_BYTE *)v3 + 49) )
    {
      for ( i = *(_DWORD *)(v2 + 4); !*(_BYTE *)(i + 49); i = *(_DWORD *)(i + 4) )
      {
        if ( this[1] != *(_DWORD *)(i + 8) )
          break;
        this[1] = i;
      }
      this[1] = i;
    }
    else
    {
      for ( j = *v3; !*((_BYTE *)j + 49); j = (int *)*j )
        v3 = (int **)j;
      this[1] = v3;
    }
  }
}
