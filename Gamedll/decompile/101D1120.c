/*
 * func-name: ?Enable@Aura@GameClient@@UAE_NPAVWorldObject@2@0@Z_0
 * func-address: 0x101d1120
 * callers: 0x1001762a
 * callees: none
 */

char __thiscall GameClient::Aura::Enable(
        GameClient::Aura *this,
        struct GameClient::WorldObject *a2,
        struct GameClient::WorldObject *a3)
{
  *((_DWORD *)this + 8) = a3;
  *((_DWORD *)this + 4) = *((_DWORD *)a2 + 3);
  *((_DWORD *)this + 5) = 0;
  return 1;
}
