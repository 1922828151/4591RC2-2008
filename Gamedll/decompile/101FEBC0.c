/*
 * func-name: sub_101FEBC0
 * func-address: 0x101febc0
 * callers: 0x10016dab
 * callees: 0x1000661d, 0x1000775c, 0x1000aae2, 0x100143d0, 0x102c9d86
 */

int __thiscall sub_101FEBC0(_DWORD *this, unsigned int a2, int a3)
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
      sub_1000661D(v6[0], v6[1]);
    v5 = sub_1000775C(a2);
    this[3] = v5 + 8 * a2;
    this[1] = v5;
    this[2] = v5;
    v6[8] = 0;
    result = sub_1000AAE2(v5, a2, a3);
    this[2] = v5 + 8 * a2;
  }
  return result;
}
