/*
 * func-name: ??1HookEsbAirDrop@@UAE@XZ_0
 * func-address: 0x1012d8c0
 * callers: 0x10015591
 * callees: none
 */

void __thiscall HookEsbAirDrop::~HookEsbAirDrop(HookEsbAirDrop *this)
{
  *(_DWORD *)this = &HookEsbAirDrop::`vftable';
  std::string::~string((char *)this + 1148);
  std::string::~string((char *)this + 1112);
  std::string::~string((char *)this + 1084);
  std::string::~string((char *)this + 1056);
  Actor::~Actor(this);
}
