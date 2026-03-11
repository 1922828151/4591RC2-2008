/*
 * func-name: ?OnCreate@Func_Store@GameClient@@UAE_NPAVFlyweight@2@@Z_0
 * func-address: 0x101c5090
 * callers: 0x10018d4f
 * callees: 0x1000ee1c
 */

bool __thiscall GameClient::Func_Store::OnCreate(GameClient::Func_Store *this, struct GameClient::Flyweight *a2)
{
  bool result; // al

  result = GameClient::DataObject::OnCreate(this, a2);
  if ( result )
  {
    *((_DWORD *)this + 17) = *((_DWORD *)a2 + 27);
    *((_DWORD *)this + 19) = *((_DWORD *)a2 + 28);
    return 1;
  }
  return result;
}
