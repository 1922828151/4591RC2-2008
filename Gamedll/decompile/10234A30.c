/*
 * func-name: ??1FProduct@GameClient@@UAE@XZ_0
 * func-address: 0x10234a30
 * callers: 0x10011284
 * callees: 0x1000321f
 */

void __thiscall GameClient::FProduct::~FProduct(GameClient::FProduct *this)
{
  *(_DWORD *)this = &GameClient::FProduct::`vftable';
  std::string::~string((char *)this + 168);
  std::string::~string((char *)this + 140);
  std::string::~string((char *)this + 112);
  GameClient::Flyweight::~Flyweight(this);
}
