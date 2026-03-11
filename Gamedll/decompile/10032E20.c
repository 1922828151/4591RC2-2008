/*
 * func-name: ?SetCurrentPosition@WorldObject@GameClient@@UAEXABVVector@@@Z_0
 * func-address: 0x10032e20
 * callers: 0x10013d27
 * callees: none
 */

void __thiscall GameClient::WorldObject::SetCurrentPosition(GameClient::WorldObject *this, const struct Vector *a2)
{
  *((_DWORD *)this + 6) = *(_DWORD *)a2;
  *((_DWORD *)this + 7) = *((_DWORD *)a2 + 1);
  *((_DWORD *)this + 8) = *((_DWORD *)a2 + 2);
}
