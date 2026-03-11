/*
 * func-name: ??1WorldObject@GameClient@@UAE@XZ_0
 * func-address: 0x1019ae90
 * callers: 0x1000ab55
 * callees: 0x102c9d50
 */

void __thiscall GameClient::WorldObject::~WorldObject(void **this)
{
  *this = &GameClient::WorldObject::`vftable';
  if ( this[31] )
    operator delete(this[31]);
  this[31] = 0;
  this[32] = 0;
  this[33] = 0;
  GameClient::DataObject::~DataObject((GameClient::DataObject *)this);
}
