/*
 * func-name: ??0?$ProductorTemplate@VFSAlarm@GameClient@@@GameClient@@QAE@XZ_0
 * func-address: 0x1024abf0
 * callers: 0x10001f8c
 * callees: 0x1000aa33
 */

_DWORD *__thiscall GameClient::ProductorTemplate<GameClient::FSAlarm>::ProductorTemplate<GameClient::FSAlarm>(
        _DWORD *this)
{
  _BYTE v3[28]; // [esp+Ch] [ebp-28h] BYREF
  int v4; // [esp+30h] [ebp-4h]

  std::string::string(v3, "FSAlarm");
  v4 = 0;
  GameClient::Productor::Productor(this, v3);
  LOBYTE(v4) = 2;
  std::string::~string(v3);
  *this = &GameClient::ProductorTemplate<GameClient::FSAlarm>::`vftable';
  return this;
}
