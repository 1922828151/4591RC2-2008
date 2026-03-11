/*
 * func-name: ?SetOwner@Function@GameClient@@QAEXPAVWorldObject@2@@Z_0
 * func-address: 0x10033fa0
 * callers: 0x1000d0d0
 * callees: none
 */

void __thiscall GameClient::Function::SetOwner(GameClient::Function *this, struct GameClient::WorldObject *a2)
{
  *((_DWORD *)this + 7) = a2;
}
