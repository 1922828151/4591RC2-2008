/*
 * func-name: sub_1021BF70
 * func-address: 0x1021bf70
 * callers: 0x10018944
 * callees: 0x100010f5, 0x100075b3, 0x1000ea25, 0x1001055a, 0x10010a32, 0x10011abd, 0x10016a4f, 0x10018949, 0x10019c68, 0x102bdcd0, 0x102c9d50
 */

void __stdcall sub_1021BF70(int a1)
{
  int v1; // esi
  Outpop::Message::Message *v2; // ecx
  unsigned int v3; // edi
  bool v4; // bl
  Outpop::Message::Message *v5; // ecx
  unsigned __int16 result; // ax
  int i; // ebp
  int v8; // ebp
  Outpop::Message::Message **RequestMessage; // eax
  GameClient::LocalUserManager *v10; // esi
  Outpop::Message::Message *v11; // ecx
  unsigned int multi_id; // eax
  struct GameClient::LocalUser *User; // esi
  int v14; // ebx
  unsigned int j; // esi
  int *UserByIndex; // esi
  int v17; // ebp
  int v18; // edx
  int v19; // eax
  void *v20; // eax
  bool v21; // zf
  int v22; // [esp-38h] [ebp-74h] BYREF
  char v23; // [esp-34h] [ebp-70h]
  int v24; // [esp-30h] [ebp-6Ch]
  int v25; // [esp-2Ch] [ebp-68h]
  int v26; // [esp-28h] [ebp-64h]
  int v27; // [esp-24h] [ebp-60h]
  int v28; // [esp-20h] [ebp-5Ch]
  int v29; // [esp-1Ch] [ebp-58h] BYREF
  char v30; // [esp-18h] [ebp-54h]
  unsigned int v31; // [esp-14h] [ebp-50h]
  int v32; // [esp-10h] [ebp-4Ch]
  int v33; // [esp-Ch] [ebp-48h]
  int v34; // [esp-8h] [ebp-44h]
  int v35; // [esp-4h] [ebp-40h]
  int v36; // [esp+0h] [ebp-3Ch]
  Outpop::Utility::Ref_Object *v37; // [esp+14h] [ebp-28h] BYREF
  int *v38; // [esp+18h] [ebp-24h] BYREF
  Outpop::Utility::Ref_Object *v39; // [esp+1Ch] [ebp-20h]
  int v40; // [esp+20h] [ebp-1Ch] BYREF
  void *v41; // [esp+24h] [ebp-18h]
  int v42; // [esp+28h] [ebp-14h]
  int v43; // [esp+2Ch] [ebp-10h]
  int v44; // [esp+38h] [ebp-4h]
  _UNKNOWN *retaddr; // [esp+3Ch] [ebp+0h]

  v1 = a1;
  v2 = *(Outpop::Message::Message **)Event::GetAckMessage(a1, &v37);
  v3 = 0;
  v44 = 0;
  v4 = Outpop::Message::Message::get_result(v2) != 0;
  v44 = -1;
  if ( v37 )
    Outpop::Utility::Ref_Object::release(v37);
  if ( v4 )
  {
    v5 = *(Outpop::Message::Message **)Event::GetAckMessage(v1, &v37);
    v44 = 1;
    result = Outpop::Message::Message::get_result(v5);
    LogPrintf("Get battle list is failed. Error code: %d", result);
    v44 = -1;
    if ( v37 )
      Outpop::Utility::Ref_Object::release(v37);
  }
  else
  {
    Event::GetAckMessage(v1, &v37);
    v44 = 2;
    sub_100010F5((int)&a1);
    v44 = -1;
    if ( v37 )
      Outpop::Utility::Ref_Object::release(v37);
    for ( i = 0; i < a1; ++i )
    {
      Event::GetAckMessage(v1, &v37);
      v44 = 3;
      sub_100010F5((int)&v38);
      v44 = -1;
      if ( v37 )
        Outpop::Utility::Ref_Object::release(v37);
      GameClient::BattleFieldManager::AddBattleField(
        GameClient::BattleFieldManager::s_pInstance,
        (const struct GameClient::BATTLE_FIELD *)&v38);
    }
    v41 = 0;
    v42 = 0;
    v43 = 0;
    v44 = 4;
    GameClient::BattleFieldManager::GetBattleFields((int)&v40);
    v39 = (Outpop::Utility::Ref_Object *)&v29;
    std::string::string(&v29, "Game.AIUser");
    v38 = &v22;
    LOBYTE(v44) = 5;
    std::string::string(&v22, "AIUserCharacterBattel");
    LOBYTE(v44) = 6;
    Engine::Instance(v22);
    LOBYTE(retaddr) = 4;
    v8 = sub_102BDCD0(v23, v24, v25, v26, v27, v28, v29, v30, v31, v32, v33, v34, v35, v36);
    RequestMessage = (Outpop::Message::Message **)Event::GetRequestMessage(v1, &v40);
    v10 = GameClient::LocalUserManager::s_pInstance;
    v11 = *RequestMessage;
    LOBYTE(v44) = 7;
    multi_id = Outpop::Message::Message::get_multi_id(v11);
    User = GameClient::LocalUserManager::GetUser(v10, multi_id);
    LOBYTE(v44) = 4;
    if ( v39 )
      Outpop::Utility::Ref_Object::release(v39);
    if ( !User )
      goto LABEL_23;
    *((_DWORD *)User + 20) = v8;
    v14 = 0;
    for ( j = 0; j < GameClient::LocalUserManager::GetUserCount(GameClient::LocalUserManager::s_pInstance); ++j )
    {
      if ( *((_DWORD *)GameClient::LocalUserManager::GetUserByIndex(GameClient::LocalUserManager::s_pInstance, j) + 20) != -1 )
        ++v14;
    }
    if ( GameClient::LocalUserManager::GetUserCount(GameClient::LocalUserManager::s_pInstance) == v14
      && GameClient::LocalUserManager::GetUserCount(GameClient::LocalUserManager::s_pInstance) )
    {
      while ( 1 )
      {
        UserByIndex = (int *)GameClient::LocalUserManager::GetUserByIndex(GameClient::LocalUserManager::s_pInstance, v3);
        v17 = sub_10016A4F(UserByIndex[19]);
        if ( !v17 )
          break;
        LogPrintf("Send get entry list.");
        v18 = *(unsigned __int8 *)(v17 + 48);
        v19 = UserByIndex[20];
        v35 = 0;
        v34 = 0;
        v33 = v18;
        sub_10011ABD(UserByIndex[1], v19);
        sub_100075B3(v31, v32, v33, v34, v35);
        if ( ++v3 >= GameClient::LocalUserManager::GetUserCount(GameClient::LocalUserManager::s_pInstance) )
          goto LABEL_23;
      }
      v20 = v41;
      v21 = v41 == 0;
    }
    else
    {
LABEL_23:
      v20 = v41;
      v21 = v41 == 0;
    }
    if ( !v21 )
      operator delete(v20);
  }
}
