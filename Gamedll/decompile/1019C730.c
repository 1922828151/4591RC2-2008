/*
 * func-name: ?SetFlyweight@ControlledEstab@GameClient@@UAEXPAVFlyweight@2@@Z_0
 * func-address: 0x1019c730
 * callers: 0x1000b13b
 * callees: none
 */

void __thiscall GameClient::ControlledEstab::SetFlyweight(
        GameClient::ControlledEstab *this,
        struct GameClient::Flyweight *a2)
{
  *((_DWORD *)this + 2) = a2;
  *((_DWORD *)this + 115) = a2;
}
