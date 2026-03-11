/*
 * func-name: ??1FBooty@GameClient@@UAE@XZ_0
 * func-address: 0x102237a0
 * callers: 0x10004705
 * callees: 0x1000321f, 0x102c0750
 */

void __thiscall GameClient::FBooty::~FBooty(GameClient::FBooty *this)
{
  *(_DWORD *)this = &GameClient::FBooty::`vftable';
  std::string::~string((char *)this + 156);
  sub_102C0750((char *)this + 116);
  GameClient::Flyweight::~Flyweight(this);
}
