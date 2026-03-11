/*
 * func-name: ??1FSuspendVehicle@GameClient@@UAE@XZ_0
 * func-address: 0x10240a60
 * callers: 0x1000aa60
 * callees: 0x10003fe9, 0x10007054, 0x102c9d50
 */

void __thiscall GameClient::FSuspendVehicle::~FSuspendVehicle(void **this)
{
  *this = &GameClient::FSuspendVehicle::`vftable';
  sub_10003FE9();
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
