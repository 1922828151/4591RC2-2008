/*
 * func-name: sub_10056FB0
 * func-address: 0x10056fb0
 * callers: 0x10057fa0, 0x10059e70, 0x1012d070, 0x1012d220, 0x101322b0
 * callees: none
 */

void __thiscall sub_10056FB0(_DWORD *this)
{
  int v2; // eax
  int **v3; // ecx
  int *j; // eax
  int i; // eax

  if ( !*this )
    invalid_parameter_noinfo();
  v2 = this[1];
  if ( *(_BYTE *)(v2 + 53) )
  {
    invalid_parameter_noinfo();
  }
  else
  {
    v3 = *(int ***)(v2 + 8);
    if ( *((_BYTE *)v3 + 53) )
    {
      for ( i = *(_DWORD *)(v2 + 4); !*(_BYTE *)(i + 53); i = *(_DWORD *)(i + 4) )
      {
        if ( this[1] != *(_DWORD *)(i + 8) )
          break;
        this[1] = i;
      }
      this[1] = i;
    }
    else
    {
      for ( j = *v3; !*((_BYTE *)j + 53); j = (int *)*j )
        v3 = (int **)j;
      this[1] = v3;
    }
  }
}
