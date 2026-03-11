/*
 * func-name: sub_100A67E0
 * func-address: 0x100a67e0
 * callers: 0x10019038
 * callees: 0x1000613b
 */

int __thiscall sub_100A67E0(_DWORD *this)
{
  unsigned int v2; // edi
  unsigned int v3; // ebx
  _BYTE v5[8]; // [esp+10h] [ebp-8h] BYREF

  v2 = this[2];
  if ( this[1] > v2 )
    _invalid_parameter_noinfo();
  v3 = this[1];
  if ( v3 > this[2] )
    _invalid_parameter_noinfo();
  return sub_1000613B((int)v5, (int)this, v3, (int)this, v2);
}
