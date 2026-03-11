/*
 * func-name: sub_1016F520
 * func-address: 0x1016f520
 * callers: 0x1001a357
 * callees: 0x1000e147, 0x1001145a, 0x10013151, 0x100178a0, 0x102c9d86
 */

int __thiscall sub_1016F520(_DWORD *this, unsigned int a2, int a3)
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
      sub_1000E147(v6[0], v6[1]);
    v5 = sub_10013151(a2);
    this[3] = v5 + 8 * a2;
    this[1] = v5;
    this[2] = v5;
    v6[8] = 0;
    result = sub_100178A0(v5, a2, a3);
    this[2] = v5 + 8 * a2;
  }
  return result;
}
