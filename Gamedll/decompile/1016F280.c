/*
 * func-name: sub_1016F280
 * func-address: 0x1016f280
 * callers: 0x1001a0b4
 * callees: 0x1000a731, 0x1001154a, 0x10013fe8, 0x100183c7, 0x102c9d86
 */

int __thiscall sub_1016F280(_DWORD *this, unsigned int a2, int a3)
{
  int result; // eax
  int v5; // edi
  int v6[9]; // [esp+0h] [ebp-24h] BYREF

  v6[5] = (int)v6;
  v6[4] = (int)this;
  result = 0;
  this[1] = 0;
  this[2] = 0;
  this[3] = 0;
  if ( a2 )
  {
    if ( a2 > 0x1FFFFFFF )
      sub_100183C7(v6[0], v6[1]);
    v5 = sub_1001154A(a2);
    this[3] = v5 + 8 * a2;
    this[1] = v5;
    this[2] = v5;
    v6[8] = 0;
    result = sub_1000A731(v5, a2, a3);
    this[2] = v5 + 8 * a2;
  }
  return result;
}
