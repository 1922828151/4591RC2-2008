/*
 * func-name: ?InitUI@Game@@QAEXXZ_0
 * func-address: 0x102b5fc0
 * callers: 0x10010e97
 * callees: 0x10001852, 0x10004110, 0x1000931d, 0x1000b74e, 0x1000c28e, 0x1000d611, 0x1001204e, 0x10016ba8, 0x10016ea5, 0x10017b4d, 0x10018264, 0x1001868d, 0x10018e76, 0x1001a316, 0x102c9d98
 */

void __thiscall Game::InitUI(Game *this)
{
  CDlgMgr *v1; // eax
  CRobotRoofUI *v2; // eax
  CDlgMgr *v3; // eax
  CPasswordInputUI *v4; // eax
  CDlgMgr *v5; // eax
  COccupyEstabUI *v6; // eax
  CDlgMgr *v7; // eax
  CEstablishmentUI *v8; // eax
  CDlgMgr *v9; // eax
  CPowerTransportUI *v10; // eax
  CDlgMgr *v11; // eax
  CVehicleRoofUI *v12; // eax
  CDlgMgr *v13; // eax
  CDlgMgr *v14; // eax
  CChatInputUI *v15; // eax
  CDlgMgr *v16; // eax
  CChatMessageUI *v17; // eax
  CDlgMgr *v18; // eax
  CWaitQueueUI *v19; // eax
  CDlgMgr *v20; // eax
  CGroupMemberUI *v21; // eax
  CDlgMgr *v22; // eax
  CDlgMgr *v23; // eax
  CGroupQuickCallUI *v24; // eax
  CDlgMgr *v25; // eax
  CDlgMgr *v26; // eax
  int v27; // eax
  int v28; // eax
  int v29; // [esp+28h] [ebp-20h]
  int v30; // [esp+2Ch] [ebp-1Ch]

  v1 = (CDlgMgr *)CDlgMgr::Instance();
  CDlgMgr::InitAllUI(v1);
  v2 = (CRobotRoofUI *)operator new(0xFD8u);
  if ( v2 )
    CRobotRoofUI::CRobotRoofUI(v2);
  v3 = (CDlgMgr *)CDlgMgr::Instance();
  CDlgMgr::AddDialog(v3);
  v4 = (CPasswordInputUI *)operator new(0xF28u);
  if ( v4 )
    CPasswordInputUI::CPasswordInputUI(v4);
  v5 = (CDlgMgr *)CDlgMgr::Instance();
  CDlgMgr::AddDialog(v5);
  v6 = (COccupyEstabUI *)operator new(0xF40u);
  if ( v6 )
    COccupyEstabUI::COccupyEstabUI(v6);
  v7 = (CDlgMgr *)CDlgMgr::Instance();
  CDlgMgr::AddDialog(v7);
  v8 = (CEstablishmentUI *)operator new(0xF48u);
  if ( v8 )
    CEstablishmentUI::CEstablishmentUI(v8);
  v9 = (CDlgMgr *)CDlgMgr::Instance();
  CDlgMgr::AddDialog(v9);
  v10 = (CPowerTransportUI *)operator new(0xF30u);
  if ( v10 )
    CPowerTransportUI::CPowerTransportUI(v10);
  v11 = (CDlgMgr *)CDlgMgr::Instance();
  CDlgMgr::AddDialog(v11);
  v12 = (CVehicleRoofUI *)operator new(0xF50u);
  if ( v12 )
    CVehicleRoofUI::CVehicleRoofUI(v12);
  v13 = (CDlgMgr *)CDlgMgr::Instance();
  CDlgMgr::AddDialog(v13);
  if ( operator new(0xF40u) )
    sub_1000C28E(v29, v30);
  v14 = (CDlgMgr *)CDlgMgr::Instance();
  CDlgMgr::AddDialog(v14);
  v15 = (CChatInputUI *)operator new(0xF40u);
  if ( v15 )
    CChatInputUI::CChatInputUI(v15);
  v16 = (CDlgMgr *)CDlgMgr::Instance();
  CDlgMgr::AddDialog(v16);
  v17 = (CChatMessageUI *)operator new(0xF28u);
  if ( v17 )
    CChatMessageUI::CChatMessageUI(v17);
  v18 = (CDlgMgr *)CDlgMgr::Instance();
  CDlgMgr::AddDialog(v18);
  v19 = (CWaitQueueUI *)operator new(0xF38u);
  if ( v19 )
    CWaitQueueUI::CWaitQueueUI(v19);
  v20 = (CDlgMgr *)CDlgMgr::Instance();
  CDlgMgr::AddDialog(v20);
  v21 = (CGroupMemberUI *)operator new(0xF40u);
  if ( v21 )
    CGroupMemberUI::CGroupMemberUI(v21);
  v22 = (CDlgMgr *)CDlgMgr::Instance();
  CDlgMgr::AddDialog(v22);
  if ( operator new(0xF60u) )
    sub_10001852(v29, v30);
  v23 = (CDlgMgr *)CDlgMgr::Instance();
  CDlgMgr::AddDialog(v23);
  v24 = (CGroupQuickCallUI *)operator new(0xF48u);
  if ( v24 )
    CGroupQuickCallUI::CGroupQuickCallUI(v24);
  v25 = (CDlgMgr *)CDlgMgr::Instance();
  CDlgMgr::AddDialog(v25);
  if ( operator new(0xFA8u) )
    sub_10018264(v29, v30);
  v26 = (CDlgMgr *)CDlgMgr::Instance();
  CDlgMgr::AddDialog(v26);
  v27 = GUISystem::Instance(v29);
  v28 = GUISystem::Instance(*(_DWORD *)(v27 + 52));
  GUISystem::SetCursor(v28);
}
