/*
 * func-name: sub_1005A370
 * func-address: 0x1005a370
 * callers: 0x10010870
 * callees: 0x10017c7e
 */

int __thiscall sub_1005A370(_DWORD *this)
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
  return sub_10017C7E((int)v5, (int)this, v3, (int)this, v2);
}
