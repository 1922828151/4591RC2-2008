/*
 * func-name: ?OnCreate@DataObject@GameClient@@UAE_NPAVFlyweight@2@@Z_0
 * func-address: 0x10159150
 * callers: 0x1000ee1c
 * callees: none
 */

char __thiscall GameClient::DataObject::OnCreate(GameClient::DataObject *this, struct GameClient::Flyweight *a2)
{
  if ( !a2 )
    return 0;
  *((_DWORD *)this + 2) = a2;
  *((_DWORD *)this + 1) = *((_DWORD *)a2 + 12);
  return 1;
}
