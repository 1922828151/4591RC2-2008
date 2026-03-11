/*
 * func-name: ??0FSkill@GameClient@@QAE@ABV01@@Z_0
 * func-address: 0x10194090
 * callers: 0x1001ac76
 * callees: 0x1000cf40, 0x10019a97
 */

GameClient::FSkill *__thiscall GameClient::FSkill::FSkill(
        GameClient::FSkill *this,
        const struct GameClient::FSkill *a2)
{
  GameClient::Flyweight::Flyweight(this, a2);
  *(_DWORD *)this = &GameClient::FSkill::`vftable';
  *((_DWORD *)this + 27) = *((_DWORD *)a2 + 27);
  *((_DWORD *)this + 28) = *((_DWORD *)a2 + 28);
  *((_BYTE *)this + 116) = *((_BYTE *)a2 + 116);
  *((_BYTE *)this + 117) = *((_BYTE *)a2 + 117);
  *((_BYTE *)this + 118) = *((_BYTE *)a2 + 118);
  *((_BYTE *)this + 119) = *((_BYTE *)a2 + 119);
  *((_BYTE *)this + 120) = *((_BYTE *)a2 + 120);
  *((_BYTE *)this + 121) = *((_BYTE *)a2 + 121);
  *((_BYTE *)this + 122) = *((_BYTE *)a2 + 122);
  *((_BYTE *)this + 123) = *((_BYTE *)a2 + 123);
  *((_BYTE *)this + 124) = *((_BYTE *)a2 + 124);
  *((_BYTE *)this + 125) = *((_BYTE *)a2 + 125);
  *((_BYTE *)this + 126) = *((_BYTE *)a2 + 126);
  *((_DWORD *)this + 32) = *((_DWORD *)a2 + 32);
  *((_DWORD *)this + 33) = *((_DWORD *)a2 + 33);
  *((_DWORD *)this + 34) = *((_DWORD *)a2 + 34);
  *((_DWORD *)this + 35) = *((_DWORD *)a2 + 35);
  *((float *)this + 36) = *((float *)a2 + 36);
  *((float *)this + 37) = *((float *)a2 + 37);
  *((float *)this + 38) = *((float *)a2 + 38);
  *((float *)this + 39) = *((float *)a2 + 39);
  *((_DWORD *)this + 40) = *((_DWORD *)a2 + 40);
  *((_DWORD *)this + 41) = *((_DWORD *)a2 + 41);
  *((float *)this + 42) = *((float *)a2 + 42);
  *((float *)this + 43) = *((float *)a2 + 43);
  std::string::string((char *)this + 176, (char *)a2 + 176);
  std::string::string((char *)this + 204, (char *)a2 + 204);
  std::string::string((char *)this + 232, (char *)a2 + 232);
  sub_1000CF40((char *)a2 + 260);
  std::string::string((char *)this + 340, (char *)a2 + 340);
  std::string::string((char *)this + 368, (char *)a2 + 368);
  std::string::string((char *)this + 396, (char *)a2 + 396);
  sub_1000CF40((char *)a2 + 424);
  *((_BYTE *)this + 504) = *((_BYTE *)a2 + 504);
  *((_BYTE *)this + 505) = *((_BYTE *)a2 + 505);
  std::string::string((char *)this + 508, (char *)a2 + 508);
  std::string::string((char *)this + 536, (char *)a2 + 536);
  std::string::string((char *)this + 564, (char *)a2 + 564);
  sub_1000CF40((char *)a2 + 592);
  std::string::string((char *)this + 672, (char *)a2 + 672);
  return this;
}
