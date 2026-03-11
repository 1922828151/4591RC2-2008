/*
 * func-name: sub_10049FD0
 * func-address: 0x10049fd0
 * callers: 0x10006a96
 * callees: 0x1001393a, 0x1001a3f2
 */

char __thiscall sub_10049FD0(_DWORD *this, unsigned int a2)
{
  int v4; // eax
  int v5; // [esp+0h] [ebp-8h]
  int v6; // [esp+4h] [ebp-4h]

  this[1] = 0;
  this[2] = 0;
  this[3] = 0;
  if ( !a2 )
    return 0;
  if ( a2 > 0x6666666 )
    sub_1001A3F2(v5, v6);
  v4 = sub_1001393A(a2);
  this[1] = v4;
  this[2] = v4;
  this[3] = v4 + 40 * a2;
  return 1;
}
