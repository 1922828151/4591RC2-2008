/*
 * func-name: sub_10175C90
 * func-address: 0x10175c90
 * callers: 0x10177930
 * callees: 0x1001afe0, 0x10095080, 0x100950e0, 0x1010fea0, 0x101a2522
 */

void __thiscall sub_10175C90(_DWORD *this, unsigned int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  _DWORD v5[8]; // [esp+0h] [ebp-20h] BYREF

  v5[4] = v5;
  v5[3] = this;
  this[1] = 0;
  this[2] = 0;
  this[3] = 0;
  if ( a2 )
  {
    if ( a2 > 0x1FFFFFFF )
      sub_1001AFE0();
    v4 = sub_10095080(a2);
    this[3] = &v4[2 * a2];
    this[1] = v4;
    this[2] = v4;
    v5[7] = 0;
    sub_100950E0(v4, a2, a3);
    this[2] = &v4[2 * a2];
  }
}
