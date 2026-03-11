/*
 * func-name: ??0?$ProductorTemplate@VFRobotArmor@GameClient@@@GameClient@@QAE@XZ_0
 * func-address: 0x102357f0
 * callers: 0x1000dd5a
 * callees: 0x1000aa33
 */

_DWORD *__thiscall GameClient::ProductorTemplate<GameClient::FRobotArmor>::ProductorTemplate<GameClient::FRobotArmor>(
        _DWORD *this)
{
  _BYTE v3[28]; // [esp+Ch] [ebp-28h] BYREF
  int v4; // [esp+30h] [ebp-4h]

  std::string::string(v3, "FRobotArmor");
  v4 = 0;
  GameClient::Productor::Productor(this, v3);
  LOBYTE(v4) = 2;
  std::string::~string(v3);
  *this = &GameClient::ProductorTemplate<GameClient::FRobotArmor>::`vftable';
  return this;
}
