/*
 * func-name: sub_102B12C0
 * func-address: 0x102b12c0
 * callers: 0x1000e14c
 * callees: 0x10009016, 0x10011743, 0x10012413, 0x10014ac4, 0x102c9d86
 */

int __thiscall sub_102B12C0(_DWORD *this, unsigned int a2, int a3)
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
      sub_10012413(v6[0], v6[1]);
    v5 = sub_10014AC4(a2);
    this[3] = v5 + 8 * a2;
    this[1] = v5;
    this[2] = v5;
    v6[8] = 0;
    result = sub_10009016(v5, a2, a3);
    this[2] = v5 + 8 * a2;
  }
  return result;
}
