/*
 * func-name: sub_1004A550
 * func-address: 0x1004a550
 * callers: 0x1000404d
 * callees: 0x10005c09, 0x1001562c
 */

char __thiscall sub_1004A550(_DWORD *this, unsigned int a2)
{
  int v4; // eax
  int v5; // [esp+0h] [ebp-8h]
  int v6; // [esp+4h] [ebp-4h]

  this[1] = 0;
  this[2] = 0;
  this[3] = 0;
  if ( !a2 )
    return 0;
  if ( a2 > 0x1BACF91 )
    sub_10005C09(v5, v6);
  v4 = sub_1001562C(a2);
  this[1] = v4;
  this[2] = v4;
  this[3] = v4 + 148 * a2;
  return 1;
}
