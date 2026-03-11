/*
 * func-name: ??8Addr@IONetwork@Outpop@@QBE_NABV012@@Z
 * func-address: 0x10002160
 * callers: none
 * callees: none
 */

BOOL __thiscall Outpop::IONetwork::Addr::operator==(_DWORD *this, int a2)
{
  return *(_DWORD *)(a2 + 4) == this[1] && *(_DWORD *)(a2 + 8) == this[2];
}
