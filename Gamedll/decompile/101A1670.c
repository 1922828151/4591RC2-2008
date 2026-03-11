/*
 * func-name: ??0FEstabDoor@GameClient@@QAE@ABV01@@Z_0
 * func-address: 0x101a1670
 * callers: 0x10002a04
 * callees: 0x10018fb1
 */

GameClient::FEstabDoor *__thiscall GameClient::FEstabDoor::FEstabDoor(
        GameClient::FEstabDoor *this,
        const struct GameClient::FEstabDoor *a2)
{
  GameClient::FEstablishment::FEstablishment(this, a2);
  *(_DWORD *)this = &GameClient::FNonControlledEstab::`vftable';
  *((_BYTE *)this + 516) = *((_BYTE *)a2 + 516);
  *(_DWORD *)this = &GameClient::FEstabDoor::`vftable';
  std::string::string((char *)this + 520, (char *)a2 + 520);
  std::string::string((char *)this + 548, (char *)a2 + 548);
  std::string::string((char *)this + 576, (char *)a2 + 576);
  std::string::string((char *)this + 604, (char *)a2 + 604);
  std::string::string((char *)this + 632, (char *)a2 + 632);
  std::string::string((char *)this + 660, (char *)a2 + 660);
  std::string::string((char *)this + 688, (char *)a2 + 688);
  AnimationSet::AnimationSet(
    (GameClient::FEstabDoor *)((char *)this + 716),
    (const struct GameClient::FEstabDoor *)((char *)a2 + 716));
  AnimationSet::AnimationSet(
    (GameClient::FEstabDoor *)((char *)this + 760),
    (const struct GameClient::FEstabDoor *)((char *)a2 + 760));
  AnimationSet::AnimationSet(
    (GameClient::FEstabDoor *)((char *)this + 804),
    (const struct GameClient::FEstabDoor *)((char *)a2 + 804));
  AnimationSet::AnimationSet(
    (GameClient::FEstabDoor *)((char *)this + 848),
    (const struct GameClient::FEstabDoor *)((char *)a2 + 848));
  AnimationSet::AnimationSet(
    (GameClient::FEstabDoor *)((char *)this + 892),
    (const struct GameClient::FEstabDoor *)((char *)a2 + 892));
  AnimationSet::AnimationSet(
    (GameClient::FEstabDoor *)((char *)this + 936),
    (const struct GameClient::FEstabDoor *)((char *)a2 + 936));
  AnimationSet::AnimationSet(
    (GameClient::FEstabDoor *)((char *)this + 980),
    (const struct GameClient::FEstabDoor *)((char *)a2 + 980));
  return this;
}
