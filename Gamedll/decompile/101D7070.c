/*
 * func-name: sub_101D7070
 * func-address: 0x101d7070
 * callers: 0x100038d2
 * callees: 0x10018ea3, 0x102c9d50
 */

void **__thiscall sub_101D7070(void **this, char a2)
{
  *this = &GameClient::LogicWorld::`vftable';
  if ( this[7] )
    operator delete(this[7]);
  this[7] = 0;
  this[8] = 0;
  this[9] = 0;
  sub_10018EA3();
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
