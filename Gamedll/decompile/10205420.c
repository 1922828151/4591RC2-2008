/*
 * func-name: sub_10205420
 * func-address: 0x10205420
 * callers: 0x1000a803
 * callees: 0x1000d8aa, 0x1000f312
 */

char __thiscall sub_10205420(_DWORD *this, unsigned int a2)
{
  int v4; // eax
  int v5; // [esp+0h] [ebp-8h]
  int v6; // [esp+4h] [ebp-4h]

  this[1] = 0;
  this[2] = 0;
  this[3] = 0;
  if ( !a2 )
    return 0;
  if ( a2 > 0x1FFFFFF )
    sub_1000F312(v5, v6);
  v4 = sub_1000D8AA(a2);
  this[1] = v4;
  this[2] = v4;
  this[3] = v4 + (a2 << 7);
  return 1;
}
