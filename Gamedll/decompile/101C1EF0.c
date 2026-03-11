/*
 * func-name: sub_101C1EF0
 * func-address: 0x101c1ef0
 * callers: 0x10011450
 * callees: 0x10008ba7, 0x1000a5e2, 0x1000ebe2, 0x1001479a, 0x102c9d86
 */

int __thiscall sub_101C1EF0(_DWORD *this, unsigned int a2, int a3)
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
      sub_10008BA7(v6[0], v6[1]);
    v5 = sub_1000EBE2(a2);
    this[3] = v5 + 8 * a2;
    this[1] = v5;
    this[2] = v5;
    v6[8] = 0;
    result = sub_1000A5E2(v5, a2, a3);
    this[2] = v5 + 8 * a2;
  }
  return result;
}
