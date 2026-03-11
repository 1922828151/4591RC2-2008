/*
 * func-name: ??1HookAlarmArea@@UAE@XZ_0
 * func-address: 0x1012e620
 * callers: 0x1000eaa7
 * callees: none
 */

void __thiscall HookAlarmArea::~HookAlarmArea(HookAlarmArea *this)
{
  *(_DWORD *)this = &HookAlarmArea::`vftable';
  std::string::~string((char *)this + 1144);
  std::string::~string((char *)this + 1116);
  std::string::~string((char *)this + 1080);
  std::string::~string((char *)this + 1052);
  Actor::~Actor(this);
}
