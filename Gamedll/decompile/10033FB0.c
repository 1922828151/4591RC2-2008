/*
 * func-name: ?GetOwner@Function@GameClient@@QAEPAVWorldObject@2@XZ_0
 * func-address: 0x10033fb0
 * callers: 0x1000ae39
 * callees: none
 */

struct GameClient::WorldObject *__thiscall GameClient::Function::GetOwner(GameClient::Function *this)
{
  return (struct GameClient::WorldObject *)*((_DWORD *)this + 7);
}
