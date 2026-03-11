/*
 * func-name: sub_10095830
 * func-address: 0x10095830
 * callers: 0x10008a8f
 * callees: 0x10005722, 0x100168bf
 */

char __thiscall sub_10095830(_DWORD *this, unsigned int a2)
{
  int v4; // eax
  int v5; // [esp+0h] [ebp-8h]
  int v6; // [esp+4h] [ebp-4h]

  this[1] = 0;
  this[2] = 0;
  this[3] = 0;
  if ( !a2 )
    return 0;
  if ( a2 > 0x1FFFFFFF )
    sub_100168BF(v5, v6);
  v4 = sub_10005722(a2);
  this[1] = v4;
  this[2] = v4;
  this[3] = v4 + 8 * a2;
  return 1;
}
