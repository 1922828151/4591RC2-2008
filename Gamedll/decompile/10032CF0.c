/*
 * func-name: ?GetFlyweight@DataObject@GameClient@@QBEPAVFlyweight@2@XZ_0
 * func-address: 0x10032cf0
 * callers: 0x1000d4cc
 * callees: none
 */

struct GameClient::Flyweight *__thiscall GameClient::DataObject::GetFlyweight(GameClient::DataObject *this)
{
  return (struct GameClient::Flyweight *)*((_DWORD *)this + 2);
}
