/*
 * func-name: ??0?$ProductorTemplate@VFFunc_Sheild@GameClient@@@GameClient@@QAE@XZ_0
 * func-address: 0x1022c8f0
 * callers: 0x10005e52
 * callees: 0x1000aa33
 */

_DWORD *__thiscall GameClient::ProductorTemplate<GameClient::FFunc_Sheild>::ProductorTemplate<GameClient::FFunc_Sheild>(
        _DWORD *this)
{
  _BYTE v3[28]; // [esp+Ch] [ebp-28h] BYREF
  int v4; // [esp+30h] [ebp-4h]

  std::string::string(v3, "FFunc_Sheild");
  v4 = 0;
  GameClient::Productor::Productor(this, v3);
  LOBYTE(v4) = 2;
  std::string::~string(v3);
  *this = &GameClient::ProductorTemplate<GameClient::FFunc_Sheild>::`vftable';
  return this;
}
