/*
 * func-name: sub_10025FF0
 * func-address: 0x10025ff0
 * callers: 0x100276e0, 0x10028fa0
 * callees: none
 */

char *__thiscall sub_10025FF0(_DWORD *this, int a2, int a3)
{
  int v3; // ebp
  int v4; // esi
  _DWORD *i; // ebx
  int v6; // edi
  int v7; // edx

  v3 = a2;
  v4 = 2;
  for ( i = this; ; ++i )
  {
    v6 = (v4 - 1) % 3;
    v7 = v4 % 3;
    if ( *i == v3 )
    {
      if ( this[v6] == a3 )
        return (char *)&this[v7 + 3];
      v3 = a2;
    }
    if ( *i == a3 && this[v6] == v3 )
      break;
    if ( ++v4 - 2 >= 3 )
      return (char *)&unk_10056878;
  }
  return (char *)&this[v7 + 3];
}
