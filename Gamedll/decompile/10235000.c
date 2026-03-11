/*
 * func-name: ??1FProductInfo@GameClient@@UAE@XZ_0
 * func-address: 0x10235000
 * callers: 0x1000b082
 * callees: 0x1000321f
 */

void __thiscall GameClient::FProductInfo::~FProductInfo(GameClient::FProductInfo *this)
{
  *(_DWORD *)this = &GameClient::FProductInfo::`vftable';
  std::string::~string((char *)this + 232);
  std::string::~string((char *)this + 204);
  std::string::~string((char *)this + 176);
  std::string::~string((char *)this + 148);
  std::string::~string((char *)this + 120);
  GameClient::Flyweight::~Flyweight(this);
}
