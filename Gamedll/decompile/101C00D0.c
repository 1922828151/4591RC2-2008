/*
 * func-name: ?OnCreate@Func_Receive@GameClient@@UAE_NPAVFlyweight@2@@Z_0
 * func-address: 0x101c00d0
 * callers: 0x100032ec
 * callees: 0x1000ee1c
 */

bool __thiscall GameClient::Func_Receive::OnCreate(GameClient::Func_Receive *this, struct GameClient::Flyweight *a2)
{
  bool result; // al

  result = GameClient::DataObject::OnCreate(this, a2);
  if ( result )
  {
    *((_DWORD *)this + 27) = *((_DWORD *)a2 + 27);
    *((_DWORD *)this + 28) = *((_DWORD *)a2 + 28);
    *((_DWORD *)this + 29) = *((_DWORD *)a2 + 29);
    *((float *)this + 30) = *((float *)a2 + 30);
    result = 1;
    *((float *)this + 31) = *((float *)a2 + 31);
  }
  return result;
}
