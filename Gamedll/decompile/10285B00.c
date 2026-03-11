/*
 * func-name: ?RobotRoofUIEvent@CRobotRoofUI@@CGXPAVCREDialog@@IHPAVCREControl@@IJ@Z_0
 * func-address: 0x10285b00
 * callers: 0x10002423
 * callees: 0x1000194c, 0x10001e60, 0x100065c3, 0x10006947, 0x10006d5c, 0x10009192, 0x1000a506, 0x1000e232, 0x1000e313, 0x1000e881, 0x1000ee44, 0x1000f709, 0x100109ab, 0x100119c8, 0x100160e0, 0x100164af, 0x10017eea, 0x10017f2b, 0x10018ff2, 0x1001aae1, 0x102c9d62, 0x102c9d98, 0x102c9ea8
 */

void __stdcall CRobotRoofUI::RobotRoofUIEvent(
        struct CREDialog *a1,
        unsigned int a2,
        int a3,
        struct CREControl *a4,
        unsigned int a5,
        int a6)
{
  CRobotRoofUI *v6; // eax
  CRobotRoofUI *v7; // esi
  const wchar_t *v8; // eax
  _BYTE *v9; // ecx
  int v10; // edi
  int v11; // ecx
  int v12; // ebp
  struct CREControl *Control; // eax
  struct CREControl *v14; // ebp
  void (__thiscall **v15)(struct CREControl *, _DWORD); // ebx
  struct CREControl *v16; // eax
  struct CREControl *v17; // eax
  struct CREControl *v18; // ebp
  void (__thiscall **v19)(struct CREControl *, _DWORD); // ebx
  struct CREControl *v20; // eax
  struct CREControl *v21; // eax
  struct CREControl *v22; // ebp
  void (__thiscall **v23)(struct CREControl *, _DWORD); // ebx
  struct CREControl *v24; // eax
  struct CREControl *v25; // eax
  CItemHolder *v26; // ecx
  struct CREControl *v27; // eax
  CItemHolder *v28; // ecx
  struct GameClient::LocalCharacter *v29; // edi
  unsigned int v30; // esi
  GameClient::FuncManager *v31; // eax
  GameClient::Func_RobotReceive *Function; // eax
  _DWORD *v33; // eax
  int v34; // eax
  const wchar_t *v35; // eax
  CREEditBox *v36; // ecx
  const wchar_t *v37; // eax
  CREEditBox *v38; // ecx
  int v39; // [esp+28h] [ebp-DCh] BYREF
  int v40; // [esp+2Ch] [ebp-D8h] BYREF
  _BYTE v41[28]; // [esp+30h] [ebp-D4h] BYREF
  _BYTE v42[28]; // [esp+4Ch] [ebp-B8h] BYREF
  _BYTE v43[28]; // [esp+68h] [ebp-9Ch] BYREF
  _BYTE v44[28]; // [esp+84h] [ebp-80h] BYREF
  _BYTE v45[28]; // [esp+A0h] [ebp-64h] BYREF
  _BYTE v46[28]; // [esp+BCh] [ebp-48h] BYREF
  _DWORD v47[7]; // [esp+D8h] [ebp-2Ch] BYREF
  int v48; // [esp+100h] [ebp-4h]

  v6 = (CRobotRoofUI *)_RTDynamicCast(a1, 0, &CREDialog `RTTI Type Descriptor', &CRobotRoofUI `RTTI Type Descriptor');
  v7 = v6;
  if ( v6 )
  {
    if ( a2 == 24 )
    {
      if ( a5 )
      {
        sub_1000E232();
      }
      else
      {
        *((_BYTE *)v6 + 4019) = 0;
        std::wstring::wstring(v44, L"ROBOTROOFUI_CHANGESUITENAME");
        v48 = 0;
        Precacher::GetText(v46, v44);
        LOBYTE(v48) = 2;
        std::wstring::~wstring(v44);
        v8 = (const wchar_t *)std::wstring::c_str(v46);
        CREStatic::SetText(*((CREStatic **)v7 + 974), v8);
        *((_DWORD *)v7 + 1006) = -1;
        CRobotRoofUI::OnSelectSuite(v7, -1, 0);
        CRobotRoofUI::ClearItems(v7);
        v48 = -1;
        v9 = v46;
LABEL_51:
        std::wstring::~wstring(v9);
      }
    }
    else
    {
      if ( (unsigned int)(a3 - 21) <= 8 )
      {
        if ( a3 > 23 )
        {
          v10 = a3 - 24;
          CRobotRoofUI::SetSubWeapon(v6, a3 - 24, 0xFFFFFFFF);
        }
        else
        {
          v10 = a3 - 21;
          CRobotRoofUI::SetWeapon(v6, a3 - 21, 0xFFFFFFFF);
        }
        *((_DWORD *)v7 + 1003) = v10;
        *((_BYTE *)v7 + 4017) = 1;
      }
      if ( a2 == 522 )
      {
        v11 = *((_DWORD *)v7 + 976);
        if ( v11 )
          (*(void (__thiscall **)(int, int, _DWORD, _DWORD, unsigned int, int))(*(_DWORD *)v11 + 92))(
            v11,
            522,
            0,
            0,
            a5,
            a6);
      }
      if ( a4 == *((struct CREControl **)v7 + 971) )
      {
        switch ( a2 )
        {
          case 0x2001u:
            sub_100164AF(a5, a6 == 0);
            sub_10017F2B();
            break;
          case 0x2002u:
            sub_100065C3(a5, a6 == 0);
            sub_10017F2B();
            break;
          case 0x2003u:
            CRobotRoofUI::SelectItem(v7, a5);
            break;
          case 0x2004u:
            *((_DWORD *)v7 + 1007) = a5;
            CRobotRoofUI::SetCurItem(v7);
            break;
          default:
            break;
        }
      }
      v12 = a3 - 1;
      if ( (unsigned int)(a3 - 1) <= 0x12 )
      {
        switch ( byte_102862A0[v12] )
        {
          case 0:
            if ( *((_BYTE *)v7 + 4017) )
            {
              std::wstring::wstring(v41, L"ROBOTROOFUI_DONOTCHANGESUITE");
              v48 = 3;
              Precacher::GetText(v46, v41);
              LOBYTE(v48) = 5;
              std::wstring::~wstring(v41);
              v33 = operator new(8u);
              if ( v33 )
              {
                *v33 = &CChangeQuickSuiteMsgHandler::`vftable';
                v33[1] = v12;
              }
              v34 = CDlgMgr::Instance();
              CDlgMgr::ConfirmMessage(v34);
              v9 = v46;
              goto LABEL_50;
            }
            CRobotRoofUI::OnSelectSuite(v7, a3 - 1, 1);
            break;
          case 1:
            CRobotRoofUI::RefreshList(v7, 1u);
            Control = CREDialog::GetControl(v7, 37);
            (*(void (__thiscall **)(struct CREControl *, int))(*(_DWORD *)Control + 136))(Control, 1);
            v14 = CREDialog::GetControl(v7, 37);
            v15 = (void (__thiscall **)(struct CREControl *, _DWORD))(*(_DWORD *)v14 + 156);
            CREDialog::GetControl(v7, 11);
            v16 = CREDialog::GetControl(v7, 11);
            (*v15)(v14, *((_DWORD *)v16 + 24));
            CItemHolder::ClearCellSelection(*((CItemHolder **)v7 + 969));
            CItemHolder::ClearCellSelection(*((CItemHolder **)v7 + 970));
            break;
          case 2:
            CRobotRoofUI::RefreshList(v7, 2u);
            v17 = CREDialog::GetControl(v7, 37);
            (*(void (__thiscall **)(struct CREControl *, int))(*(_DWORD *)v17 + 136))(v17, 1);
            v18 = CREDialog::GetControl(v7, 37);
            v19 = (void (__thiscall **)(struct CREControl *, _DWORD))(*(_DWORD *)v18 + 156);
            CREDialog::GetControl(v7, 12);
            v20 = CREDialog::GetControl(v7, 12);
            (*v19)(v18, *((_DWORD *)v20 + 24));
            CItemHolder::ClearCellSelection(*((CItemHolder **)v7 + 969));
            CItemHolder::ClearCellSelection(*((CItemHolder **)v7 + 970));
            break;
          case 3:
            CRobotRoofUI::RefreshList(v7, 4u);
            v21 = CREDialog::GetControl(v7, 37);
            (*(void (__thiscall **)(struct CREControl *, int))(*(_DWORD *)v21 + 136))(v21, 1);
            v22 = CREDialog::GetControl(v7, 37);
            v23 = (void (__thiscall **)(struct CREControl *, _DWORD))(*(_DWORD *)v22 + 156);
            CREDialog::GetControl(v7, 13);
            v24 = CREDialog::GetControl(v7, 13);
            (*v23)(v22, *((_DWORD *)v24 + 24));
            CItemHolder::ClearCellSelection(*((CItemHolder **)v7 + 969));
            CItemHolder::ClearCellSelection(*((CItemHolder **)v7 + 970));
            break;
          case 4:
            if ( *((_BYTE *)v7 + 4019) )
            {
              std::wstring::wstring(v43, L"ROBOTROOFUI_CHANGESUITENAME");
              v48 = 9;
              Precacher::GetText(v47, v43);
              LOBYTE(v48) = 11;
              std::wstring::~wstring(v43);
              v37 = (const wchar_t *)std::wstring::c_str(v47);
              CREStatic::SetText(*((CREStatic **)v7 + 974), v37);
              v38 = (CREEditBox *)*((_DWORD *)v7 + 973);
              *((_BYTE *)v7 + 4019) = 0;
              CREEditBox::SetEditable(v38, 0);
              if ( CREDialog::s_pControlFocus == *((struct CREControl **)v7 + 973) )
                CREDialog::RequestFocus(v7, 0);
              std::wstring::wstring(v45, *(_DWORD *)(*((_DWORD *)v7 + 973) + 532));
              LOBYTE(v48) = 12;
              CRobotRoofUI::ChangeSuiteName((int)v45);
              LOBYTE(v48) = 11;
              std::wstring::~wstring(v45);
              v9 = v47;
            }
            else
            {
              std::wstring::wstring(v42, L"ROBOTROOFUI_SAVESUITENAME");
              v48 = 6;
              Precacher::GetText(v46, v42);
              LOBYTE(v48) = 8;
              std::wstring::~wstring(v42);
              v35 = (const wchar_t *)std::wstring::c_str(v46);
              CREStatic::SetText(*((CREStatic **)v7 + 974), v35);
              v36 = (CREEditBox *)*((_DWORD *)v7 + 973);
              *((_BYTE *)v7 + 4019) = 1;
              CREEditBox::SetEditable(v36, 1);
              CREDialog::RequestFocus(v7, *((struct CREControl **)v7 + 973));
              v9 = v46;
            }
LABEL_50:
            v48 = -1;
            goto LABEL_51;
          case 5:
            v29 = (struct GameClient::LocalCharacter *)sub_1000194C(0);
            if ( v29 )
            {
              v30 = *((_DWORD *)v7 + 1006);
              if ( v30 != -1 )
              {
                v31 = GameClient::FuncManager::Instance();
                Function = GameClient::FuncManager::GetFunction(v31, v30);
                if ( Function )
                  GameClient::Func_RobotReceive::Recycle(Function, v29);
              }
            }
            break;
          case 6:
            if ( *((_DWORD *)v7 + 968) != -1 )
              CRobotRoofUI::SaveToQuickSuite(v7, *((_DWORD *)v7 + 968));
            break;
          case 7:
            CRobotRoofUI::SubmitProduce(v7, 1);
            break;
          case 8:
            if ( a2 == 4867 )
            {
              v25 = CREDialog::GetControl(v7, 37);
              (*(void (__thiscall **)(struct CREControl *, _DWORD))(*(_DWORD *)v25 + 136))(v25, 0);
              if ( *((_DWORD *)v7 + 1003) != -1 )
              {
                CRobotRoofUI::UnSelectCell(*((_DWORD *)v7 + 998), *((_DWORD *)v7 + 1003));
                *((_DWORD *)v7 + 1003) = -1;
              }
              v26 = (CItemHolder *)*((_DWORD *)v7 + 969);
              *((_DWORD *)v7 + 1003) = a5;
              *((_DWORD *)v7 + 998) = 2;
              CItemHolder::GetXYByPos(v26, a5, &v40, &v39);
              CItemHolder::SelectCell(*((CItemHolder **)v7 + 969), v40, v39);
              CRobotRoofUI::RefreshList(v7, 8u);
              sub_1000E881(*((_DWORD *)v7 + 1003));
            }
            break;
          case 9:
            if ( a2 == 4867 )
            {
              v27 = CREDialog::GetControl(v7, 37);
              (*(void (__thiscall **)(struct CREControl *, _DWORD))(*(_DWORD *)v27 + 136))(v27, 0);
              if ( *((_DWORD *)v7 + 1003) != -1 )
              {
                CRobotRoofUI::UnSelectCell(*((_DWORD *)v7 + 998), *((_DWORD *)v7 + 1003));
                *((_DWORD *)v7 + 1003) = -1;
              }
              v28 = (CItemHolder *)*((_DWORD *)v7 + 970);
              *((_DWORD *)v7 + 1003) = a5;
              *((_DWORD *)v7 + 998) = 3;
              CItemHolder::GetXYByPos(v28, a5, &v39, &v40);
              CItemHolder::SelectCell(*((CItemHolder **)v7 + 970), v39, v40);
              CRobotRoofUI::RefreshList(v7, 0x10u);
              sub_1000E881(*((_DWORD *)v7 + 1003));
            }
            break;
        }
      }
    }
  }
}
