/*
 * func-name: ??0?$ProductorTemplate@VFASummon@GameClient@@@GameClient@@QAE@XZ_0
 * func-address: 0x10249c70
 * callers: 0x1000a5a6
 * callees: 0x1000aa33
 */

_DWORD *__thiscall GameClient::ProductorTemplate<GameClient::FASummon>::ProductorTemplate<GameClient::FASummon>(
        _DWORD *this)
{
  _BYTE v3[28]; // [esp+Ch] [ebp-28h] BYREF
  int v4; // [esp+30h] [ebp-4h]

  std::string::string(v3, "FASummon");
  v4 = 0;
  GameClient::Productor::Productor(this, v3);
  LOBYTE(v4) = 2;
  std::string::~string(v3);
  *this = &GameClient::ProductorTemplate<GameClient::FASummon>::`vftable';
  return this;
}
