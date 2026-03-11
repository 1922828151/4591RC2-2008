/*
 * func-name: ??1HookEsbEnergy@@UAE@XZ_0
 * func-address: 0x1012cc10
 * callers: 0x10015e7e
 * callees: none
 */

void __thiscall HookEsbEnergy::~HookEsbEnergy(HookEsbEnergy *this)
{
  *(_DWORD *)this = &HookEsbEnergy::`vftable';
  std::string::~string((char *)this + 1168);
  std::string::~string((char *)this + 1140);
  std::string::~string((char *)this + 1108);
  std::string::~string((char *)this + 1080);
  std::string::~string((char *)this + 1052);
  Actor::~Actor(this);
}
