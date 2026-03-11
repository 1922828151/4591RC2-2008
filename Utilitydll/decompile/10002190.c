/*
 * func-name: ??4Singleton_Manager@Utility@Outpop@@QAEAAV012@ABV012@@Z
 * func-address: 0x10002190
 * callers: none
 * callees: 0x100087b0
 */

_DWORD **__thiscall Outpop::Utility::Singleton_Manager::operator=(_DWORD **this, _DWORD **a2)
{
  int v4; // [esp+4h] [ebp-4h]

  if ( this != a2 )
    sub_100087B0(v4, a2, *a2[1], a2, a2[1]);
  return this;
}
