/*
 * func-name: sub_1002C2C0
 * func-address: 0x1002c2c0
 * callers: 0x1000cf45
 * callees: 0x10004dcc
 */

int __thiscall sub_1002C2C0(_DWORD *this)
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
  return sub_10004DCC((int)v5, (int)this, v3, (int)this, v2);
}
