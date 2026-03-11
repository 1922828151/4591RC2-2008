/*
 * func-name: sub_1006F040
 * func-address: 0x1006f040
 * callers: 0x10026a30, 0x1006f440
 * callees: 0x101100e0
 */

int __thiscall sub_1006F040(_DWORD *this)
{
  unsigned int v2; // edi
  unsigned int v3; // ebx
  _BYTE v5[8]; // [esp+10h] [ebp-8h] BYREF

  v2 = this[2];
  if ( this[1] > v2 )
    invalid_parameter_noinfo();
  v3 = this[1];
  if ( v3 > this[2] )
    invalid_parameter_noinfo();
  return sub_101100E0(v5, this, v3, this, v2);
}
