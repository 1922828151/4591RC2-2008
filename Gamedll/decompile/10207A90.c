/*
 * func-name: sub_10207A90
 * func-address: 0x10207a90
 * callers: 0x1000f4de
 * callees: 0x100119aa, 0x102c9d50
 */

void __thiscall sub_10207A90(void **this, int a2, int a3)
{
  *this = &GameClient::LocalCharacter::`vftable';
  if ( this[68] )
    operator delete(this[68]);
  this[68] = 0;
  this[69] = 0;
  this[70] = 0;
  sub_100119AA();
  JUMPOUT(0x101E09C0);
}
