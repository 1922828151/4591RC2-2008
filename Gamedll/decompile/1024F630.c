/*
 * func-name: sub_1024F630
 * func-address: 0x1024f630
 * callers: 0x1001a5b9
 * callees: 0x100022b6, 0x10007446, 0x10007b4e, 0x100091a6, 0x102c9d86
 */

int __thiscall sub_1024F630(_DWORD *this, unsigned int a2, int a3)
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
      sub_100091A6(v6[0], v6[1]);
    v5 = sub_10007446(a2);
    this[3] = v5 + 8 * a2;
    this[1] = v5;
    this[2] = v5;
    v6[8] = 0;
    result = sub_10007B4E(v5, a2, a3);
    this[2] = v5 + 8 * a2;
  }
  return result;
}
