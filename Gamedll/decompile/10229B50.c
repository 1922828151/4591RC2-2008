/*
 * func-name: ??0FEstabDoor@GameClient@@QAE@XZ_0
 * func-address: 0x10229b50
 * callers: 0x100182e1
 * callees: 0x10011ce3, 0x102c3c40
 */

GameClient::FEstabDoor *__thiscall GameClient::FEstabDoor::FEstabDoor(GameClient::FEstabDoor *this)
{
  _BYTE v3[28]; // [esp+18h] [ebp-44h] BYREF
  _BYTE v4[28]; // [esp+34h] [ebp-28h] BYREF
  int v5; // [esp+58h] [ebp-4h]

  GameClient::FNonControlledEstab::FNonControlledEstab(this);
  v5 = 0;
  *(_DWORD *)this = &GameClient::FEstabDoor::`vftable';
  std::string::string((char *)this + 520);
  std::string::string((char *)this + 548);
  std::string::string((char *)this + 576);
  std::string::string((char *)this + 604);
  std::string::string((char *)this + 632);
  std::string::string((char *)this + 660);
  std::string::string((char *)this + 688);
  AnimationSet::AnimationSet((GameClient::FEstabDoor *)((char *)this + 716));
  AnimationSet::AnimationSet((GameClient::FEstabDoor *)((char *)this + 760));
  AnimationSet::AnimationSet((GameClient::FEstabDoor *)((char *)this + 804));
  AnimationSet::AnimationSet((GameClient::FEstabDoor *)((char *)this + 848));
  AnimationSet::AnimationSet((GameClient::FEstabDoor *)((char *)this + 892));
  AnimationSet::AnimationSet((GameClient::FEstabDoor *)((char *)this + 936));
  AnimationSet::AnimationSet((GameClient::FEstabDoor *)((char *)this + 980));
  LOBYTE(v5) = 14;
  std::string::string(v4, &unk_1031BB20);
  LOBYTE(v5) = 15;
  std::string::string(v3, "AnimIdleCloseLock");
  LOBYTE(v5) = 16;
  sub_102C3C40(this, v3, (char *)this + 520, v4);
  LOBYTE(v5) = 15;
  std::string::~string(v3);
  LOBYTE(v5) = 14;
  std::string::~string(v4);
  std::string::string(v3, &unk_1031BB44);
  LOBYTE(v5) = 17;
  std::string::string(v4, "AnimIdleCloseUnLock");
  LOBYTE(v5) = 18;
  sub_102C3C40(this, v4, (char *)this + 548, v3);
  LOBYTE(v5) = 17;
  std::string::~string(v4);
  LOBYTE(v5) = 14;
  std::string::~string(v3);
  std::string::string(v3, &unk_1031BB68);
  LOBYTE(v5) = 19;
  std::string::string(v4, "AnimIdleOpen");
  LOBYTE(v5) = 20;
  sub_102C3C40(this, v4, (char *)this + 576, v3);
  LOBYTE(v5) = 19;
  std::string::~string(v4);
  LOBYTE(v5) = 14;
  std::string::~string(v3);
  std::string::string(v3, &unk_1031BB84);
  LOBYTE(v5) = 21;
  std::string::string(v4, "AnimOpenLock");
  LOBYTE(v5) = 22;
  sub_102C3C40(this, v4, (char *)this + 604, v3);
  LOBYTE(v5) = 21;
  std::string::~string(v4);
  LOBYTE(v5) = 14;
  std::string::~string(v3);
  std::string::string(v3, &unk_1031BBA0);
  LOBYTE(v5) = 23;
  std::string::string(v4, "AnimCloseLock");
  LOBYTE(v5) = 24;
  sub_102C3C40(this, v4, (char *)this + 632, v3);
  LOBYTE(v5) = 23;
  std::string::~string(v4);
  LOBYTE(v5) = 14;
  std::string::~string(v3);
  std::string::string(v3, &unk_1031BBBC);
  LOBYTE(v5) = 25;
  std::string::string(v4, "AnimOpenDoor");
  LOBYTE(v5) = 26;
  sub_102C3C40(this, v4, (char *)this + 660, v3);
  LOBYTE(v5) = 25;
  std::string::~string(v4);
  LOBYTE(v5) = 14;
  std::string::~string(v3);
  std::string::string(v3, &unk_1031BBD8);
  LOBYTE(v5) = 27;
  std::string::string(v4, "AnimCloseDoor");
  LOBYTE(v5) = 28;
  sub_102C3C40(this, v4, (char *)this + 688, v3);
  LOBYTE(v5) = 27;
  std::string::~string(v4);
  LOBYTE(v5) = 14;
  std::string::~string(v3);
  return this;
}
