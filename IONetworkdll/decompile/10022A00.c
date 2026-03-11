/*
 * func-name: ??4Comminute_Container@IONetwork@Outpop@@QAEAAV012@ABV012@@Z
 * func-address: 0x10022a00
 * callers: none
 * callees: 0x10024980
 */

int __thiscall Outpop::IONetwork::Comminute_Container::operator=(int this, int a2)
{
  if ( this != a2 )
    sub_10024980(this, a2);
  *(_WORD *)(this + 40) = *(_WORD *)(a2 + 40);
  *(_DWORD *)(this + 44) = *(_DWORD *)(a2 + 44);
  *(_DWORD *)(this + 48) = *(_DWORD *)(a2 + 48);
  *(_DWORD *)(this + 52) = *(_DWORD *)(a2 + 52);
  *(_DWORD *)(this + 56) = *(_DWORD *)(a2 + 56);
  *(_DWORD *)(this + 60) = *(_DWORD *)(a2 + 60);
  *(_DWORD *)(this + 64) = *(_DWORD *)(a2 + 64);
  return this;
}
