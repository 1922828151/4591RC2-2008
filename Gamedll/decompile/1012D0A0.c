/*
 * func-name: ??1HookEsbStore@@UAE@XZ_0
 * func-address: 0x1012d0a0
 * callers: 0x10009c87
 * callees: none
 */

void __thiscall HookEsbStore::~HookEsbStore(HookEsbStore *this)
{
  *(_DWORD *)this = &HookEsbStore::`vftable';
  std::string::~string((char *)this + 1108);
  std::string::~string((char *)this + 1080);
  std::string::~string((char *)this + 1052);
  Actor::~Actor(this);
}
