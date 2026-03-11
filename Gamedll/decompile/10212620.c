/*
 * func-name: sub_10212620
 * func-address: 0x10212620
 * callers: 0x1000ad30
 * callees: 0x100010f5, 0x10001438, 0x10004886, 0x1000766c, 0x10009e6c, 0x1001055a, 0x10018949, 0x102bdcd0
 */

void __stdcall sub_10212620(int a1)
{
  int v1; // esi
  Outpop::Message::Message *v2; // ecx
  bool v3; // bl
  Outpop::Message::Message *v4; // ecx
  unsigned __int16 result; // ax
  int i; // ebp
  int v7; // esi
  int v8; // eax
  _DWORD v9[7]; // [esp-24h] [ebp-68h] BYREF
  char v10; // [esp-8h] [ebp-4Ch] BYREF
  int v11; // [esp-4h] [ebp-48h]
  int v12; // [esp+0h] [ebp-44h]
  int v13; // [esp+4h] [ebp-40h]
  int v14; // [esp+8h] [ebp-3Ch]
  float v15; // [esp+Ch] [ebp-38h]
  int v16; // [esp+10h] [ebp-34h]
  int v17; // [esp+28h] [ebp-1Ch] BYREF
  Outpop::Utility::Ref_Object *v18; // [esp+2Ch] [ebp-18h] BYREF
  Outpop::Utility::Ref_Object *v19[2]; // [esp+30h] [ebp-14h] BYREF
  int v20; // [esp+40h] [ebp-4h]

  v1 = a1;
  v2 = *(Outpop::Message::Message **)Event::GetAckMessage(a1, &v18);
  v20 = 0;
  v3 = Outpop::Message::Message::get_result(v2) != 0;
  v20 = -1;
  if ( v18 )
    Outpop::Utility::Ref_Object::release(v18);
  if ( v3 )
  {
    v4 = *(Outpop::Message::Message **)Event::GetAckMessage(v1, &v18);
    v20 = 1;
    result = Outpop::Message::Message::get_result(v4);
    LogPrintf("Get battle list is failed. Error code: %d", result);
    v20 = -1;
    if ( v18 )
      Outpop::Utility::Ref_Object::release(v18);
  }
  else
  {
    LogPrintf("Get battle list is success.");
    GameClient::BattleFieldManager::ClearBattleField(GameClient::BattleFieldManager::s_pInstance);
    Event::GetAckMessage(v1, &v18);
    v20 = 2;
    sub_100010F5((int)&v17);
    v20 = -1;
    if ( v18 )
      Outpop::Utility::Ref_Object::release(v18);
    for ( i = 0; i < v17; ++i )
    {
      Event::GetAckMessage(v1, v19);
      v20 = 3;
      sub_100010F5((int)&a1);
      v20 = -1;
      if ( v19[0] )
        Outpop::Utility::Ref_Object::release(v19[0]);
      GameClient::BattleFieldManager::AddBattleField(
        GameClient::BattleFieldManager::s_pInstance,
        (const struct GameClient::BATTLE_FIELD *)&a1);
      GameClient::BattleFieldManager::RequestMapInfo(GameClient::BattleFieldManager::s_pInstance, a1);
    }
    v18 = (Outpop::Utility::Ref_Object *)&v10;
    std::string::string(&v10, "Game.AIUser");
    v19[1] = (Outpop::Utility::Ref_Object *)v9;
    v20 = 4;
    std::string::string(v9, "AIUserCharacterBattel");
    LOBYTE(v20) = 5;
    Engine::Instance(v9[0]);
    v20 = -1;
    v7 = sub_102BDCD0(v9[0], v9[1], v9[2], v9[3], v9[4], v9[5], v9[6], v10, v11, v12, v13, v14, LODWORD(v15), v16);
    if ( v7 )
    {
      *((_DWORD *)GameClient::LocalUserManager::GetUserByIndex(GameClient::LocalUserManager::s_pInstance, 0) + 20) = v7;
      v16 = *(_DWORD *)(sub_10009E6C() + 32);
      sub_10009E6C();
      sub_10004886(v16);
    }
    v16 = 0;
    v15 = 0.0;
    v8 = EventAttemper::Instance(9, 2100);
    EventAttemper::AddEvent(v8);
  }
}
