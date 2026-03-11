/*
 * func-name: ??0FlyweightManager@GameClient@@QAE@XZ_0
 * func-address: 0x1022e180
 * callers: 0x10008463
 * callees: 0x1000f9a7, 0x10015ded
 */

GameClient::FlyweightManager *__thiscall GameClient::FlyweightManager::FlyweightManager(
        GameClient::FlyweightManager *this)
{
  char v3; // [esp+Bh] [ebp-11h] BYREF
  GameClient::FlyweightManager *v4; // [esp+Ch] [ebp-10h]
  int v5; // [esp+18h] [ebp-4h]

  v4 = this;
  sub_1000F9A7((int)&v3, (int)&v3);
  v5 = 0;
  sub_10015DED((int)&v3, (int)&v3);
  *((_DWORD *)this + 20) = 0;
  return this;
}
