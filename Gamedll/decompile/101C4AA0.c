/*
 * func-name: ?OnCreate@Func_Sheild@GameClient@@UAE_NPAVFlyweight@2@@Z_0
 * func-address: 0x101c4aa0
 * callers: 0x100103bb
 * callees: 0x1000ee1c
 */

bool __thiscall GameClient::Func_Sheild::OnCreate(GameClient::Func_Sheild *this, struct GameClient::Flyweight *a2)
{
  bool result; // al

  result = GameClient::DataObject::OnCreate(this, a2);
  if ( result )
  {
    *((_DWORD *)this + 7) = a2;
    return 1;
  }
  return result;
}
