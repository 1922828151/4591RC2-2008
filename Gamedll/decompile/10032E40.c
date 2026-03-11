/*
 * func-name: ?SetLocal@WorldObject@GameClient@@QAEX_N@Z_0
 * func-address: 0x10032e40
 * callers: 0x10008049
 * callees: none
 */

void __thiscall GameClient::WorldObject::SetLocal(GameClient::WorldObject *this, bool a2)
{
  *((_BYTE *)this + 100) = a2;
}
