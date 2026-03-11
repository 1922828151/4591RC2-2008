/*
 * func-name: sub_101668A0
 * func-address: 0x101668a0
 * callers: 0x10001cc1
 * callees: 0x10018ea3, 0x102c9d50
 */

void **__thiscall sub_101668A0(void **this, char a2)
{
  *this = &GameClient::ObjectManager::`vftable';
  if ( this[6] )
    operator delete(this[6]);
  this[6] = 0;
  this[7] = 0;
  this[8] = 0;
  sub_10018EA3();
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
