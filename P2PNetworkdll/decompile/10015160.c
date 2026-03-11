/*
 * func-name: sub_10015160
 * func-address: 0x10015160
 * callers: 0x100151c0
 * callees: none
 */

int __cdecl sub_10015160(_DWORD *a1)
{
  _BYTE *v1; // ecx
  int v2; // edx
  char v4; // al
  _BYTE *v5; // ecx
  char v6; // cl

  v2 = 0;
  if ( *v1 == 88 )
  {
    v2 = 1;
  }
  else if ( *v1 != 120 )
  {
    return 1;
  }
  v4 = v1[1];
  v5 = v1 + 1;
  if ( v4 == 77 )
  {
    v2 = 1;
  }
  else if ( v4 != 109 )
  {
    return 1;
  }
  v6 = v5[1];
  if ( v6 == 76 )
    return 0;
  if ( v6 == 108 )
  {
    if ( v2 )
      return 0;
    *a1 = 12;
  }
  return 1;
}
