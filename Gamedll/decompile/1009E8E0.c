/*
 * func-name: sub_1009E8E0
 * func-address: 0x1009e8e0
 * callers: 0x100139d5
 * callees: 0x1000240f
 */

int __thiscall sub_1009E8E0(_DWORD *this)
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
  return sub_1000240F((int)v5, (int)this, v3, (int)this, v2);
}
