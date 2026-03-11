/*
 * func-name: sub_101D74B0
 * func-address: 0x101d74b0
 * callers: 0x10004cc8
 * callees: 0x10003bf2, 0x10004557, 0x100057fe, 0x1000a506, 0x1000ae7a, 0x1000aea2, 0x1000aff6, 0x1000e56b, 0x1000fe34, 0x10014f38, 0x10017300, 0x10017544, 0x10017c29, 0x10019826
 */

char __thiscall sub_101D74B0(void *this)
{
  DWORD TickCount; // eax
  GameClient::FlyweightManager *v3; // eax
  int v5; // [esp+0h] [ebp-8h]
  int v6; // [esp+0h] [ebp-8h]
  int v7; // [esp+0h] [ebp-8h]
  int v8; // [esp+0h] [ebp-8h]
  int v9; // [esp+4h] [ebp-4h] BYREF

  TickCount = GetTickCount();
  srand(TickCount);
  sub_1000E56B(v5, v9);
  sub_1000AEA2(v6, v9);
  if ( (unsigned __int8)sub_1000FE34(v7, 0)
    && (*(unsigned __int8 (__thiscall **)(int, int *))(*(_DWORD *)dword_103B6670 + 4))(dword_103B6670, &v9)
    && GameClient::FlyweightManager::CreateInstance()
    && (v3 = GameClient::FlyweightManager::Instance(), GameClient::FlyweightManager::Initialize(v3))
    && (unsigned __int8)sub_100057FE(v8, v9)
    && (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)dword_103B6064 + 4))(dword_103B6064)
    && GameClient::BattleFieldManager::CreateInstance()
    && (*(unsigned __int8 (__thiscall **)(GameClient::BattleFieldManager *))(*(_DWORD *)GameClient::BattleFieldManager::s_pInstance
                                                                           + 4))(GameClient::BattleFieldManager::s_pInstance)
    && GameClient::LocalUserManager::CreateInstance()
    && (*(unsigned __int8 (__thiscall **)(GameClient::LocalUserManager *))(*(_DWORD *)GameClient::LocalUserManager::s_pInstance
                                                                         + 4))(GameClient::LocalUserManager::s_pInstance)
    && GameClient::DamageManager::CreateInstance()
    && GameClient::DamageManager::Initialize(GameClient::DamageManager::ms_pInstance) )
  {
    GameClient::FuncManager::Instance();
    GameClient::GroupManager::Instance();
    GameClient::ChatManager::Instance();
    return 1;
  }
  else
  {
    (*(void (__thiscall **)(void *))(*(_DWORD *)this + 12))(this);
    return 0;
  }
}
