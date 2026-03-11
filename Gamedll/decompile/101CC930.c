/*
 * func-name: sub_101CC930
 * func-address: 0x101cc930
 * callers: 0x10004c41
 * callees: 0x1000ccc5, 0x10015d4d, 0x10017c83, 0x10018395, 0x102c9d86
 */

int __thiscall sub_101CC930(_DWORD *this, unsigned int a2, int a3)
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
      sub_10015D4D(v6[0], v6[1]);
    v5 = sub_1000CCC5(a2);
    this[3] = v5 + 8 * a2;
    this[1] = v5;
    this[2] = v5;
    v6[8] = 0;
    result = sub_10018395(v5, a2, a3);
    this[2] = v5 + 8 * a2;
  }
  return result;
}
