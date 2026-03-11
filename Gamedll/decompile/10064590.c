/*
 * func-name: ??0FRobotArmor@GameClient@@QAE@ABV01@@Z_0
 * func-address: 0x10064590
 * callers: 0x10016a40
 * callees: 0x10008747, 0x1000b613, 0x1000d549, 0x10011f27
 */

GameClient::FRobotArmor *__thiscall GameClient::FRobotArmor::FRobotArmor(
        GameClient::FRobotArmor *this,
        const struct GameClient::FRobotArmor *a2)
{
  GameClient::FSystemPart::FSystemPart(this, a2);
  *(_DWORD *)this = &GameClient::FRobotArmor::`vftable';
  *((_DWORD *)this + 68) = *((_DWORD *)a2 + 68);
  std::string::string((char *)this + 276, (char *)a2 + 276);
  std::string::string((char *)this + 304, (char *)a2 + 304);
  *((_DWORD *)this + 83) = *((_DWORD *)a2 + 83);
  *((_DWORD *)this + 84) = *((_DWORD *)a2 + 84);
  *((float *)this + 85) = *((float *)a2 + 85);
  *((float *)this + 86) = *((float *)a2 + 86);
  *((_DWORD *)this + 87) = *((_DWORD *)a2 + 87);
  *((_DWORD *)this + 88) = *((_DWORD *)a2 + 88);
  *((_DWORD *)this + 89) = *((_DWORD *)a2 + 89);
  *((_DWORD *)this + 90) = *((_DWORD *)a2 + 90);
  *((_DWORD *)this + 91) = *((_DWORD *)a2 + 91);
  *((_DWORD *)this + 92) = *((_DWORD *)a2 + 92);
  *((_DWORD *)this + 93) = *((_DWORD *)a2 + 93);
  sub_10008747((int)a2 + 376);
  sub_1000B613((int)a2 + 392);
  sub_1000B613((int)a2 + 408);
  sub_1000D549((int)a2 + 424);
  sub_1000B613((int)a2 + 440);
  sub_1000B613((int)a2 + 456);
  return this;
}
