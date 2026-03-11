/*
 * func-name: sub_1000B770
 * func-address: 0x1000b770
 * callers: 0x1000e0c0, 0x1000e1b0, 0x1000e2d0, 0x1000e3c0, 0x1000eaf0, 0x10011f00, 0x10011fe0, 0x10058270, 0x10059fc0, 0x1006dd10, 0x1006fab0, 0x1009a150, 0x1009ac30, 0x1012d100, 0x1012d160, 0x1012d1c0, 0x1012d2b0, 0x1012d310, 0x1012d370, 0x1012e2b0, 0x101324c0, 0x1016c190, 0x1016c4c0, 0x1016cfe0, 0x1016d2b0, 0x1016d580
 * callees: none
 */

void __thiscall sub_1000B770(_DWORD *this)
{
  int v2; // eax
  int **v3; // ecx
  int *j; // eax
  int i; // eax

  if ( !*this )
    invalid_parameter_noinfo();
  v2 = this[1];
  if ( *(_BYTE *)(v2 + 45) )
  {
    invalid_parameter_noinfo();
  }
  else
  {
    v3 = *(int ***)(v2 + 8);
    if ( *((_BYTE *)v3 + 45) )
    {
      for ( i = *(_DWORD *)(v2 + 4); !*(_BYTE *)(i + 45); i = *(_DWORD *)(i + 4) )
      {
        if ( this[1] != *(_DWORD *)(i + 8) )
          break;
        this[1] = i;
      }
      this[1] = i;
    }
    else
    {
      for ( j = *v3; !*((_BYTE *)j + 45); j = (int *)*j )
        v3 = (int **)j;
      this[1] = v3;
    }
  }
}
