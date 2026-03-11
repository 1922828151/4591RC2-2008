/*
 * func-name: ?BeLocked@WorldObject@GameClient@@QAEX_N@Z_0
 * func-address: 0x10032ef0
 * callers: 0x1000d9ef
 * callees: none
 */

void __thiscall GameClient::WorldObject::BeLocked(GameClient::WorldObject *this, bool a2)
{
  *((_BYTE *)this + 116) = a2;
}
