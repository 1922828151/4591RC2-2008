/*
 * func-name: ?OnCreate@Seat@GameClient@@UAE_NPAVFlyweight@2@@Z_0
 * func-address: 0x101b0bb0
 * callers: 0x10008094
 * callees: 0x1000ee1c
 */

bool __thiscall GameClient::Seat::OnCreate(GameClient::Seat *this, struct GameClient::Flyweight *a2)
{
  bool result; // al

  result = GameClient::DataObject::OnCreate(this, a2);
  if ( result )
  {
    *((_DWORD *)this + 6) = a2;
    *((_DWORD *)this + 4) = *((_DWORD *)a2 + 27);
    *((float *)this + 47) = *((float *)a2 + 68);
    return 1;
  }
  return result;
}
