/*
 * func-name: sub_10209A40
 * func-address: 0x10209a40
 * callers: 0x100100f0
 * callees: 0x1000b9c9, 0x1000cfe0, 0x10014358, 0x10014c4f, 0x102c9d86
 */

int __thiscall sub_10209A40(_DWORD *this, unsigned int a2, int a3)
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
      sub_1000CFE0(v6[0], v6[1]);
    v5 = sub_10014358(a2);
    this[3] = v5 + 8 * a2;
    this[1] = v5;
    this[2] = v5;
    v6[8] = 0;
    result = sub_1000B9C9(v5, a2, a3);
    this[2] = v5 + 8 * a2;
  }
  return result;
}
