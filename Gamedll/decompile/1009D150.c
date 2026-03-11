/*
 * func-name: sub_1009D150
 * func-address: 0x1009d150
 * callers: 0x1001756c
 * callees: 0x10001cf8, 0x1000962e
 */

char __thiscall sub_1009D150(_DWORD *this, unsigned int a2)
{
  int v4; // eax
  int v5; // [esp+0h] [ebp-8h]
  int v6; // [esp+4h] [ebp-4h]

  this[1] = 0;
  this[2] = 0;
  this[3] = 0;
  if ( !a2 )
    return 0;
  if ( a2 > 0x3FFFFFF )
    sub_1000962E(v5, v6);
  v4 = sub_10001CF8(a2);
  this[1] = v4;
  this[2] = v4;
  this[3] = v4 + (a2 << 6);
  return 1;
}
