/*
 * func-name: ??1HookEsbProduce@@UAE@XZ_0
 * func-address: 0x1012ce30
 * callers: 0x1000421e
 * callees: none
 */

void __thiscall HookEsbProduce::~HookEsbProduce(HookEsbProduce *this)
{
  *(_DWORD *)this = &HookEsbProduce::`vftable';
  std::string::~string((char *)this + 1228);
  std::string::~string((char *)this + 1200);
  std::string::~string((char *)this + 1168);
  std::string::~string((char *)this + 1140);
  std::string::~string((char *)this + 1108);
  std::string::~string((char *)this + 1080);
  std::string::~string((char *)this + 1052);
  Actor::~Actor(this);
}
