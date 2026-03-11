/*
 * func-name: ??1HookEstablishment@@UAE@XZ_0
 * func-address: 0x1012c8c0
 * callers: 0x10005ef2
 * callees: none
 */

void __thiscall HookEstablishment::~HookEstablishment(HookEstablishment *this)
{
  *(_DWORD *)this = &HookEstablishment::`vftable';
  std::string::~string((char *)this + 1388);
  std::string::~string((char *)this + 1360);
  std::string::~string((char *)this + 1328);
  std::string::~string((char *)this + 1300);
  std::vector<Actor *>::~vector<Actor *>((char *)this + 1280);
  std::string::~string((char *)this + 1240);
  std::string::~string((char *)this + 1212);
  AnimationSet::~AnimationSet((HookEstablishment *)((char *)this + 1168));
  std::string::~string((char *)this + 1136);
  std::string::~string((char *)this + 1108);
  std::string::~string((char *)this + 1080);
  std::string::~string((char *)this + 1052);
  Actor::~Actor(this);
}
