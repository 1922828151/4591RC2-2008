/*
 * func-name: ??1HookEsbSheild@@UAE@XZ_0
 * func-address: 0x1012d730
 * callers: 0x100059d9
 * callees: none
 */

void __thiscall HookEsbSheild::~HookEsbSheild(HookEsbSheild *this)
{
  *(_DWORD *)this = &HookEsbSheild::`vftable';
  std::string::~string((char *)this + 1172);
  std::string::~string((char *)this + 1144);
  std::string::~string((char *)this + 1112);
  std::string::~string((char *)this + 1084);
  std::string::~string((char *)this + 1056);
  Actor::~Actor(this);
}
