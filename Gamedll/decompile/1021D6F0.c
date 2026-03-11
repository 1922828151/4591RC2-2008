/*
 * func-name: ??0BattleFieldManager@GameClient@@QAE@XZ_0
 * func-address: 0x1021d6f0
 * callers: 0x1001394e
 * callees: 0x100109f6, 0x1001118a, 0x102c9d98
 */

GameClient::BattleFieldManager *__thiscall GameClient::BattleFieldManager::BattleFieldManager(
        GameClient::BattleFieldManager *this)
{
  _DWORD *v2; // eax
  EventAttemper *v3; // eax
  _DWORD *v4; // eax
  EventAttemper *v5; // eax
  char v7; // [esp+13h] [ebp-11h] BYREF
  GameClient::BattleFieldManager *v8; // [esp+14h] [ebp-10h]
  int v9; // [esp+20h] [ebp-4h]

  v8 = this;
  *(_DWORD *)this = &GameClient::BattleFieldManager::`vftable';
  sub_100109F6((int)&v7, (int)&v7);
  v9 = 0;
  sub_1001118A((int)&v7, (int)&v7);
  LOBYTE(v9) = 1;
  v2 = operator new(4u);
  if ( v2 )
    *v2 = &GameClient::MapInfoObserver::`vftable';
  v3 = (EventAttemper *)EventAttemper::Instance(17, 17008);
  EventAttemper::AddObserver(v3);
  v4 = operator new(4u);
  if ( v4 )
    *v4 = &GameClient::MapStatusObserver::`vftable';
  v5 = (EventAttemper *)EventAttemper::Instance(18, 18021);
  EventAttemper::AddObserver(v5);
  return this;
}
