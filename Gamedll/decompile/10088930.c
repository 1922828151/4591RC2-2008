/*
 * func-name: sub_10088930
 * func-address: 0x10088930
 * callers: 0x1000b0e1
 * callees: 0x10008981, 0x1000e2d7
 */

char __thiscall sub_10088930(_DWORD *this, unsigned int a2)
{
  int v4; // eax
  int v5; // [esp+0h] [ebp-8h]
  int v6; // [esp+4h] [ebp-4h]

  this[1] = 0;
  this[2] = 0;
  this[3] = 0;
  if ( !a2 )
    return 0;
  if ( a2 > 0xAAAAAAA )
    sub_1000E2D7(v5, v6);
  v4 = sub_10008981(a2);
  this[1] = v4;
  this[2] = v4;
  this[3] = v4 + 24 * a2;
  return 1;
}
