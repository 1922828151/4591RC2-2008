/*
 * func-name: ??1HookEsbTransport@@UAE@XZ_0
 * func-address: 0x1012dd30
 * callers: 0x100118d3
 * callees: none
 */

void __thiscall HookEsbTransport::~HookEsbTransport(HookEsbTransport *this)
{
  *(_DWORD *)this = &HookEsbTransport::`vftable';
  std::string::~string((char *)this + 1148);
  std::string::~string((char *)this + 1112);
  std::string::~string((char *)this + 1084);
  std::string::~string((char *)this + 1056);
  Actor::~Actor(this);
}
