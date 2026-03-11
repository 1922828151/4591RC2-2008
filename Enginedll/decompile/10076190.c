/*
 * func-name: sub_10076190
 * func-address: 0x10076190
 * callers: 0x100762e0
 * callees: 0x10076040
 */

_DWORD *__thiscall sub_10076190(int *this)
{
  unsigned int v2; // edi
  unsigned int v3; // ebx
  int v5; // [esp+10h] [ebp-8h] BYREF

  v2 = this[2];
  if ( this[1] > v2 )
    invalid_parameter_noinfo();
  v3 = this[1];
  if ( v3 > this[2] )
    invalid_parameter_noinfo();
  return sub_10076040(this, &v5, (int)this, v3, (int)this, v2);
}
