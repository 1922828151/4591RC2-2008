/*
 * func-name: ??0?$ProductorTemplate@VFFunc_VehicleReceive@GameClient@@@GameClient@@QAE@XZ_0
 * func-address: 0x1022cfd0
 * callers: 0x1000ed72
 * callees: 0x1000aa33
 */

_DWORD *__thiscall GameClient::ProductorTemplate<GameClient::FFunc_VehicleReceive>::ProductorTemplate<GameClient::FFunc_VehicleReceive>(
        _DWORD *this)
{
  _BYTE v3[28]; // [esp+Ch] [ebp-28h] BYREF
  int v4; // [esp+30h] [ebp-4h]

  std::string::string(v3, "FFunc_VehicleReceive");
  v4 = 0;
  GameClient::Productor::Productor(this, v3);
  LOBYTE(v4) = 2;
  std::string::~string(v3);
  *this = &GameClient::ProductorTemplate<GameClient::FFunc_VehicleReceive>::`vftable';
  return this;
}
