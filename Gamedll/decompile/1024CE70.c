/*
 * func-name: ??0?$ProductorTemplate@VFSOccupy@GameClient@@@GameClient@@QAE@XZ_0
 * func-address: 0x1024ce70
 * callers: 0x100043ef
 * callees: 0x1000aa33
 */

_DWORD *__thiscall GameClient::ProductorTemplate<GameClient::FSOccupy>::ProductorTemplate<GameClient::FSOccupy>(
        _DWORD *this)
{
  _BYTE v3[28]; // [esp+Ch] [ebp-28h] BYREF
  int v4; // [esp+30h] [ebp-4h]

  std::string::string(v3, "FSOccupy");
  v4 = 0;
  GameClient::Productor::Productor(this, v3);
  LOBYTE(v4) = 2;
  std::string::~string(v3);
  *this = &GameClient::ProductorTemplate<GameClient::FSOccupy>::`vftable';
  return this;
}
