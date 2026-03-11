/*
 * func-name: ??1FSeat@GameClient@@UAE@XZ_0
 * func-address: 0x1023f870
 * callers: 0x10004093
 * callees: 0x1000321f, 0x10003fe9, 0x102c9d50
 */

void __thiscall GameClient::FSeat::~FSeat(void **this)
{
  *this = &GameClient::FSeat::`vftable';
  sub_10003FE9();
  if ( this[45] )
    operator delete(this[45]);
  this[45] = 0;
  this[46] = 0;
  this[47] = 0;
  std::string::~string(this + 35);
  std::string::~string(this + 28);
  GameClient::Flyweight::~Flyweight((GameClient::Flyweight *)this);
}
