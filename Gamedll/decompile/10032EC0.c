/*
 * func-name: ?SetCurrentNation@WorldObject@GameClient@@UAEXW4NATION_TYPE@@@Z_0
 * func-address: 0x10032ec0
 * callers: 0x100058e9
 * callees: none
 */

int __thiscall GameClient::WorldObject::SetCurrentNation(_DWORD *this, int a2)
{
  int result; // eax

  result = a2;
  this[27] = a2;
  return result;
}
