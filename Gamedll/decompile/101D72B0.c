/*
 * func-name: sub_101D72B0
 * func-address: 0x101d72b0
 * callers: 0x1001a091
 * callees: 0x102c9d62
 */

_DWORD *__thiscall sub_101D72B0(_DWORD *this)
{
  int v2; // eax
  char v4[28]; // [esp+8h] [ebp-90h] BYREF
  char Buffer[100]; // [esp+24h] [ebp-74h] BYREF
  int v6; // [esp+94h] [ebp-4h]

  *this = &GameClient::LogicCore::`vftable';
  this[1] = 0;
  this[2] = 1041;
  sprintf(Buffer, "%d", 1041);
  std::string::string(v4, Buffer);
  v6 = 0;
  v2 = Engine::Instance(v4);
  Engine::SetVersion(v2);
  v6 = -1;
  std::string::~string(v4);
  LogPrintf("Version : %s", Buffer);
  return this;
}
