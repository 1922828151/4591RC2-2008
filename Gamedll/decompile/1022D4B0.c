/*
 * func-name: ??0?$ProductorTemplate@VFItem@GameClient@@@GameClient@@QAE@XZ_0
 * func-address: 0x1022d4b0
 * callers: 0x100127b5
 * callees: 0x1000aa33
 */

_DWORD *__thiscall GameClient::ProductorTemplate<GameClient::FItem>::ProductorTemplate<GameClient::FItem>(_DWORD *this)
{
  _BYTE v3[28]; // [esp+Ch] [ebp-28h] BYREF
  int v4; // [esp+30h] [ebp-4h]

  std::string::string(v3, "FItem");
  v4 = 0;
  GameClient::Productor::Productor(this, v3);
  LOBYTE(v4) = 2;
  std::string::~string(v3);
  *this = &GameClient::ProductorTemplate<GameClient::FItem>::`vftable';
  return this;
}
