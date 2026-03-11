/*
 * func-name: ??0PartAsyncLoaderReport@GameClient@@QAE@ABV01@@Z_0
 * func-address: 0x10104a00
 * callers: 0x10013679
 * callees: none
 */

GameClient::PartAsyncLoaderReport *__thiscall GameClient::PartAsyncLoaderReport::PartAsyncLoaderReport(
        GameClient::PartAsyncLoaderReport *this,
        const struct GameClient::PartAsyncLoaderReport *a2)
{
  GameClient::PartAsyncLoaderReport *result; // eax

  result = this;
  *(_DWORD *)this = &GameClient::PartAsyncLoaderReport::`vftable';
  *((_DWORD *)this + 1) = *((_DWORD *)a2 + 1);
  return result;
}
