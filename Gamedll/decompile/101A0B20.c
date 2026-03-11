/*
 * func-name: ?OnCreate@EstabDoor@GameClient@@UAE_NPAVFlyweight@2@@Z_0
 * func-address: 0x101a0b20
 * callers: 0x10009bf1
 * callees: 0x10011fd6
 */

bool __thiscall GameClient::EstabDoor::OnCreate(GameClient::EstabDoor *this, struct GameClient::Flyweight *a2)
{
  bool result; // al

  result = GameClient::NonControlledEstab::OnCreate(this, a2);
  if ( result )
  {
    *((_DWORD *)this + 118) = a2;
    return 1;
  }
  return result;
}
