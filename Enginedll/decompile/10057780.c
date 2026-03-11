/*
 * func-name: sub_10057780
 * func-address: 0x10057780
 * callers: 0x1005a2a0, 0x1005a850, 0x10070240
 * callees: none
 */

int __thiscall sub_10057780(_DWORD *this, int a2)
{
  _DWORD *v2; // esi
  int v3; // edi
  unsigned int v4; // eax
  unsigned int v5; // edi
  unsigned int v6; // ebx
  unsigned int v7; // eax

  v2 = (_DWORD *)this[1];
  v3 = this[2];
  if ( !v2 )
    invalid_parameter_noinfo();
  v4 = v2[3];
  v5 = a2 + v3;
  if ( v5 > v4 + v2[4] || v5 < v4 )
    invalid_parameter_noinfo();
  v6 = v5 >> 2;
  if ( v5 >= v2[3] + v2[4] )
    invalid_parameter_noinfo();
  v7 = v2[2];
  if ( v7 <= v6 )
    v6 -= v7;
  return *(_DWORD *)(v2[1] + 4 * v6) + 4 * (v5 & 3);
}
