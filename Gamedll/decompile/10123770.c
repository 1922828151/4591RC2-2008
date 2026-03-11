/*
 * func-name: sub_10123770
 * func-address: 0x10123770
 * callers: 0x1000b7c1
 * callees: 0x10007fa4, 0x10010ce9
 */

char __thiscall sub_10123770(_DWORD *this, unsigned int a2)
{
  int v4; // eax
  int v5; // [esp+0h] [ebp-8h]
  int v6; // [esp+4h] [ebp-4h]

  this[1] = 0;
  this[2] = 0;
  this[3] = 0;
  if ( !a2 )
    return 0;
  if ( a2 > 0xFFFFFFF )
    sub_10010CE9(v5, v6);
  v4 = sub_10007FA4(a2);
  this[1] = v4;
  this[2] = v4;
  this[3] = v4 + 16 * a2;
  return 1;
}
