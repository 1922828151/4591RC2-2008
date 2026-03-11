/*
 * func-name: sub_101FB9F0
 * func-address: 0x101fb9f0
 * callers: 0x1000b064
 * callees: none
 */

void __thiscall sub_101FB9F0(_DWORD *this)
{
  int *v2; // eax
  int v3; // eax
  int v4; // ecx
  int j; // eax
  int i; // eax

  if ( !*this )
    _invalid_parameter_noinfo();
  v2 = (int *)this[1];
  if ( *((_BYTE *)v2 + 17) )
  {
    v3 = v2[2];
    this[1] = v3;
    if ( !*(_BYTE *)(v3 + 17) )
      return;
    goto LABEL_5;
  }
  v4 = *v2;
  if ( *(_BYTE *)(*v2 + 17) )
  {
    for ( i = v2[1]; !*(_BYTE *)(i + 17); i = *(_DWORD *)(i + 4) )
    {
      if ( this[1] != *(_DWORD *)i )
        break;
      this[1] = i;
    }
    if ( *(_BYTE *)(this[1] + 17) )
    {
LABEL_5:
      _invalid_parameter_noinfo();
      return;
    }
    this[1] = i;
  }
  else
  {
    for ( j = *(_DWORD *)(v4 + 8); !*(_BYTE *)(j + 17); j = *(_DWORD *)(j + 8) )
      v4 = j;
    this[1] = v4;
  }
}
