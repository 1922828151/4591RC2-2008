/*
 * func-name: sub_10096790
 * func-address: 0x10096790
 * callers: 0x10013534
 * callees: 0x100124b8
 */

int __thiscall sub_10096790(_DWORD *this)
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
  return sub_100124B8((int)v5, (int)this, v3, (int)this, v2);
}
