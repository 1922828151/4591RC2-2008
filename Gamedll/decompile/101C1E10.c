/*
 * func-name: sub_101C1E10
 * func-address: 0x101c1e10
 * callers: 0x1000209f
 * callees: 0x10001ad7, 0x10008ba2, 0x1000be8d, 0x10012ad0, 0x102c9d86
 */

int __thiscall sub_101C1E10(_DWORD *this, unsigned int a2, int a3)
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
      sub_10012AD0(v6[0], v6[1]);
    v5 = sub_1000BE8D(a2);
    this[3] = v5 + 8 * a2;
    this[1] = v5;
    this[2] = v5;
    v6[8] = 0;
    result = sub_10001AD7(v5, a2, a3);
    this[2] = v5 + 8 * a2;
  }
  return result;
}
