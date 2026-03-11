/*
 * func-name: ??1AnimationModal@@UAE@XZ_0
 * func-address: 0x100db460
 * callers: 0x10009309
 * callees: 0x10006122, 0x100090f7, 0x1000daf3
 */

void __thiscall AnimationModal::~AnimationModal(AnimationModal *this)
{
  int v2; // [esp+0h] [ebp-18h]
  int v3; // [esp+4h] [ebp-14h]

  *(_DWORD *)this = &AnimationModal::`vftable';
  *((_DWORD *)this + 179) = 0;
  sub_100090F7();
  std::string::~string((char *)this + 1368);
  std::string::~string((char *)this + 1340);
  std::string::~string((char *)this + 1312);
  std::string::~string((char *)this + 1284);
  std::string::~string((char *)this + 1236);
  sub_10006122(v2, v3);
  Effect_Base::~Effect_Base(this);
}
