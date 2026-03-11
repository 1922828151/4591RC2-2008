/*
 * func-name: sub_1021A670
 * func-address: 0x1021a670
 * callers: 0x1000596b
 * callees: 0x10004b38, 0x100075b3, 0x1001055a, 0x10011abd, 0x10016a4f, 0x10016a72, 0x10016c02, 0x102c9d98, 0x102c9ea8
 */

char __userpurge sub_1021A670@<al>(_DWORD *a1@<ecx>, int a2@<ebp>, int a3)
{
  _DWORD *v4; // eax
  EventAttemper *v5; // eax
  _DWORD *v6; // eax
  EventAttemper *v7; // eax
  _DWORD *v8; // eax
  EventAttemper *v9; // eax
  _DWORD *v10; // eax
  EventAttemper *v11; // eax
  _DWORD *v12; // eax
  EventAttemper *v13; // eax
  int *UserByIndex; // esi
  int v16; // edi
  CDlgMgr *v17; // eax
  struct CTYDialog *Dialog; // eax
  CBattleFieldDetailUI *v19; // ebx
  GUISystem *v20; // eax
  CDlgMgr *v21; // eax
  unsigned int v22; // [esp+34h] [ebp-2Ch]
  int v23; // [esp+38h] [ebp-28h]
  char v24; // [esp+3Ch] [ebp-24h]
  unsigned int v25; // [esp+40h] [ebp-20h]
  int v26; // [esp+44h] [ebp-1Ch]
  int v27; // [esp+5Ch] [ebp-4h]
  int retaddr; // [esp+60h] [ebp+0h] BYREF

  v4 = operator new(4u);
  if ( v4 )
    *v4 = &GameClient::BS_GetEntrys_UserEntry_Observer::`vftable';
  v5 = (EventAttemper *)EventAttemper::Instance(17, 17012);
  a1[3] = EventAttemper::AddObserver(v5);
  v6 = operator new(4u);
  if ( v6 )
    *v6 = &GameClient::QS_ApplyEnter_UserEntry_Observer::`vftable';
  v7 = (EventAttemper *)EventAttemper::Instance(18, 18000);
  a1[4] = EventAttemper::AddObserver(v7);
  v8 = operator new(4u);
  if ( v8 )
    *v8 = &GameClient::QS_Update_Queue_Pos_Observer::`vftable';
  v9 = (EventAttemper *)EventAttemper::Instance(18, 18011);
  a1[5] = EventAttemper::AddObserver(v9);
  v10 = operator new(4u);
  if ( v10 )
    *v10 = &GameClient::QS_Query_Queue_Pos_Observer::`vftable';
  v11 = (EventAttemper *)EventAttemper::Instance(18, 18003);
  a1[6] = EventAttemper::AddObserver(v11);
  v12 = operator new(4u);
  if ( v12 )
    *v12 = &GameClient::QS_Cancel_Queue_Observer::`vftable';
  v13 = (EventAttemper *)EventAttemper::Instance(18, 18004);
  a1[7] = EventAttemper::AddObserver(v13);
  UserByIndex = (int *)GameClient::LocalUserManager::GetUserByIndex(GameClient::LocalUserManager::s_pInstance, 0);
  if ( !UserByIndex )
    return 0;
  v16 = sub_10016A4F(UserByIndex[19]);
  if ( !v16 )
    return 0;
  v17 = (CDlgMgr *)CDlgMgr::Instance();
  Dialog = CDlgMgr::GetDialog(v17);
  v19 = (CBattleFieldDetailUI *)_RTDynamicCast(Dialog, &CBattleFieldDetailUI `RTTI Type Descriptor', 0, a2);
  v20 = (GUISystem *)GUISystem::Instance();
  GUISystem::GetLogicMousePos(v20, (struct tagPOINT *)&retaddr);
  if ( v19 )
  {
    CBattleFieldDetailUI::Show(v19, v27, retaddr);
    CBattleFieldDetailUI::SetCurrentMap(v19, UserByIndex[20]);
  }
  v21 = (CDlgMgr *)CDlgMgr::Instance();
  CDlgMgr::ShowDialog(v21);
  LogPrintf("Send get entry list.");
  v24 = *(_BYTE *)(v16 + 48);
  sub_10011ABD(UserByIndex[1], UserByIndex[20]);
  sub_100075B3(v22, v23, v24, 2, 0);
  sub_10011ABD(UserByIndex[1], UserByIndex[20]);
  sub_10004B38(v25, v26);
  return 1;
}
