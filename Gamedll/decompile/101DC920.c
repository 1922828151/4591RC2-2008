/*
 * func-name: ??0BattleFieldManager@GameClient@@QAE@ABV01@@Z_0
 * func-address: 0x101dc920
 * callers: 0x100112e8
 * callees: 0x10008ec2, 0x100124d6
 */

GameClient::BattleFieldManager *__thiscall GameClient::BattleFieldManager::BattleFieldManager(
        GameClient::BattleFieldManager *this,
        const struct GameClient::BattleFieldManager *a2)
{
  *(_DWORD *)this = &GameClient::BattleFieldManager::`vftable';
  sub_100124D6((int)a2 + 4);
  sub_10008EC2((int)a2 + 44);
  return this;
}
