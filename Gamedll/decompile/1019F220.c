/*
 * func-name: ??0FControlledEstab@GameClient@@QAE@ABV01@@Z_0
 * func-address: 0x1019f220
 * callers: 0x100182b9
 * callees: 0x10002720, 0x1000b613, 0x10018fb1
 */

GameClient::FControlledEstab *__thiscall GameClient::FControlledEstab::FControlledEstab(
        GameClient::FControlledEstab *this,
        const struct GameClient::FControlledEstab *a2)
{
  GameClient::FEstablishment::FEstablishment(this, a2);
  *(_DWORD *)this = &GameClient::FControlledEstab::`vftable';
  *((_DWORD *)this + 129) = *((_DWORD *)a2 + 129);
  std::string::string((char *)this + 520, (char *)a2 + 520);
  *((float *)this + 137) = *((float *)a2 + 137);
  std::string::string((char *)this + 552, (char *)a2 + 552);
  *((float *)this + 145) = *((float *)a2 + 145);
  std::string::string((char *)this + 584, (char *)a2 + 584);
  *((float *)this + 153) = *((float *)a2 + 153);
  *((float *)this + 154) = *((float *)a2 + 154);
  sub_1000B613((int)a2 + 620);
  sub_1000B613((int)a2 + 636);
  std::string::string((char *)this + 652, (char *)a2 + 652);
  std::string::string((char *)this + 680, (char *)a2 + 680);
  *((float *)this + 177) = *((float *)a2 + 177);
  std::string::string((char *)this + 712, (char *)a2 + 712);
  *((float *)this + 185) = *((float *)a2 + 185);
  *((_BYTE *)this + 744) = *((_BYTE *)a2 + 744);
  *((float *)this + 187) = *((float *)a2 + 187);
  std::string::string((char *)this + 752, (char *)a2 + 752);
  std::string::string((char *)this + 780, (char *)a2 + 780);
  sub_10002720((int)a2 + 808);
  sub_10002720((int)a2 + 824);
  *((float *)this + 210) = *((float *)a2 + 210);
  std::string::string((char *)this + 844, (char *)a2 + 844);
  *((float *)this + 218) = *((float *)a2 + 218);
  AnimationSet::AnimationSet(
    (GameClient::FControlledEstab *)((char *)this + 876),
    (const struct GameClient::FControlledEstab *)((char *)a2 + 876));
  AnimationSet::AnimationSet(
    (GameClient::FControlledEstab *)((char *)this + 920),
    (const struct GameClient::FControlledEstab *)((char *)a2 + 920));
  AnimationSet::AnimationSet(
    (GameClient::FControlledEstab *)((char *)this + 964),
    (const struct GameClient::FControlledEstab *)((char *)a2 + 964));
  AnimationSet::AnimationSet(
    (GameClient::FControlledEstab *)((char *)this + 1008),
    (const struct GameClient::FControlledEstab *)((char *)a2 + 1008));
  *((_DWORD *)this + 263) = *((_DWORD *)a2 + 263);
  *((_DWORD *)this + 264) = *((_DWORD *)a2 + 264);
  *((_DWORD *)this + 265) = *((_DWORD *)a2 + 265);
  *((_DWORD *)this + 266) = *((_DWORD *)a2 + 266);
  *((_DWORD *)this + 267) = *((_DWORD *)a2 + 267);
  return this;
}
