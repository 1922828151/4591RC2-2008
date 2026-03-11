/*
 * func-name: sub_1014A2A0
 * func-address: 0x1014a2a0
 * callers: 0x1000851c
 * callees: 0x100022d9, 0x10016045
 */

char __thiscall sub_1014A2A0(_DWORD *this, unsigned int a2)
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
    sub_10016045(v5, v6);
  v4 = sub_100022D9(a2);
  this[1] = v4;
  this[2] = v4;
  this[3] = v4 + 4 * a2;
  return 1;
}
