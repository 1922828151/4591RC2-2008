/*
 * func-name: sub_100905A0
 * func-address: 0x100905a0
 * callers: 0x10091230
 * callees: 0x1008fa10, 0x10095080, 0x100950e0, 0x1010fea0, 0x101a2522
 */

int __thiscall sub_100905A0(_DWORD *this, unsigned int a2, int a3)
{
  int result; // eax
  int v5; // edi
  _DWORD v6[8]; // [esp+0h] [ebp-20h] BYREF

  result = 0;
  v6[4] = v6;
  v6[3] = this;
  this[1] = 0;
  this[2] = 0;
  this[3] = 0;
  if ( a2 )
  {
    if ( a2 > 0x1FFFFFFF )
      sub_1008FA10();
    v5 = sub_10095080(a2);
    this[3] = v5 + 8 * a2;
    this[1] = v5;
    this[2] = v5;
    v6[7] = 0;
    result = sub_100950E0(v5, a2, a3);
    this[2] = v5 + 8 * a2;
  }
  return result;
}
