/*
 * func-name: sub_1004D810
 * func-address: 0x1004d810
 * callers: 0x10015c9e
 * callees: 0x10004c50, 0x10017ed1
 */

char __thiscall sub_1004D810(_DWORD *this, unsigned int a2)
{
  int v4; // eax
  int v5; // [esp+0h] [ebp-8h]
  int v6; // [esp+4h] [ebp-4h]

  this[1] = 0;
  this[2] = 0;
  this[3] = 0;
  if ( !a2 )
    return 0;
  if ( a2 > 0x3FFFFFFF )
    sub_10004C50(v5, v6);
  v4 = sub_10017ED1(a2);
  this[1] = v4;
  this[2] = v4;
  this[3] = v4 + 4 * a2;
  return 1;
}
