/*
 * func-name: sub_102177C0
 * func-address: 0x102177c0
 * callers: 0x100145f6
 * callees: 0x10005655, 0x10012aee, 0x100167b6, 0x10017c29
 */

char __thiscall sub_102177C0(_DWORD *this)
{
  EventAttemper *v2; // eax
  EventAttemper *v3; // eax
  GameClient::GroupManager *v4; // eax
  int v5; // esi
  CDlgMgr *v6; // eax
  CDlgMgr *v7; // eax
  CDlgMgr *v8; // eax
  CDlgMgr *v9; // eax
  CDlgMgr *v10; // eax
  CDlgMgr *v11; // eax
  CDlgMgr *v12; // eax
  CDlgMgr *v13; // eax
  CDlgMgr *v14; // eax
  CDlgMgr *v15; // eax
  int v16; // eax
  CDlgMgr *v17; // eax

  v2 = (EventAttemper *)EventAttemper::Instance(this[6], 1);
  EventAttemper::RemoveObserver(v2);
  v3 = (EventAttemper *)EventAttemper::Instance(this[7], 1);
  EventAttemper::RemoveObserver(v3);
  (*(void (__thiscall **)(int))(*(_DWORD *)dword_103B6064 + 12))(dword_103B6064);
  v4 = GameClient::GroupManager::Instance();
  GameClient::GroupManager::Clear(v4);
  v5 = *(_DWORD *)(dword_103B665C + 4);
  if ( v5 )
  {
    (*(void (__thiscall **)(_DWORD))(*(_DWORD *)v5 + 8))(*(_DWORD *)(dword_103B665C + 4));
    (**(void (__thiscall ***)(int, int))v5)(v5, 1);
    *(_DWORD *)(dword_103B665C + 4) = 0;
  }
  v6 = (CDlgMgr *)CDlgMgr::Instance();
  CDlgMgr::HideAllUI(v6);
  v7 = (CDlgMgr *)CDlgMgr::Instance();
  CDlgMgr::RemoveDialog(v7);
  v8 = (CDlgMgr *)CDlgMgr::Instance();
  CDlgMgr::RemoveDialog(v8);
  v9 = (CDlgMgr *)CDlgMgr::Instance();
  CDlgMgr::RemoveDialog(v9);
  v10 = (CDlgMgr *)CDlgMgr::Instance();
  CDlgMgr::RemoveDialog(v10);
  v11 = (CDlgMgr *)CDlgMgr::Instance();
  CDlgMgr::RemoveDialog(v11);
  v12 = (CDlgMgr *)CDlgMgr::Instance();
  CDlgMgr::RemoveDialog(v12);
  v13 = (CDlgMgr *)CDlgMgr::Instance();
  CDlgMgr::RemoveDialog(v13);
  v14 = (CDlgMgr *)CDlgMgr::Instance();
  CDlgMgr::RemoveDialog(v14);
  v15 = (CDlgMgr *)CDlgMgr::Instance();
  CDlgMgr::RemoveDialog(v15);
  v16 = *(_DWORD *)(CDlgMgr::Instance() + 20);
  if ( v16 && !*(_BYTE *)(v16 + 4004) )
  {
    v17 = (CDlgMgr *)CDlgMgr::Instance();
    CDlgMgr::EndMessage(v17);
  }
  sub_10012AEE();
  sub_10005655();
  return 1;
}
