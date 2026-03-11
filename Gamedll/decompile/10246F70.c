/*
 * func-name: ??0?$ProductorTemplate@VFAArmor@GameClient@@@GameClient@@QAE@XZ_0
 * func-address: 0x10246f70
 * callers: 0x100017c6
 * callees: 0x1000aa33
 */

_DWORD *__thiscall GameClient::ProductorTemplate<GameClient::FAArmor>::ProductorTemplate<GameClient::FAArmor>(
        _DWORD *this)
{
  _BYTE v3[28]; // [esp+Ch] [ebp-28h] BYREF
  int v4; // [esp+30h] [ebp-4h]

  std::string::string(v3, "FAArmor");
  v4 = 0;
  GameClient::Productor::Productor(this, v3);
  LOBYTE(v4) = 2;
  std::string::~string(v3);
  *this = &GameClient::ProductorTemplate<GameClient::FAArmor>::`vftable';
  return this;
}
