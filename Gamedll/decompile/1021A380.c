/*
 * func-name: sub_1021A380
 * func-address: 0x1021a380
 * callers: 0x10015dc5
 * callees: 0x10008f2b, 0x10009eb7, 0x1001055a, 0x10011abd, 0x102c9d98
 */

char __thiscall sub_1021A380(_DWORD *this, int a2)
{
  _DWORD *v3; // eax
  EventAttemper *v4; // eax
  _DWORD *v5; // eax
  EventAttemper *v6; // eax
  int v7; // eax
  bool v8; // zf
  _DWORD *v9; // eax
  EventAttemper *v10; // eax
  _DWORD *v11; // eax
  EventAttemper *v12; // eax
  struct GameClient::LocalUser *UserByIndex; // esi
  unsigned int v15; // [esp-4h] [ebp-8h]
  int v16; // [esp+0h] [ebp-4h]

  v3 = operator new(4u);
  if ( v3 )
    *v3 = &GameClient::CS_GetCharacterList_LoginWorld_Observer::`vftable';
  v4 = (EventAttemper *)EventAttemper::Instance(13, 13000);
  this[3] = EventAttemper::AddObserver(v4);
  v5 = operator new(4u);
  if ( v5 )
    *v5 = &GameClient::CS_CharacterOnline_LoginWorld_Observer::`vftable';
  v6 = (EventAttemper *)EventAttemper::Instance(13, 13004);
  v7 = EventAttemper::AddObserver(v6);
  v8 = this[5] == -1;
  this[4] = v7;
  if ( v8 )
  {
    v9 = operator new(4u);
    if ( v9 )
      *v9 = &GameClient::CGS_CharacterQuickSuite_Observer::`vftable';
    v10 = (EventAttemper *)EventAttemper::Instance(14, 14004);
    this[5] = EventAttemper::AddObserver(v10);
  }
  if ( this[6] == -1 )
  {
    v11 = operator new(4u);
    if ( v11 )
      *v11 = &GameClient::CGS_SaveCharacterQuickSuite_Observer::`vftable';
    v12 = (EventAttemper *)EventAttemper::Instance(14, 14005);
    this[6] = EventAttemper::AddObserver(v12);
  }
  UserByIndex = GameClient::LocalUserManager::GetUserByIndex(GameClient::LocalUserManager::s_pInstance, 0);
  if ( !UserByIndex )
    return 0;
  sub_10008F2B();
  LogPrintf("Send get character list.");
  sub_10011ABD(*((_DWORD *)UserByIndex + 1), v16);
  sub_10009EB7(v15);
  return 1;
}
