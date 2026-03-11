/*
 * func-name: sub_100A7320
 * func-address: 0x100a7320
 * callers: 0x10017ff8
 * callees: 0x10003fd0
 */

int __thiscall sub_100A7320(_DWORD *this)
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
  return sub_10003FD0((int)v5, (int)this, v3, (int)this, v2);
}
