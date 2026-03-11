/*
 * func-name: sub_10053B40
 * func-address: 0x10053b40
 * callers: 0x100108fc
 * callees: none
 */

int __thiscall sub_10053B40(_DWORD *this)
{
  unsigned int v2; // eax
  unsigned int v3; // edi
  unsigned int v4; // eax
  unsigned int v5; // edi
  unsigned int v6; // ebx
  unsigned int v7; // eax

  v2 = this[3];
  v3 = v2 + this[4];
  if ( v2 > v3 )
    _invalid_parameter_noinfo();
  v4 = this[3];
  v5 = v3 - 1;
  if ( v5 > v4 + this[4] || v5 < v4 )
    _invalid_parameter_noinfo();
  v6 = v5 >> 2;
  if ( v5 >= this[4] + this[3] )
    _invalid_parameter_noinfo();
  v7 = this[2];
  if ( v7 <= v6 )
    v6 -= v7;
  return *(_DWORD *)(this[1] + 4 * v6) + 4 * (v5 & 3);
}
