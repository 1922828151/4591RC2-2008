/*
 * func-name: ??1FPedrailVehicle@GameClient@@UAE@XZ_0
 * func-address: 0x10233740
 * callers: 0x10012404
 * callees: 0x10003fe9, 0x10007054, 0x102c9d50
 */

void __thiscall GameClient::FPedrailVehicle::~FPedrailVehicle(void **this)
{
  *this = &GameClient::FPedrailVehicle::`vftable';
  std::string::~string(this + 330);
  std::string::~string(this + 323);
  std::string::~string(this + 316);
  std::string::~string(this + 309);
  sub_10003FE9();
  if ( this[302] )
    operator delete(this[302]);
  this[302] = 0;
  this[303] = 0;
  this[304] = 0;
  sub_10003FE9();
  sub_10003FE9();
  if ( this[290] )
    operator delete(this[290]);
  this[290] = 0;
  this[291] = 0;
  this[292] = 0;
  sub_10003FE9();
  GameClient::FControlledEstab::~FControlledEstab((GameClient::FControlledEstab *)this);
}
