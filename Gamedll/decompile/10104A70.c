/*
 * func-name: ?DisplayPart@CombinActor@GameClient@@QAEX_N@Z_0
 * func-address: 0x10104a70
 * callers: 0x10013651
 * callees: none
 */

void __thiscall GameClient::CombinActor::DisplayPart(GameClient::CombinActor *this, bool a2)
{
  *((_BYTE *)this + 1388) = a2;
  *((_DWORD *)this + 62) = a2;
}
