/*
 * func-name: sub_100CE350
 * func-address: 0x100ce350
 * callers: 0x1006d220, 0x1006dc40, 0x100cf040, 0x100cf3b0, 0x100d0080, 0x100d01d0, 0x10149930, 0x101499c0, 0x10149a60, 0x10149c20, 0x1014a4c0, 0x1014ecb0
 * callees: none
 */

void __thiscall sub_100CE350(_DWORD *this)
{
  int v2; // eax
  int **v3; // ecx
  int *j; // eax
  int i; // eax

  if ( !*this )
    invalid_parameter_noinfo();
  v2 = this[1];
  if ( *(_BYTE *)(v2 + 21) )
  {
    invalid_parameter_noinfo();
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
