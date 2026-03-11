/*
 * func-name: sub_1021B830
 * func-address: 0x1021b830
 * callers: 0x10004f52
 * callees: 0x1000169a, 0x10009eb7, 0x1000e56b, 0x1000ea25, 0x1001055a, 0x10010a32, 0x10011abd, 0x102bdcd0
 */

void __stdcall sub_1021B830(Event *a1)
{
  struct BinStream *Stream; // eax
  int v2; // ecx
  int v3; // edx
  Event *v4; // ecx
  struct BinStream *v5; // eax
  int v6; // ecx
  unsigned int v7; // edi
  unsigned int v8; // esi
  int v9; // ecx
  int v10; // edx
  unsigned int v11; // ecx
  struct GameClient::LocalUser *User; // eax
  int v13; // edi
  unsigned int i; // esi
  int v15; // esi
  unsigned int j; // esi
  struct GameClient::LocalUser *UserByIndex; // edi
  _DWORD v18[7]; // [esp-38h] [ebp-58h] BYREF
  char v19; // [esp-1Ch] [ebp-3Ch] BYREF
  int v20; // [esp-18h] [ebp-38h]
  int v21; // [esp-14h] [ebp-34h]
  int v22; // [esp-10h] [ebp-30h]
  int v23; // [esp-Ch] [ebp-2Ch]
  int v24; // [esp-8h] [ebp-28h]
  unsigned int v25; // [esp-4h] [ebp-24h]
  int v26; // [esp+0h] [ebp-20h]
  _DWORD *v27; // [esp+10h] [ebp-10h]
  int v28; // [esp+1Ch] [ebp-4h]

  Stream = Event::GetStream(a1);
  v2 = *((_DWORD *)Stream + 3);
  v3 = v2 + 4;
  if ( (unsigned int)(v2 + 4) > *((_DWORD *)Stream + 2) )
  {
    v4 = a1;
  }
  else
  {
    v4 = *(Event **)(v2 + *((_DWORD *)Stream + 1));
    *((_DWORD *)Stream + 3) = v3;
  }
  if ( v4 )
  {
    LogPrintf("Connect gate failed. ErrorCode: %d", v4);
  }
  else
  {
    v5 = Event::GetStream(a1);
    v6 = *((_DWORD *)v5 + 3);
    v7 = *((_DWORD *)v5 + 2);
    if ( v6 + 4 > v7 )
    {
      v8 = (unsigned int)a1;
    }
    else
    {
      v8 = *(_DWORD *)(v6 + *((_DWORD *)v5 + 1));
      *((_DWORD *)v5 + 3) = v6 + 4;
    }
    v9 = *((_DWORD *)v5 + 3);
    v10 = v9 + 4;
    if ( v9 + 4 > v7 )
    {
      v11 = (unsigned int)a1;
    }
    else
    {
      v11 = *(_DWORD *)(v9 + *((_DWORD *)v5 + 1));
      *((_DWORD *)v5 + 3) = v10;
    }
    User = GameClient::LocalUserManager::GetUser(GameClient::LocalUserManager::s_pInstance, v11);
    if ( User )
    {
      v25 = v8;
      *((_DWORD *)User + 9) = v8;
      sub_1000E56B(v25, v26);
      sub_1000169A(v25);
      LogPrintf("connect gate success. GateID: %d", v8);
      v13 = 0;
      for ( i = 0; i < GameClient::LocalUserManager::GetUserCount(GameClient::LocalUserManager::s_pInstance); ++i )
      {
        if ( *((_DWORD *)GameClient::LocalUserManager::GetUserByIndex(GameClient::LocalUserManager::s_pInstance, i) + 9) != -1 )
          ++v13;
      }
      std::string::string(&v19, "Game.AIUser");
      v27 = v18;
      v28 = 0;
      std::string::string(v18, "AIUserCharacterCount");
      LOBYTE(v28) = 1;
      Engine::Instance(v18[0]);
      v28 = -1;
      v15 = sub_102BDCD0(v18[0], v18[1], v18[2], v18[3], v18[4], v18[5], v18[6], v19, v20, v21, v22, v23, v24, v25);
      if ( v13 == GameClient::LocalUserManager::GetUserCount(GameClient::LocalUserManager::s_pInstance) && v13 == v15 )
      {
        for ( j = 0; j < GameClient::LocalUserManager::GetUserCount(GameClient::LocalUserManager::s_pInstance); ++j )
        {
          UserByIndex = GameClient::LocalUserManager::GetUserByIndex(GameClient::LocalUserManager::s_pInstance, j);
          LogPrintf("Send get character list.");
          sub_10011ABD(*((_DWORD *)UserByIndex + 1), v26);
          sub_10009EB7(v25);
        }
      }
    }
  }
}
