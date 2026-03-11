/*
 * func-name: sub_100FA780
 * func-address: 0x100fa780
 * callers: 0x1000971e
 * callees: 0x100054e3, 0x1000cff9, 0x1000dd19, 0x100154e2, 0x102c9d86
 */

int __thiscall sub_100FA780(_DWORD *this, unsigned int a2, int a3)
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
      sub_1000CFF9(v6[0], v6[1]);
    v5 = sub_100154E2(a2);
    this[3] = v5 + 8 * a2;
    this[1] = v5;
    this[2] = v5;
    v6[8] = 0;
    result = sub_100054E3(v5, a2, a3);
    this[2] = v5 + 8 * a2;
  }
  return result;
}
