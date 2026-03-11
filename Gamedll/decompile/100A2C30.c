/*
 * func-name: sub_100A2C30
 * func-address: 0x100a2c30
 * callers: 0x1000a056
 * callees: 0x100057f9, 0x10008837
 */

char __thiscall sub_100A2C30(_DWORD *this, unsigned int a2)
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
    sub_10008837(v5, v6);
  v4 = sub_100057F9(a2);
  this[1] = v4;
  this[2] = v4;
  this[3] = v4 + (a2 << 6);
  return 1;
}
