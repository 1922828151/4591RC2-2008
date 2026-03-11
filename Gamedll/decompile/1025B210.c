/*
 * func-name: sub_1025B210
 * func-address: 0x1025b210
 * callers: 0x100038af
 * callees: 0x10008a5d
 */

int __thiscall sub_1025B210(_DWORD *this)
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
  return sub_10008A5D((int)v5, (int)this, v3, (int)this, v2);
}
