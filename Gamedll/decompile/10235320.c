/*
 * func-name: ??0?$ProductorTemplate@VFRobot@GameClient@@@GameClient@@QAE@XZ_0
 * func-address: 0x10235320
 * callers: 0x10018a34
 * callees: 0x1000aa33
 */

_DWORD *__thiscall GameClient::ProductorTemplate<GameClient::FRobot>::ProductorTemplate<GameClient::FRobot>(
        _DWORD *this)
{
  _BYTE v3[28]; // [esp+Ch] [ebp-28h] BYREF
  int v4; // [esp+30h] [ebp-4h]

  std::string::string(v3, "FRobot");
  v4 = 0;
  GameClient::Productor::Productor(this, v3);
  LOBYTE(v4) = 2;
  std::string::~string(v3);
  *this = &GameClient::ProductorTemplate<GameClient::FRobot>::`vftable';
  return this;
}
