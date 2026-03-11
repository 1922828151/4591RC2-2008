/*
 * func-name: sub_10078960
 * func-address: 0x10078960
 * callers: 0x1001906a
 * callees: 0x10012a35
 */

int __thiscall sub_10078960(_DWORD *this)
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
  return sub_10012A35((int)v5, (int)this, v3, (int)this, v2);
}
