/*
 * func-name: ?OnCreate@NonControlledEstab@GameClient@@UAE_NPAVFlyweight@2@@Z_0
 * func-address: 0x101b06e0
 * callers: 0x10011fd6
 * callees: 0x10004af7
 */

bool __thiscall GameClient::NonControlledEstab::OnCreate(
        GameClient::NonControlledEstab *this,
        struct GameClient::Flyweight *a2)
{
  bool result; // al

  result = GameClient::Establishment::OnCreate(this, a2);
  if ( result )
  {
    *((_DWORD *)this + 114) = a2;
    return 1;
  }
  return result;
}
