/*
 * func-name: sub_10232820
 * func-address: 0x10232820
 * callers: 0x100081ca
 * callees: 0x10003fe9, 0x10014817, 0x102c9d50
 */

void __thiscall sub_10232820(void **this)
{
  *this = &FOccupyIcon::`vftable';
  std::string::~string(this + 138);
  sub_10003FE9();
  if ( this[131] )
    operator delete(this[131]);
  this[131] = 0;
  this[132] = 0;
  this[133] = 0;
  GameClient::FNonControlledEstab::~FNonControlledEstab((GameClient::FNonControlledEstab *)this);
}
