/*
 * func-name: sub_1013DE10
 * func-address: 0x1013de10
 * callers: 0x1001253a
 * callees: 0x10002eb4, 0x1000be38, 0x102c9d98
 */

_DWORD *__thiscall sub_1013DE10(_DWORD *this)
{
  int v2; // eax
  int v3; // eax
  int v4; // eax
  int v5; // eax

  *this = &ScreenLayout::`vftable';
  if ( operator new(0x2Cu) )
    v2 = sub_10002EB4(0.0, 0.5, 1024.0, 668.0, 1.0, 2, 3);
  else
    v2 = 0;
  this[1] = v2;
  if ( operator new(0x34u) )
    v3 = sub_1000BE38(0.0, 0.5, 1024.0, 500.0, 200.0, 1, 0);
  else
    v3 = 0;
  this[2] = v3;
  if ( operator new(0x2Cu) )
    v4 = sub_10002EB4(0.0, 0.5, 1024.0, 668.0, 1.0, 1, 1);
  else
    v4 = 0;
  this[3] = v4;
  if ( operator new(0x2Cu) )
    v5 = sub_10002EB4(0.0, 0.2, 1024.0, 668.0, 1.0, 2, 3);
  else
    v5 = 0;
  this[4] = v5;
  return this;
}
