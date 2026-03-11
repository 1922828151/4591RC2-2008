/*
 * func-name: ??0?$ProductorTemplate@VFRobotCore@GameClient@@@GameClient@@QAE@XZ_0
 * func-address: 0x1023c0b0
 * callers: 0x1000e2e1
 * callees: 0x1000aa33
 */

_DWORD *__thiscall GameClient::ProductorTemplate<GameClient::FRobotCore>::ProductorTemplate<GameClient::FRobotCore>(
        _DWORD *this)
{
  _BYTE v3[28]; // [esp+Ch] [ebp-28h] BYREF
  int v4; // [esp+30h] [ebp-4h]

  std::string::string(v3, "FRobotCore");
  v4 = 0;
  GameClient::Productor::Productor(this, v3);
  LOBYTE(v4) = 2;
  std::string::~string(v3);
  *this = &GameClient::ProductorTemplate<GameClient::FRobotCore>::`vftable';
  return this;
}
