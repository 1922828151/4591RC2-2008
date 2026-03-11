/*
 * func-name: sub_10123980
 * func-address: 0x10123980
 * callers: 0x10013f9d
 * callees: 0x10010d89, 0x1001a8a7
 */

char __thiscall sub_10123980(_DWORD *this, unsigned int a2)
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
    sub_1001A8A7(v5, v6);
  v4 = sub_10010D89(a2);
  this[1] = v4;
  this[2] = v4;
  this[3] = v4 + 4 * a2;
  return 1;
}
