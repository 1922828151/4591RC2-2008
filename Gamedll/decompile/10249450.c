/*
 * func-name: ??0?$ProductorTemplate@VFASatelliteCapability@GameClient@@@GameClient@@QAE@XZ_0
 * func-address: 0x10249450
 * callers: 0x10009377
 * callees: 0x1000aa33
 */

_DWORD *__thiscall GameClient::ProductorTemplate<GameClient::FASatelliteCapability>::ProductorTemplate<GameClient::FASatelliteCapability>(
        _DWORD *this)
{
  _BYTE v3[28]; // [esp+Ch] [ebp-28h] BYREF
  int v4; // [esp+30h] [ebp-4h]

  std::string::string(v3, "FASatelliteCapability");
  v4 = 0;
  GameClient::Productor::Productor(this, v3);
  LOBYTE(v4) = 2;
  std::string::~string(v3);
  *this = &GameClient::ProductorTemplate<GameClient::FASatelliteCapability>::`vftable';
  return this;
}
