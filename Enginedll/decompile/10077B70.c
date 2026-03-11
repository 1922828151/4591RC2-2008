/*
 * func-name: sub_10077B70
 * func-address: 0x10077b70
 * callers: 0x10077be0, 0x1007d280, 0x10082810, 0x10085e90, 0x10086a00, 0x1009e6e0, 0x1015d190
 * callees: 0x10052250, 0x10078560
 */

_DWORD *__thiscall sub_10077B70(_DWORD *this)
{
  unsigned int v2; // edi
  unsigned int v3; // ebx
  unsigned int v4; // ebx
  unsigned int v5; // edi
  int v7; // [esp+10h] [ebp-8h] BYREF

  v2 = this[6];
  if ( this[5] > v2 )
    invalid_parameter_noinfo();
  v3 = this[5];
  if ( v3 > this[6] )
    invalid_parameter_noinfo();
  if ( v3 != v2 )
    this[6] = sub_10078560(v2, this[6], v3);
  v4 = this[2];
  if ( this[1] > v4 )
    invalid_parameter_noinfo();
  v5 = this[1];
  if ( v5 > this[2] )
    invalid_parameter_noinfo();
  return sub_10052250(this, &v7, (int)this, v5, (int)this, v4);
}
