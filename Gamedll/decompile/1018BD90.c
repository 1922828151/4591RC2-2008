/*
 * func-name: ??0FRobotCore@GameClient@@QAE@ABV01@@Z_0
 * func-address: 0x1018bd90
 * callers: 0x1000f56a
 * callees: 0x10011f27
 */

GameClient::FRobotCore *__thiscall GameClient::FRobotCore::FRobotCore(
        GameClient::FRobotCore *this,
        const struct GameClient::FRobotCore *a2)
{
  GameClient::FSystemPart::FSystemPart(this, a2);
  *(_DWORD *)this = &GameClient::FRobotCore::`vftable';
  *((_DWORD *)this + 68) = *((_DWORD *)a2 + 68);
  *((_DWORD *)this + 69) = *((_DWORD *)a2 + 69);
  *((_DWORD *)this + 70) = *((_DWORD *)a2 + 70);
  *((float *)this + 71) = *((float *)a2 + 71);
  *((_DWORD *)this + 72) = *((_DWORD *)a2 + 72);
  std::string::string((char *)this + 292, (char *)a2 + 292);
  return this;
}
