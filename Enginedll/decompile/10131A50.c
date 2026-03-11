/*
 * func-name: sub_10131A50
 * func-address: 0x10131a50
 * callers: 0x1000d200, 0x1000eaf0, 0x100d9350, 0x101321b0, 0x101324c0, 0x1016cee0, 0x1016d2b0
 * callees: none
 */

void __thiscall sub_10131A50(_DWORD *this)
{
  int *v2; // eax
  int v3; // eax
  int v4; // ecx
  int j; // eax
  int i; // eax

  if ( !*this )
    invalid_parameter_noinfo();
  v2 = (int *)this[1];
  if ( *((_BYTE *)v2 + 45) )
  {
    v3 = v2[2];
    this[1] = v3;
    if ( !*(_BYTE *)(v3 + 45) )
      return;
    goto LABEL_5;
  }
  v4 = *v2;
  if ( *(_BYTE *)(*v2 + 45) )
  {
    for ( i = v2[1]; !*(_BYTE *)(i + 45); i = *(_DWORD *)(i + 4) )
    {
      if ( this[1] != *(_DWORD *)i )
        break;
      this[1] = i;
    }
    if ( *(_BYTE *)(this[1] + 45) )
    {
LABEL_5:
      invalid_parameter_noinfo();
      return;
    }
    this[1] = i;
  }
  else
  {
    for ( j = *(_DWORD *)(v4 + 8); !*(_BYTE *)(j + 45); j = *(_DWORD *)(j + 8) )
      v4 = j;
    this[1] = v4;
  }
}
