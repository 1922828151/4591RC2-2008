/*
 * func-name: ??0FARetrieval@GameClient@@QAE@ABV01@@Z_0
 * func-address: 0x10249410
 * callers: 0x10012af3
 * callees: 0x1000ed77
 */

GameClient::FARetrieval *__thiscall GameClient::FARetrieval::FARetrieval(
        GameClient::FARetrieval *this,
        const struct GameClient::FARetrieval *a2)
{
  GameClient::FAura::FAura(this, a2);
  *(_DWORD *)this = &GameClient::FARetrieval::`vftable';
  return this;
}
