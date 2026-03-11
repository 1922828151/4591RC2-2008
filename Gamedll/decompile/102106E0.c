/*
 * func-name: sub_102106E0
 * func-address: 0x102106e0
 * callers: 0x1000db3e
 * callees: 0x1000169a, 0x100033dc, 0x1000369d, 0x10005655, 0x100090cf, 0x10009674, 0x10009a7f, 0x1000c7d9, 0x1000e56b, 0x1000f4d9, 0x1001055a, 0x10010f41, 0x10012aee, 0x10013e53, 0x1001623e, 0x102c9d98
 */

void __stdcall sub_102106E0(Event *a1)
{
  struct BinStream *Stream; // eax
  int v2; // ecx
  int v3; // edx
  Event *v4; // ecx
  CDlgMgr *v5; // eax
  int v6; // eax
  struct BinStream *v7; // eax
  int v8; // ecx
  unsigned int v9; // esi
  int v10; // edi
  unsigned int v11; // ecx
  CDlgMgr *v12; // eax
  CRadarMapUI *v13; // eax
  CDlgMgr *v14; // eax
  CDlgMgr *v15; // eax
  CStatusUI *v16; // eax
  CDlgMgr *v17; // eax
  CDlgMgr *v18; // eax
  CDlgMgr *v19; // eax
  CDlgMgr *v20; // eax
  CDlgMgr *v21; // eax
  CKillingInfoUI *v22; // eax
  CDlgMgr *v23; // eax
  CDlgMgr *v24; // eax
  CControlCenterListUI *v25; // eax
  CDlgMgr *v26; // eax
  CDropBagUI *v27; // eax
  CDlgMgr *v28; // eax
  CAlarmMessageUI *v29; // eax
  CDlgMgr *v30; // eax
  CDlgMgr *v31; // eax
  CDlgMgr *v32; // eax
  int v33; // eax
  CDlgMgr *v34; // eax
  int v35; // [esp+40h] [ebp-40h]
  int v36; // [esp+44h] [ebp-3Ch]
  struct CTYDialog *v37; // [esp+44h] [ebp-3Ch]
  struct CTYDialog *v38; // [esp+44h] [ebp-3Ch]
  struct CTYDialog *v39; // [esp+44h] [ebp-3Ch]
  struct CTYDialog *v40; // [esp+44h] [ebp-3Ch]
  int v41; // [esp+44h] [ebp-3Ch]
  int v42; // [esp+44h] [ebp-3Ch]
  int v43; // [esp+44h] [ebp-3Ch]
  struct CTYDialog *v44; // [esp+44h] [ebp-3Ch]
  struct CTYDialog *v45; // [esp+44h] [ebp-3Ch]
  struct CTYDialog *v46; // [esp+44h] [ebp-3Ch]
  struct CTYDialog *v47; // [esp+44h] [ebp-3Ch]
  struct CTYDialog *v48; // [esp+44h] [ebp-3Ch]
  int v49; // [esp+48h] [ebp-38h]
  _DWORD v50[7]; // [esp+58h] [ebp-28h] BYREF
  int v51; // [esp+7Ch] [ebp-4h]

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
    LogPrintf("GameServer connect failed. code: %d", v4);
    v5 = (CDlgMgr *)CDlgMgr::Instance();
    CDlgMgr::EndMessage(v5);
    std::wstring::wstring(v50, &unk_10318848);
    v51 = 0;
    v6 = CDlgMgr::Instance();
    CDlgMgr::ConfirmMessage(v6);
    v51 = -1;
    std::wstring::~wstring(v50);
  }
  else if ( GameClient::LocalUserManager::GetUserByIndex(GameClient::LocalUserManager::s_pInstance, 0) )
  {
    v7 = Event::GetStream(a1);
    v8 = *((_DWORD *)v7 + 3);
    v9 = *((_DWORD *)v7 + 2);
    if ( v8 + 4 > v9 )
    {
      v10 = (int)a1;
    }
    else
    {
      v10 = *(_DWORD *)(v8 + *((_DWORD *)v7 + 1));
      *((_DWORD *)v7 + 3) = v8 + 4;
    }
    v11 = *((_DWORD *)v7 + 3) + 4;
    if ( v11 <= v9 )
      *((_DWORD *)v7 + 3) = v11;
    sub_10009674(v10);
    sub_1000E56B(v10, v36);
    sub_1000169A(v35);
    LogPrintf("GameServer connect success.");
    v51 = 1;
    if ( operator new(0xF78u) )
      sub_100033DC((int)v37, v49);
    v12 = (CDlgMgr *)CDlgMgr::Instance();
    CDlgMgr::AddDialog(v12, v37);
    v13 = (CRadarMapUI *)operator new(0x1030u);
    v51 = 2;
    if ( v13 )
      CRadarMapUI::CRadarMapUI(v13);
    v14 = (CDlgMgr *)CDlgMgr::Instance();
    CDlgMgr::AddDialog(v14, v38);
    v51 = 3;
    if ( operator new(0xFC8u) )
      sub_10013E53((int)v39, v49);
    v15 = (CDlgMgr *)CDlgMgr::Instance();
    CDlgMgr::AddDialog(v15, v39);
    v16 = (CStatusUI *)operator new(0xFF8u);
    v51 = 4;
    if ( v16 )
      CStatusUI::CStatusUI(v16);
    v17 = (CDlgMgr *)CDlgMgr::Instance();
    CDlgMgr::AddDialog(v17, v40);
    v18 = (CDlgMgr *)CDlgMgr::Instance();
    CDlgMgr::HideAllUI(v18);
    v19 = (CDlgMgr *)CDlgMgr::Instance();
    CDlgMgr::RemoveDialog(v19, v41);
    v20 = (CDlgMgr *)CDlgMgr::Instance();
    CDlgMgr::RemoveDialog(v20, v42);
    v21 = (CDlgMgr *)CDlgMgr::Instance();
    CDlgMgr::RemoveDialog(v21, v43);
    v22 = (CKillingInfoUI *)operator new(0xF28u);
    v51 = 5;
    if ( v22 )
      CKillingInfoUI::CKillingInfoUI(v22);
    v23 = (CDlgMgr *)CDlgMgr::Instance();
    CDlgMgr::AddDialog(v23, v44);
    v51 = 6;
    if ( operator new(0xF80u) )
      sub_10009A7F((int)v45, v49);
    v24 = (CDlgMgr *)CDlgMgr::Instance();
    CDlgMgr::AddDialog(v24, v45);
    v25 = (CControlCenterListUI *)operator new(0xF48u);
    v51 = 7;
    if ( v25 )
      CControlCenterListUI::CControlCenterListUI(v25);
    v26 = (CDlgMgr *)CDlgMgr::Instance();
    CDlgMgr::AddDialog(v26, v46);
    v27 = (CDropBagUI *)operator new(0xFE8u);
    v51 = 8;
    if ( v27 )
      CDropBagUI::CDropBagUI(v27);
    v28 = (CDlgMgr *)CDlgMgr::Instance();
    CDlgMgr::AddDialog(v28, v47);
    v29 = (CAlarmMessageUI *)operator new(0xF28u);
    v51 = 9;
    if ( v29 )
      CAlarmMessageUI::CAlarmMessageUI(v29);
    v51 = -1;
    v30 = (CDlgMgr *)CDlgMgr::Instance();
    CDlgMgr::AddDialog(v30, v48);
    v31 = (CDlgMgr *)CDlgMgr::Instance();
    CDlgMgr::ShowDialog(v31);
    v32 = (CDlgMgr *)CDlgMgr::Instance();
    CDlgMgr::ShowDialog(v32);
    v33 = GUISystem::Instance();
    (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v33 + 40))(v33, 0);
    sub_10012AEE();
    sub_10005655();
    v34 = (CDlgMgr *)CDlgMgr::Instance();
    CDlgMgr::EndMessage(v34);
  }
}
