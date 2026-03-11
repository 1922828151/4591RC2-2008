/*
 * func-name: ?VehicleRoofUIEvent@CVehicleRoofUI@@CGXPAVCREDialog@@IHPAVCREControl@@IJ@Z_0
 * func-address: 0x102a4410
 * callers: 0x1001a311
 * callees: 0x100065c3, 0x10009494, 0x10009764, 0x10009efd, 0x1000ab82, 0x1000d51c, 0x1000e232, 0x1000e881, 0x10010389, 0x100135a2, 0x100164af, 0x10017f2b, 0x102c9d98, 0x102c9ea8
 */

void __stdcall CVehicleRoofUI::VehicleRoofUIEvent(
        struct CREDialog *a1,
        unsigned int a2,
        int a3,
        struct CREControl *a4,
        unsigned int a5,
        int a6)
{
  int v6; // esi
  unsigned int v7; // eax
  int v8; // ecx
  _DWORD *v9; // eax
  EventAttemper *v10; // eax
  EventAttemper *v11; // eax
  int v12; // ecx
  unsigned int v13; // eax
  unsigned int v14; // eax
  unsigned int *v15; // eax
  _DWORD v16[7]; // [esp-20h] [ebp-50h] BYREF
  _DWORD *v17; // [esp-4h] [ebp-34h]
  char v18[4]; // [esp+14h] [ebp-1Ch] BYREF
  int v19; // [esp+18h] [ebp-18h]
  int v20; // [esp+1Ch] [ebp-14h]
  int v21; // [esp+20h] [ebp-10h]
  int v22; // [esp+2Ch] [ebp-4h]

  v17 = 0;
  v6 = _RTDynamicCast(a1, 0, &CREDialog `RTTI Type Descriptor', &CVehicleRoofUI `RTTI Type Descriptor');
  if ( v6 )
  {
    v7 = a2;
    if ( a2 == 24 )
    {
      if ( a5 )
      {
        CVehicleRoofUI::RefreshList((CVehicleRoofUI *)v6);
        v8 = *(_DWORD *)(v6 + 3900);
        *(_DWORD *)(v6 + 3908) = -1;
        (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v8 + 128))(v8, 0);
        sub_1000E232();
        CREStatic::SetText(*(CREStatic **)(v6 + 3884), word_10324608);
        CMultiLineStatic::DeleteAllLine(*(CMultiLineStatic **)(v6 + 3888));
        v17 = 0;
        std::wstring::wstring(v16, &unk_1032460C);
        CPictureLabel::ChangeTexture(
          *(_DWORD *)(v6 + 3880),
          v16[0],
          v16[1],
          v16[2],
          v16[3],
          v16[4],
          v16[5],
          v16[6],
          v17);
        v9 = operator new(4u);
        if ( v9 )
          *v9 = &VehicleStockUpdatedObserver::`vftable';
        else
          v9 = 0;
        v17 = v9;
        v10 = (EventAttemper *)EventAttemper::Instance(19, 5311);
        *(_DWORD *)(v6 + 3912) = EventAttemper::AddObserver(v10);
      }
      else
      {
        v11 = (EventAttemper *)EventAttemper::Instance(*(_DWORD *)(v6 + 3912), 1);
        EventAttemper::RemoveObserver(v11);
        *(_DWORD *)(v6 + 3904) = -1;
      }
    }
    else
    {
      if ( a2 == 522 )
      {
        v12 = *(_DWORD *)(v6 + 3896);
        if ( v12 )
        {
          (*(void (__thiscall **)(int, int, _DWORD, _DWORD, unsigned int, int))(*(_DWORD *)v12 + 92))(
            v12,
            522,
            0,
            0,
            a5,
            a6);
          v7 = 522;
        }
      }
      if ( a4 == *(struct CREControl **)(v6 + 3892) )
      {
        v13 = v7 - 8193;
        if ( v13 )
        {
          v14 = v13 - 1;
          if ( v14 )
          {
            if ( v14 == 1 )
              CVehicleRoofUI::SelectItem((CVehicleRoofUI *)v6, a5);
          }
          else
          {
            sub_100065C3(a5, a6 == 0);
            sub_10017F2B();
            v19 = 0;
            v20 = 0;
            v21 = 0;
            v22 = 0;
            GameClient::ProductManager::Instance();
            GameClient::ProductManager::GetFlyweightID(a5, (int)v18);
            if ( !(unsigned __int8)sub_10009EFD() )
            {
              v15 = (unsigned int *)sub_1000E881(0);
              CVehicleRoofUI::SelectItem((CVehicleRoofUI *)v6, *v15);
            }
            v22 = -1;
            sub_1000D51C();
          }
        }
        else
        {
          sub_100164AF(a5, a6 == 0);
          sub_10017F2B();
        }
      }
      if ( a3 == 4 )
        CVehicleRoofUI::Submit((CVehicleRoofUI *)v6);
    }
  }
}
