/*
 * func-name: sub_10023A40
 * func-address: 0x10023a40
 * callers: 0x10025c40
 * callees: 0x100204a0
 */

_DWORD *__thiscall sub_10023A40(_DWORD *this)
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
  return sub_100204A0(this, &v5, (int)this, v3, (int)this, v2);
}
