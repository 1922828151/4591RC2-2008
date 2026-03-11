/*
 * func-name: ?IsLocal@WorldObject@GameClient@@QBE_NXZ_0
 * func-address: 0x1019b870
 * callers: 0x10006a19
 * callees: none
 */

BOOL __thiscall GameClient::WorldObject::IsLocal(GameClient::WorldObject *this)
{
  int v1; // eax

  v1 = *((_DWORD *)this + 5);
  return v1 && *(_BYTE *)(v1 + 212);
}
