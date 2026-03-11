/*
 * func-name: ??1FEstabDoor@GameClient@@UAE@XZ_0
 * func-address: 0x10229f10
 * callers: 0x10005a29
 * callees: 0x10014817
 */

void __thiscall GameClient::FEstabDoor::~FEstabDoor(GameClient::FEstabDoor *this)
{
  *(_DWORD *)this = &GameClient::FEstabDoor::`vftable';
  AnimationSet::~AnimationSet((GameClient::FEstabDoor *)((char *)this + 980));
  AnimationSet::~AnimationSet((GameClient::FEstabDoor *)((char *)this + 936));
  AnimationSet::~AnimationSet((GameClient::FEstabDoor *)((char *)this + 892));
  AnimationSet::~AnimationSet((GameClient::FEstabDoor *)((char *)this + 848));
  AnimationSet::~AnimationSet((GameClient::FEstabDoor *)((char *)this + 804));
  AnimationSet::~AnimationSet((GameClient::FEstabDoor *)((char *)this + 760));
  AnimationSet::~AnimationSet((GameClient::FEstabDoor *)((char *)this + 716));
  std::string::~string((char *)this + 688);
  std::string::~string((char *)this + 660);
  std::string::~string((char *)this + 632);
  std::string::~string((char *)this + 604);
  std::string::~string((char *)this + 576);
  std::string::~string((char *)this + 548);
  std::string::~string((char *)this + 520);
  GameClient::FNonControlledEstab::~FNonControlledEstab(this);
}
