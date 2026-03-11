/*
 * func-name: sub_10187550
 * func-address: 0x10187550
 * callers: 0x100167ed
 * callees: 0x100049c6, 0x1000d904
 */

char __thiscall sub_10187550(_DWORD *this, unsigned int a2)
{
  int v4; // eax
  int v5; // [esp+0h] [ebp-8h]
  int v6; // [esp+4h] [ebp-4h]

  this[1] = 0;
  this[2] = 0;
  this[3] = 0;
  if ( !a2 )
    return 0;
  if ( a2 > 0x3FFFFFFF )
    sub_100049C6(v5, v6);
  v4 = sub_1000D904(a2);
  this[1] = v4;
  this[2] = v4;
  this[3] = v4 + 4 * a2;
  return 1;
}
