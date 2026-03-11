/*
 * func-name: sub_1006C660
 * func-address: 0x1006c660
 * callers: 0x100c33b0
 * callees: none
 */

int __thiscall sub_1006C660(_DWORD *this)
{
  unsigned int v2; // esi
  int v3; // ebx
  int v4; // edi
  unsigned int v5; // eax

  v2 = this[2] >> 2;
  v3 = this[2] & 3;
  if ( !this[1] )
    invalid_parameter_noinfo();
  if ( this[2] >= (unsigned int)(*(_DWORD *)(this[1] + 12) + *(_DWORD *)(this[1] + 16)) )
    invalid_parameter_noinfo();
  v4 = this[1];
  v5 = *(_DWORD *)(v4 + 8);
  if ( v5 <= v2 )
    v2 -= v5;
  return *(_DWORD *)(*(_DWORD *)(v4 + 4) + 4 * v2) + 4 * v3;
}
