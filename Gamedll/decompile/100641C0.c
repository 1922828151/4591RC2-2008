/*
 * func-name: ??0FRobotBody@GameClient@@QAE@ABV01@@Z_0
 * func-address: 0x100641c0
 * callers: 0x10016310
 * callees: 0x1000b613, 0x1000cf40, 0x1000e41c, 0x10011f27, 0x10018048
 */

GameClient::FRobotBody *__thiscall GameClient::FRobotBody::FRobotBody(
        GameClient::FRobotBody *this,
        const struct GameClient::FRobotBody *a2)
{
  GameClient::FSystemPart::FSystemPart(this, a2);
  *(_DWORD *)this = &GameClient::FRobotBody::`vftable';
  *((_DWORD *)this + 68) = *((_DWORD *)a2 + 68);
  std::string::string((char *)this + 276, (char *)a2 + 276);
  *((_DWORD *)this + 76) = *((_DWORD *)a2 + 76);
  *((_DWORD *)this + 77) = *((_DWORD *)a2 + 77);
  *((float *)this + 78) = *((float *)a2 + 78);
  *((float *)this + 79) = *((float *)a2 + 79);
  *((_DWORD *)this + 80) = *((_DWORD *)a2 + 80);
  *((_DWORD *)this + 81) = *((_DWORD *)a2 + 81);
  *((_DWORD *)this + 82) = *((_DWORD *)a2 + 82);
  *((_DWORD *)this + 83) = *((_DWORD *)a2 + 83);
  *((_DWORD *)this + 84) = *((_DWORD *)a2 + 84);
  *((float *)this + 85) = *((float *)a2 + 85);
  *((float *)this + 86) = *((float *)a2 + 86);
  *((float *)this + 87) = *((float *)a2 + 87);
  *((float *)this + 88) = *((float *)a2 + 88);
  *((float *)this + 89) = *((float *)a2 + 89);
  *((_DWORD *)this + 90) = *((_DWORD *)a2 + 90);
  *((_DWORD *)this + 91) = *((_DWORD *)a2 + 91);
  *((_DWORD *)this + 92) = *((_DWORD *)a2 + 92);
  *((_DWORD *)this + 93) = *((_DWORD *)a2 + 93);
  *((_BYTE *)this + 376) = *((_BYTE *)a2 + 376);
  *((_DWORD *)this + 95) = *((_DWORD *)a2 + 95);
  *((_DWORD *)this + 96) = *((_DWORD *)a2 + 96);
  *((float *)this + 97) = *((float *)a2 + 97);
  *((_DWORD *)this + 98) = *((_DWORD *)a2 + 98);
  std::string::string((char *)this + 396, (char *)a2 + 396);
  sub_1000E41C((int)a2 + 424);
  sub_1000B613((int)a2 + 440);
  sub_1000B613((int)a2 + 456);
  sub_10018048((int)a2 + 472);
  sub_1000B613((int)a2 + 488);
  sub_1000B613((int)a2 + 504);
  std::string::string((char *)this + 520, (char *)a2 + 520);
  *((_DWORD *)this + 137) = *((_DWORD *)a2 + 137);
  *((_DWORD *)this + 138) = *((_DWORD *)a2 + 138);
  *((float *)this + 139) = *((float *)a2 + 139);
  sub_1000CF40((char *)a2 + 560);
  sub_1000CF40((char *)a2 + 640);
  sub_1000CF40((char *)a2 + 720);
  sub_1000CF40((char *)a2 + 800);
  sub_1000CF40((char *)a2 + 880);
  std::string::string((char *)this + 960, (char *)a2 + 960);
  std::string::string((char *)this + 988, (char *)a2 + 988);
  return this;
}
