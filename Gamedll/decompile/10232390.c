/*
 * func-name: ??0?$ProductorTemplate@VFOccupyIcon@@@GameClient@@QAE@XZ_0
 * func-address: 0x10232390
 * callers: 0x10015d3e
 * callees: 0x1000aa33
 */

_DWORD *__thiscall GameClient::ProductorTemplate<FOccupyIcon>::ProductorTemplate<FOccupyIcon>(_DWORD *this)
{
  _BYTE v3[28]; // [esp+Ch] [ebp-28h] BYREF
  int v4; // [esp+30h] [ebp-4h]

  std::string::string(v3, "FOccupyIcon");
  v4 = 0;
  GameClient::Productor::Productor(this, v3);
  LOBYTE(v4) = 2;
  std::string::~string(v3);
  *this = &GameClient::ProductorTemplate<FOccupyIcon>::`vftable';
  return this;
}
