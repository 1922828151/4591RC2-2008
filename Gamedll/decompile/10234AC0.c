/*
 * func-name: ?OnReadVarComplete@FProduct@GameClient@@UAEXXZ_0
 * func-address: 0x10234ac0
 * callers: 0x10012463
 * callees: 0x10003328, 0x10010389
 */

void __thiscall GameClient::FProduct::OnReadVarComplete(GameClient::FProduct *this)
{
  GameClient::ProductManager *v1; // eax

  if ( *((_DWORD *)this + 27) )
  {
    v1 = GameClient::ProductManager::Instance();
    GameClient::ProductManager::RegisterProductFlyweight(v1, this);
  }
}
