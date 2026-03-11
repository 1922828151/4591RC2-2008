/*
 * func-name: sub_100CEFE0
 * func-address: 0x100cefe0
 * callers: 0x100c33b0
 * callees: none
 */

int __thiscall sub_100CEFE0(_DWORD *this)
{
  _DWORD *v1; // esi
  unsigned int v2; // edi
  unsigned int v3; // edi
  unsigned int v4; // ebx
  unsigned int v5; // eax

  v1 = (_DWORD *)this[2];
  v2 = this[3];
  if ( !v1 )
    invalid_parameter_noinfo();
  if ( v2 <= v1[3] )
    invalid_parameter_noinfo();
  v3 = v2 - 1;
  v4 = v3 >> 2;
  if ( v3 >= v1[3] + v1[4] )
    invalid_parameter_noinfo();
  v5 = v1[2];
  if ( v5 <= v4 )
    v4 -= v5;
  return *(_DWORD *)(v1[1] + 4 * v4) + 4 * (v3 & 3);
}
