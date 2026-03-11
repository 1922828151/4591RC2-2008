/*
 * func-name: sub_10052490
 * func-address: 0x10052490
 * callers: 0x100268d0, 0x10052860, 0x1006f570, 0x1008ce00, 0x100d1cc0
 * callees: 0x10052250
 */

_DWORD *__thiscall sub_10052490(_DWORD *this)
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
  return sub_10052250(this, &v5, (int)this, v3, (int)this, v2);
}
