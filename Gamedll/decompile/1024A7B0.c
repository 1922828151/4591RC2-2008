/*
 * func-name: ??1FAura@GameClient@@UAE@XZ_0
 * func-address: 0x1024a7b0
 * callers: 0x1000925f
 * callees: 0x1000321f
 */

void __thiscall GameClient::FAura::~FAura(GameClient::FAura *this)
{
  *(_DWORD *)this = &GameClient::FAura::`vftable';
  std::string::~string((char *)this + 228);
  std::string::~string((char *)this + 200);
  std::string::~string((char *)this + 172);
  std::string::~string((char *)this + 140);
  GameClient::Flyweight::~Flyweight(this);
}
