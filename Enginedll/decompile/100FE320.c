/*
 * func-name: sub_100FE320
 * func-address: 0x100fe320
 * callers: 0x100fb800, 0x100fc250, 0x100fccd0, 0x100fe930, 0x100fee10
 * callees: none
 */

void __thiscall sub_100FE320(_DWORD *this)
{
  int v2; // eax
  int **v3; // ecx
  int *j; // eax
  int i; // eax

  if ( !*this )
    invalid_parameter_noinfo();
  v2 = this[1];
  if ( *(_BYTE *)(v2 + 17) )
  {
    invalid_parameter_noinfo();
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
