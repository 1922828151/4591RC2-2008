/*
 * func-name: ?SetFlyweight@DataObject@GameClient@@UAEXPAVFlyweight@2@@Z_0
 * func-address: 0x10032d00
 * callers: 0x1000ab41
 * callees: none
 */

void __thiscall GameClient::DataObject::SetFlyweight(GameClient::DataObject *this, struct GameClient::Flyweight *a2)
{
  *((_DWORD *)this + 2) = a2;
}
