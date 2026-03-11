/*
 * func-name: sub_101ECC60
 * func-address: 0x101ecc60
 * callers: 0x100087a1
 * callees: 0x1000fc8b, 0x10011d0b, 0x10017517, 0x100199a7, 0x102c9d86
 */

int __thiscall sub_101ECC60(_DWORD *this, unsigned int a2, int a3)
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
      sub_1000FC8B(v6[0], v6[1]);
    v5 = sub_10011D0B(a2);
    this[3] = v5 + 8 * a2;
    this[1] = v5;
    this[2] = v5;
    v6[8] = 0;
    result = sub_100199A7(v5, a2, a3);
    this[2] = v5 + 8 * a2;
  }
  return result;
}
