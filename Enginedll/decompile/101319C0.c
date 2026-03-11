/*
 * func-name: sub_101319C0
 * func-address: 0x101319c0
 * callers: 0x101320b0, 0x101322b0
 * callees: none
 */

void __thiscall sub_101319C0(_DWORD *this)
{
  int *v2; // eax
  int v3; // eax
  int v4; // ecx
  int j; // eax
  int i; // eax

  if ( !*this )
    invalid_parameter_noinfo();
  v2 = (int *)this[1];
  if ( *((_BYTE *)v2 + 53) )
  {
    v3 = v2[2];
    this[1] = v3;
    if ( !*(_BYTE *)(v3 + 53) )
      return;
    goto LABEL_5;
  }
  v4 = *v2;
  if ( *(_BYTE *)(*v2 + 53) )
  {
    for ( i = v2[1]; !*(_BYTE *)(i + 53); i = *(_DWORD *)(i + 4) )
    {
      if ( this[1] != *(_DWORD *)i )
        break;
      this[1] = i;
    }
    if ( *(_BYTE *)(this[1] + 53) )
    {
LABEL_5:
      invalid_parameter_noinfo();
      return;
    }
    this[1] = i;
  }
  else
  {
    for ( j = *(_DWORD *)(v4 + 8); !*(_BYTE *)(j + 53); j = *(_DWORD *)(j + 8) )
      v4 = j;
    this[1] = v4;
  }
}
