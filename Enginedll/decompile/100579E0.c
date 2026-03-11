/*
 * func-name: sub_100579E0
 * func-address: 0x100579e0
 * callers: 0x10055820, 0x1005bd90
 * callees: none
 */

int __thiscall sub_100579E0(_DWORD *this, int a2)
{
  unsigned int v3; // edi
  unsigned int v4; // eax
  unsigned int v5; // edi
  unsigned int v6; // ebx
  unsigned int v7; // eax

  v3 = this[3];
  if ( v3 > v3 + this[4] )
    invalid_parameter_noinfo();
  v4 = this[3];
  v5 = a2 + v3;
  if ( v5 > v4 + this[4] || v5 < v4 )
    invalid_parameter_noinfo();
  v6 = v5 >> 2;
  if ( v5 >= this[3] + this[4] )
    invalid_parameter_noinfo();
  v7 = this[2];
  if ( v7 <= v6 )
    v6 -= v7;
  return *(_DWORD *)(this[1] + 4 * v6) + 4 * (v5 & 3);
}
