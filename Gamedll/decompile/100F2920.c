/*
 * func-name: ?SetAsyncLoaderReporter@AdapterActor@GameClient@@QAEXPAVAsyncLoaderReport@@@Z_0
 * func-address: 0x100f2920
 * callers: 0x10005920
 * callees: none
 */

void __thiscall GameClient::AdapterActor::SetAsyncLoaderReporter(
        GameClient::AdapterActor *this,
        struct AsyncLoaderReport *a2)
{
  *((_DWORD *)this + 308) = a2;
}
