/*
 * func-name: sub_10049C00
 * func-address: 0x10049c00
 * callers: 0x1001354d
 * callees: 0x1000a786, 0x10015253
 */

char __thiscall sub_10049C00(_DWORD *this, unsigned int a2)
{
  int v4; // eax
  int v5; // [esp+0h] [ebp-8h]
  int v6; // [esp+4h] [ebp-4h]

  this[1] = 0;
  this[2] = 0;
  this[3] = 0;
  if ( !a2 )
    return 0;
  if ( a2 > 0xCCCCCCC )
    sub_1000A786(v5, v6);
  v4 = sub_10015253(a2);
  this[1] = v4;
  this[2] = v4;
  this[3] = v4 + 20 * a2;
  return 1;
}
