/*
 * func-name: sub_1029A760
 * func-address: 0x1029a760
 * callers: 0x10006c9e
 * callees: 0x1000c996
 */

int __thiscall sub_1029A760(_DWORD *this)
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
  return sub_1000C996((int)v5, (int)this, v3, (int)this, v2);
}
