/*
 * func-name: ??0ChatManager@GameClient@@QAE@XZ_0
 * func-address: 0x101f3bb0
 * callers: 0x1000eab1
 * callees: 0x100013d9, 0x10008373, 0x10014001, 0x102c9d98
 */

GameClient::ChatManager *__thiscall GameClient::ChatManager::ChatManager(GameClient::ChatManager *this)
{
  char *v2; // edi
  int v3; // eax
  _DWORD *v4; // eax
  EventAttemper *v5; // eax
  EventAttemper *v6; // eax
  EventAttemper *v7; // eax
  EventAttemper *v8; // eax
  EventAttemper *v9; // eax
  EventAttemper *v10; // eax
  EventAttemper *v11; // eax
  EventAttemper *v12; // eax
  EventAttemper *v13; // eax
  _DWORD *v14; // eax
  EventAttemper *v15; // eax
  _BYTE v17[28]; // [esp+78h] [ebp-28h] BYREF
  int v18; // [esp+9Ch] [ebp-4h]

  v2 = (char *)this + 4;
  *(_DWORD *)this = &GameClient::ChatManager::`vftable';
  *((_DWORD *)this + 2) = sub_10008373();
  *((_DWORD *)v2 + 2) = 0;
  v18 = 0;
  *((_DWORD *)this + 5) = &GameClient::CAnalyzeSystem::`vftable';
  v3 = sub_100013D9();
  *((_DWORD *)this + 7) = v3;
  *(_BYTE *)(v3 + 21) = 1;
  *(_DWORD *)(*((_DWORD *)this + 7) + 4) = *((_DWORD *)this + 7);
  **((_DWORD **)this + 7) = *((_DWORD *)this + 7);
  *(_DWORD *)(*((_DWORD *)this + 7) + 8) = *((_DWORD *)this + 7);
  *((_DWORD *)this + 8) = 0;
  LOBYTE(v18) = 1;
  v4 = operator new(4u);
  if ( v4 )
    *v4 = &GameClient::ReceiveChatMessageObserver::`vftable';
  else
    v4 = 0;
  *((_DWORD *)this + 4) = v4;
  v5 = (EventAttemper *)EventAttemper::Instance(21, 21200);
  EventAttemper::AddObserver(v5);
  v6 = (EventAttemper *)EventAttemper::Instance(21, 21201);
  EventAttemper::AddObserver(v6);
  v7 = (EventAttemper *)EventAttemper::Instance(21, 21202);
  EventAttemper::AddObserver(v7);
  v8 = (EventAttemper *)EventAttemper::Instance(21, 21203);
  EventAttemper::AddObserver(v8);
  v9 = (EventAttemper *)EventAttemper::Instance(21, 21204);
  EventAttemper::AddObserver(v9);
  v10 = (EventAttemper *)EventAttemper::Instance(21, 21210);
  EventAttemper::AddObserver(v10);
  v11 = (EventAttemper *)EventAttemper::Instance(21, 21211);
  EventAttemper::AddObserver(v11);
  v12 = (EventAttemper *)EventAttemper::Instance(21, 21212);
  EventAttemper::AddObserver(v12);
  v13 = (EventAttemper *)EventAttemper::Instance(21, 21205);
  EventAttemper::AddObserver(v13);
  v14 = operator new(4u);
  if ( v14 )
    *v14 = &GameClient::GMKickResObserver::`vftable';
  v15 = (EventAttemper *)EventAttemper::Instance(13, 13041);
  EventAttemper::AddObserver(v15);
  std::string::string(v17, "kick");
  LOBYTE(v18) = 2;
  GameClient::CAnalyzeSystem::AddCommand((int)v17, 3);
  LOBYTE(v18) = 1;
  std::string::~string(v17);
  std::string::string(v17, "announce");
  LOBYTE(v18) = 3;
  GameClient::CAnalyzeSystem::AddCommand((int)v17, 1);
  LOBYTE(v18) = 1;
  std::string::~string(v17);
  std::string::string(v17, "say");
  LOBYTE(v18) = 4;
  GameClient::CAnalyzeSystem::AddCommand((int)v17, 2);
  LOBYTE(v18) = 1;
  std::string::~string(v17);
  return this;
}
