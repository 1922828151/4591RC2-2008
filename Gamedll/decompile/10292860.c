/*
 * func-name: sub_10292860
 * func-address: 0x10292860
 * callers: 0x100164af
 * callees: none
 */

char __thiscall sub_10292860(_DWORD *this, int a2, char a3)
{
  unsigned int v3; // edi
  int i; // ebx
  unsigned int v6; // eax
  int v7; // eax
  int v8; // eax

  v3 = 0;
  for ( i = 0; ; i += 60 )
  {
    v6 = this[134];
    if ( !v6 )
      break;
    v6 = (int)(this[135] - v6) / 60;
    if ( v3 >= v6 )
      break;
    v7 = this[134];
    if ( !v7 || v3 >= (this[135] - v7) / 60 )
      _invalid_parameter_noinfo();
    v8 = this[134];
    if ( *(_DWORD *)(v8 + i + 32) == a2 )
    {
      if ( !v8 || v3 >= (this[135] - v8) / 60 )
        _invalid_parameter_noinfo();
      LOBYTE(v6) = a3;
      *(_BYTE *)(this[134] + 60 * v3 + 28) = a3;
      return v6;
    }
    ++v3;
  }
  return v6;
}
