/*
 * func-name: ??0?$ProductorTemplate@VFARetrieval@GameClient@@@GameClient@@QAE@ABV01@@Z_0
 * func-address: 0x102490e0
 * callers: 0x100146e1
 * callees: none
 */

_DWORD *__thiscall GameClient::ProductorTemplate<GameClient::FARetrieval>::ProductorTemplate<GameClient::FARetrieval>(
        _DWORD *this,
        int a2)
{
  *this = &GameClient::Productor::`vftable';
  std::string::string(this + 1, (void *)(a2 + 4));
  *this = &GameClient::ProductorTemplate<GameClient::FARetrieval>::`vftable';
  return this;
}
