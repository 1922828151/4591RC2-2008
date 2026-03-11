/*
 * func-name: sub_101FE8F0
 * func-address: 0x101fe8f0
 * callers: 0x10019321
 * callees: 0x10006cb2, 0x10008a58, 0x10017b61, 0x1001a26c, 0x102c9d86
 */

int __thiscall sub_101FE8F0(_DWORD *this, unsigned int a2, int a3)
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
      sub_10008A58(v6[0], v6[1]);
    v5 = sub_1001A26C(a2);
    this[3] = v5 + 8 * a2;
    this[1] = v5;
    this[2] = v5;
    v6[8] = 0;
    result = sub_10006CB2(v5, a2, a3);
    this[2] = v5 + 8 * a2;
  }
  return result;
}
