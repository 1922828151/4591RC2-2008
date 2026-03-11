/*
 * func-name: sub_1013BE90
 * func-address: 0x1013be90
 * callers: 0x1000ede5
 * callees: 0x10008030, 0x1000dc1a, 0x10010ded, 0x100119ff, 0x102c9d86
 */

int __thiscall sub_1013BE90(_DWORD *this, unsigned int a2, int a3)
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
      sub_100119FF(v6[0], v6[1]);
    v5 = sub_10008030(a2);
    this[3] = v5 + 8 * a2;
    this[1] = v5;
    this[2] = v5;
    v6[8] = 0;
    result = sub_1000DC1A(v5, a2, a3);
    this[2] = v5 + 8 * a2;
  }
  return result;
}
