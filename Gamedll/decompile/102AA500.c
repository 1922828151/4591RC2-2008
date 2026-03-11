/*
 * func-name: sub_102AA500
 * func-address: 0x102aa500
 * callers: 0x1001201c
 * callees: 0x10004c37, 0x10009606, 0x10015280, 0x100192d6, 0x102c9d86
 */

int __thiscall sub_102AA500(_DWORD *this, unsigned int a2, int a3)
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
      sub_10009606(v6[0], v6[1]);
    v5 = sub_10004C37(a2);
    this[3] = v5 + 8 * a2;
    this[1] = v5;
    this[2] = v5;
    v6[8] = 0;
    result = sub_100192D6(v5, a2, a3);
    this[2] = v5 + 8 * a2;
  }
  return result;
}
