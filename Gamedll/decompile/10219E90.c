/*
 * func-name: sub_10219E90
 * func-address: 0x10219e90
 * callers: 0x10019498
 * callees: 0x10002aea, 0x1000516e, 0x10009caa, 0x1000a097, 0x1000aa9c, 0x1000b992, 0x1000d6de, 0x1001055a, 0x10011abd, 0x10018863, 0x10018e71, 0x102bdf50, 0x102c9d98
 */

char __thiscall sub_10219E90(int *this, int a2)
{
  _DWORD *v3; // eax
  EventAttemper *v4; // eax
  CameraHandler *v5; // eax
  struct GameClient::LocalUser *UserByIndex; // esi
  CDlgMgr *v8; // eax
  CMiniWorldMapUI *v9; // eax
  CMiniWorldMapUI *v10; // eax
  CDlgMgr *v11; // eax
  CHallMapUI *v12; // eax
  CHallMapUI *v13; // eax
  CDlgMgr *v14; // eax
  CBattleFieldDetailUI *v15; // eax
  CBattleFieldDetailUI *v16; // eax
  CDlgMgr *v17; // eax
  CDlgMgr *v18; // eax
  CTYDialog *Dialog; // eax
  CDlgMgr *v20; // eax
  CDlgMgr *v21; // eax
  CDlgMgr *v22; // eax
  int v23; // [esp-28h] [ebp-D8h]
  _DWORD v24[7]; // [esp-24h] [ebp-D4h] BYREF
  char v25; // [esp-8h] [ebp-B8h] BYREF
  int v26; // [esp-4h] [ebp-B4h]
  int v27; // [esp+0h] [ebp-B0h]
  int v28; // [esp+4h] [ebp-ACh]
  int v29; // [esp+8h] [ebp-A8h]
  int v30; // [esp+Ch] [ebp-A4h]
  int v31; // [esp+10h] [ebp-A0h]
  char v32[4]; // [esp+14h] [ebp-9Ch] BYREF
  int v33; // [esp+18h] [ebp-98h]
  int v34; // [esp+1Ch] [ebp-94h]
  int v35; // [esp+20h] [ebp-90h]
  int v36; // [esp+24h] [ebp-8Ch]
  int v37; // [esp+28h] [ebp-88h]
  int v38; // [esp+2Ch] [ebp-84h]
  unsigned int v39; // [esp+30h] [ebp-80h]
  struct CTYDialog *v40; // [esp+34h] [ebp-7Ch]
  char *v41; // [esp+44h] [ebp-6Ch]
  _DWORD *v42; // [esp+48h] [ebp-68h]
  int v43[3]; // [esp+4Ch] [ebp-64h] BYREF
  float v44[3]; // [esp+58h] [ebp-58h] BYREF
  _DWORD v45[16]; // [esp+64h] [ebp-4Ch] BYREF
  int v46; // [esp+ACh] [ebp-4h]

  v3 = operator new(4u);
  if ( v3 )
    *v3 = &GameClient::BS_GetBattleFieldList_LoginWorld_Observer::`vftable';
  else
    v3 = 0;
  v39 = (unsigned int)v3;
  v4 = (EventAttemper *)EventAttemper::Instance(17, 17006);
  this[3] = EventAttemper::AddObserver(v4);
  if ( a2 != 3 )
  {
    *((_BYTE *)Game::Instance() + 6) = 0;
    v39 = *((unsigned int *)this + 2);
    v41 = &v25;
    std::string::string(&v25, "Game.User");
    v42 = v24;
    v46 = 0;
    std::string::string(v24, "SelBattleWorld");
    LOBYTE(v46) = 1;
    Engine::Instance(v32);
    v46 = -1;
    sub_102BDF50(v23, v24[0], v24[1], v24[2], v24[3], v24[4], v24[5], v24[6], v25, v26, v27, v28, v29, v30, v31);
    v46 = 2;
    Game::Instance();
    v46 = -1;
    Game::NewMap(v32[0], v33, v34, v35, v36, v37, v38, v39);
    *(float *)v43 = -1.0;
    *(float *)&v43[1] = -1.0;
    *(float *)&v43[2] = -1.0;
    v44[0] = 10.0;
    v44[1] = 10.0;
    v44[2] = 10.0;
    *(float *)&v39 = 90.0;
    *(float *)&v38 = 0.0;
    v37 = sub_10018E71(v45, (int)v43);
    v36 = (int)v44;
    v5 = CameraHandler::Instance();
    CameraHandler::setToView(v5, (struct Vector *)v36, (struct Matrix *)v37, *(float *)&v38, *(float *)&v39);
    *((_BYTE *)Game::Instance() + 6) = 1;
  }
  UserByIndex = GameClient::LocalUserManager::GetUserByIndex(GameClient::LocalUserManager::s_pInstance, 0);
  if ( !UserByIndex )
    return 0;
  LogPrintf("Send get world list.");
  sub_10011ABD(*((_DWORD *)UserByIndex + 1), (int)v40);
  sub_10002AEA(v39);
  if ( a2 != 3 )
  {
    v39 = 18;
    v8 = (CDlgMgr *)CDlgMgr::Instance();
    if ( !CDlgMgr::GetDialog(v8) )
    {
      v9 = (CMiniWorldMapUI *)operator new(0xF30u);
      v46 = 3;
      if ( v9 )
        v10 = CMiniWorldMapUI::CMiniWorldMapUI(v9);
      else
        v10 = 0;
      v39 = (unsigned int)v10;
      v46 = -1;
      v11 = (CDlgMgr *)CDlgMgr::Instance();
      CDlgMgr::AddDialog(v11, v40);
      v12 = (CHallMapUI *)operator new(0xF40u);
      v46 = 4;
      if ( v12 )
        v13 = CHallMapUI::CHallMapUI(v12);
      else
        v13 = 0;
      v39 = (unsigned int)v13;
      v46 = -1;
      v14 = (CDlgMgr *)CDlgMgr::Instance();
      CDlgMgr::AddDialog(v14, v40);
      v15 = (CBattleFieldDetailUI *)operator new(0xFA8u);
      v46 = 5;
      if ( v15 )
        v16 = CBattleFieldDetailUI::CBattleFieldDetailUI(v15);
      else
        v16 = 0;
      v39 = (unsigned int)v16;
      v46 = -1;
      v17 = (CDlgMgr *)CDlgMgr::Instance();
      CDlgMgr::AddDialog(v17, v40);
    }
    v39 = 18;
    v18 = (CDlgMgr *)CDlgMgr::Instance();
    Dialog = CDlgMgr::GetDialog(v18);
    if ( !(unsigned __int8)CTYDialog::GetVisible(Dialog) )
    {
      v20 = (CDlgMgr *)CDlgMgr::Instance();
      CDlgMgr::HideAllUI(v20);
      *(float *)&v39 = 0.5;
      v38 = 1;
      v37 = 1;
      v36 = 18;
      v21 = (CDlgMgr *)CDlgMgr::Instance();
      CDlgMgr::ShowDialog(v21);
      *(float *)&v39 = 0.5;
      v38 = 1;
      v37 = 1;
      v36 = 20;
      v22 = (CDlgMgr *)CDlgMgr::Instance();
      CDlgMgr::ShowDialog(v22);
    }
  }
  return 1;
}
