/*
 * func-name: ??0EstabControllerManager@GameClient@@QAE@XZ_0
 * func-address: 0x101bd490
 * callers: 0x1001708a
 * callees: 0x1000429b, 0x1000ff33
 */

GameClient::EstabControllerManager *__thiscall GameClient::EstabControllerManager::EstabControllerManager(
        GameClient::EstabControllerManager *this)
{
  char v3; // [esp+Bh] [ebp-11h] BYREF
  GameClient::EstabControllerManager *v4; // [esp+Ch] [ebp-10h]
  int v5; // [esp+18h] [ebp-4h]

  v4 = this;
  *(_DWORD *)this = &GameClient::EstabControllerManager::`vftable';
  sub_1000429B((int)&v3, (int)&v3);
  v5 = 0;
  GameClient::EstabControllerManager::InitController(this);
  return this;
}
