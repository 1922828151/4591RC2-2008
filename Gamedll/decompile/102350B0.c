/*
 * func-name: ?OnReadVarComplete@FProductInfo@GameClient@@UAEXXZ_0
 * func-address: 0x102350b0
 * callers: 0x10002ca2
 * callees: 0x1000ca4f, 0x10010389
 */

void __thiscall GameClient::FProductInfo::OnReadVarComplete(GameClient::FProductInfo *this)
{
  GameClient::ProductManager *v1; // eax

  v1 = GameClient::ProductManager::Instance();
  GameClient::ProductManager::RegisterProductInfoFlyweight(v1, this);
}
