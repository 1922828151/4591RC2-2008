/*
 * func-name: sub_101C41A0
 * func-address: 0x101c41a0
 * callers: 0x1000854e
 * callees: 0x10010145
 */

int __thiscall sub_101C41A0(_DWORD *this)
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
  return sub_10010145((int)v5, (int)this, v3, (int)this, v2);
}
