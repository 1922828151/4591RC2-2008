/*
 * func-name: sub_1002CA50
 * func-address: 0x1002ca50
 * callers: 0x1002f310
 * callees: 0x10027320
 */

_DWORD *__thiscall sub_1002CA50(int *this)
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
  return sub_10027320(this, &v5, (int)this, v3, (int)this, v2);
}
