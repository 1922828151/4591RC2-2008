/*
 * func-name: ??1Flyweight@GameClient@@UAE@XZ_0
 * func-address: 0x1022dce0
 * callers: 0x1000321f
 * callees: 0x102c37f0
 */

void __thiscall GameClient::Flyweight::~Flyweight(GameClient::Flyweight *this)
{
  *(_DWORD *)this = &GameClient::Flyweight::`vftable';
  std::string::~string((char *)this + 80);
  std::string::~string((char *)this + 52);
  sub_102C37F0();
}
