/*
 * func-name: sub_1005F000
 * func-address: 0x1005f000
 * callers: 0x100126f2
 * callees: 0x10019ace
 */

int __thiscall sub_1005F000(_DWORD *this)
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
  return sub_10019ACE((int)v5, (int)this, v3, (int)this, v2);
}
