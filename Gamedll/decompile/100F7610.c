/*
 * func-name: sub_100F7610
 * func-address: 0x100f7610
 * callers: 0x1000fd85
 * callees: 0x10007f6d, 0x10010f96
 */

char __thiscall sub_100F7610(_DWORD *this, unsigned int a2)
{
  int v4; // eax
  int v5; // [esp+0h] [ebp-8h]
  int v6; // [esp+4h] [ebp-4h]

  this[1] = 0;
  this[2] = 0;
  this[3] = 0;
  if ( !a2 )
    return 0;
  if ( a2 > 0x71C71C7 )
    sub_10007F6D(v5, v6);
  v4 = sub_10010F96(a2);
  this[1] = v4;
  this[2] = v4;
  this[3] = v4 + 36 * a2;
  return 1;
}
