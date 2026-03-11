/*
 * func-name: ?DropBagUIEvent@CDropBagUI@@CGXPAVCREDialog@@IHPAVCREControl@@IJ@Z_0
 * func-address: 0x1026c890
 * callers: 0x1000f2b8
 * callees: 0x10001dfc, 0x10005402, 0x100065c3, 0x10006d93, 0x10007059, 0x10009efd, 0x1000aac4, 0x1000c252, 0x1000d51c, 0x1000e4bc, 0x1000e52f, 0x1000e7c3, 0x1000e881, 0x1000fafb, 0x10011bc1, 0x10013b47, 0x10015834, 0x10015ec4, 0x100164af, 0x100172dd, 0x100177ab, 0x10017bd9, 0x10017f2b, 0x10019c40, 0x1001a0f5, 0x1001ab59, 0x102c9ea8
 */

void __stdcall CDropBagUI::DropBagUIEvent(
        struct CREDialog *a1,
        unsigned int a2,
        int a3,
        struct CREControl *a4,
        int a5,
        int a6)
{
  int v6; // esi
  CItemHolder *v7; // ecx
  struct CREDialog *v8; // ebp
  struct CREControl *ItemData; // ebx
  int v10; // eax
  int v11; // eax
  int v12; // eax
  int v13; // eax
  int v14; // edi
  int v15; // eax
  struct CREDialog *v16; // ebx
  int v17; // eax
  int v18; // eax
  int v19; // eax
  int v20; // eax
  int v21; // edi
  int v22; // edx
  int v23; // eax
  int v24; // edi
  CItemHolder *v25; // ecx
  CItemHolder *v26; // ecx
  int v27; // esi
  int v28; // eax
  GameClient::Booty *v29; // eax
  int v30; // [esp-Ch] [ebp-44h]
  int v31; // [esp-Ch] [ebp-44h]
  _DWORD v32[2]; // [esp+14h] [ebp-24h] BYREF
  int v33; // [esp+1Ch] [ebp-1Ch] BYREF
  int v34; // [esp+20h] [ebp-18h]
  int v35; // [esp+24h] [ebp-14h]
  int v36; // [esp+28h] [ebp-10h]
  int v37; // [esp+34h] [ebp-4h]

  v6 = _RTDynamicCast(a1, 0, &CREDialog `RTTI Type Descriptor', &CDropBagUI `RTTI Type Descriptor');
  if ( !v6 )
    return;
  if ( a2 == 24 )
  {
    if ( a5 )
    {
      CDropBagUI::RefreshRobotEquip((CDropBagUI *)v6);
      CDropBagUI::RefreshBag((CDropBagUI *)v6);
      v7 = *(CItemHolder **)(v6 + 3948);
      *(_DWORD *)(v6 + 3968) = -1;
      CItemHolder::ClearCellSelection(v7);
      CItemHolder::ClearCellSelection(*(CItemHolder **)(v6 + 3952));
    }
    else
    {
      *(_DWORD *)(v6 + 4060) = -1;
    }
    return;
  }
  if ( a4 == *(struct CREControl **)(v6 + 3984) )
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
        CDropBagUI::SelectItem((CDropBagUI *)v6, a5);
        break;
      case 0x2004u:
        if ( *(_DWORD *)(v6 + 3968) != -1 )
        {
          a6 = a5;
          *(_DWORD *)(v6 + 3972) = a5;
          sub_10007059((int)&v33, (int)&a6);
          v32[1] = *(_DWORD *)(v6 + 4028);
          v32[0] = v6 + 4024;
          if ( (unsigned __int8)sub_10017BD9((int)v32) )
          {
            sub_10011BC1();
            if ( !(unsigned __int8)sub_10009EFD() )
            {
              *(_DWORD *)(v6 + 3976) = *(_DWORD *)sub_1000E881(0);
              CDropBagUI::SetCurItem((CDropBagUI *)v6);
            }
          }
        }
        break;
      default:
        break;
    }
  }
  v8 = (struct CREDialog *)(a3 - 21);
  a1 = (struct CREDialog *)(a3 - 21);
  if ( (unsigned int)(a3 - 21) <= 8 )
  {
    if ( a3 <= 23 )
    {
      ItemData = (struct CREControl *)CItemHolder::GetItemData(*(CItemHolder **)(v6 + 3948), a3 - 21);
      v10 = sub_10001DFC((int)ItemData);
      a4 = ItemData;
      if ( v10 )
      {
        v11 = _RTDynamicCast(
                v10,
                0,
                &GameClient::WorldObject `RTTI Type Descriptor',
                &GameClient::Equip `RTTI Type Descriptor');
        if ( v11 )
        {
          v12 = *(_DWORD *)(v11 + 4);
LABEL_27:
          a6 = v12;
          if ( v12 != -1 )
          {
            sub_10007059((int)v32, (int)&a6);
            v34 = *(_DWORD *)(v6 + 4028);
            v33 = v6 + 4024;
            if ( (unsigned __int8)sub_10006D93((int)&v33) )
            {
              v34 = 0;
              v35 = 0;
              v36 = 0;
              v37 = 0;
              sub_1001A0F5(&v33, (int)&a4);
              sub_1000FAFB((int)&a6);
              sub_1000C252((int)&v33);
              v37 = -1;
              sub_1000D51C();
            }
            else
            {
              v15 = sub_10011BC1();
              sub_1001A0F5((void *)(v15 + 4), (int)&a4);
            }
          }
        }
      }
      else
      {
        v13 = sub_10001DFC(*(_DWORD *)(v6 + 4060));
        if ( _RTDynamicCast(
               v13,
               0,
               &GameClient::WorldObject `RTTI Type Descriptor',
               &GameClient::Booty `RTTI Type Descriptor') )
        {
          v14 = 0;
          if ( sub_1000E52F() )
          {
            while ( *(struct CREControl **)(sub_1000AAC4(v14) + 4) != ItemData )
            {
              if ( ++v14 >= (unsigned int)sub_1000E52F() )
                goto LABEL_24;
            }
            v12 = *(_DWORD *)sub_1000AAC4(v14);
            v8 = a1;
            goto LABEL_27;
          }
LABEL_24:
          v8 = a1;
        }
      }
      CDropBagUI::RefreshList((CDropBagUI *)v6, 1);
      CDropBagUI::SetWeapon((CDropBagUI *)v6, (int)v8, 0xFFFFFFFF, 0xFFFFFFFF, 0);
      *(_DWORD *)(v6 + 3968) = v8;
      goto LABEL_45;
    }
    v16 = (struct CREDialog *)CItemHolder::GetItemData(*(CItemHolder **)(v6 + 3952), a3 - 24);
    v17 = sub_10001DFC((int)v16);
    a1 = v16;
    if ( v17 )
    {
      v18 = _RTDynamicCast(
              v17,
              0,
              &GameClient::WorldObject `RTTI Type Descriptor',
              &GameClient::Equip `RTTI Type Descriptor');
      if ( v18 )
      {
        v19 = *(_DWORD *)(v18 + 4);
LABEL_40:
        a6 = v19;
        if ( v19 != -1 )
        {
          sub_10007059((int)v32, (int)&a6);
          v22 = *(_DWORD *)(v6 + 4028);
          v33 = v6 + 4024;
          v34 = v22;
          if ( (unsigned __int8)sub_10006D93((int)&v33) )
          {
            v34 = 0;
            v35 = 0;
            v36 = 0;
            v37 = 1;
            sub_1001A0F5(&v33, (int)&a1);
            sub_1000FAFB((int)&a6);
            sub_1000C252((int)&v33);
            v37 = -1;
            sub_1000D51C();
          }
          else
          {
            v23 = sub_10011BC1();
            sub_1001A0F5((void *)(v23 + 4), (int)&a1);
          }
        }
      }
    }
    else
    {
      v20 = sub_10001DFC(*(_DWORD *)(v6 + 4060));
      if ( _RTDynamicCast(
             v20,
             0,
             &GameClient::WorldObject `RTTI Type Descriptor',
             &GameClient::Booty `RTTI Type Descriptor') )
      {
        v21 = 0;
        if ( sub_1000E52F() )
        {
          while ( *(struct CREDialog **)(sub_1000AAC4(v21) + 4) != v16 )
          {
            if ( ++v21 >= (unsigned int)sub_1000E52F() )
              goto LABEL_44;
          }
          v19 = *(_DWORD *)sub_1000AAC4(v21);
          goto LABEL_40;
        }
      }
    }
LABEL_44:
    CDropBagUI::RefreshList((CDropBagUI *)v6, 0);
    v24 = a3 - 24;
    CDropBagUI::SetSubWeapon((CDropBagUI *)v6, a3 - 24, 0xFFFFFFFF, 0xFFFFFFFF, 0);
    *(_DWORD *)(v6 + 3968) = v24;
  }
LABEL_45:
  switch ( a3 )
  {
    case 4:
      CDropBagUI::ReceiveEnergy((CDropBagUI *)v6);
      break;
    case 5:
      CDropBagUI::SubmitChange((CDropBagUI *)v6);
      break;
    case 6:
      if ( a2 == 4867 )
      {
        CItemHolder::ClearCellSelection(*(CItemHolder **)(v6 + 3948));
        CItemHolder::ClearCellSelection(*(CItemHolder **)(v6 + 3952));
        v25 = *(CItemHolder **)(v6 + 3948);
        v30 = a5;
        *(_DWORD *)(v6 + 3968) = a5;
        *(_BYTE *)(v6 + 3980) = 1;
        CItemHolder::GetXYByPos(v25, v30, (int *)&a2, &a3);
        CItemHolder::SelectCell(*(CItemHolder **)(v6 + 3948), a2, a3);
        CDropBagUI::RefreshList((CDropBagUI *)v6, 1);
      }
      break;
    case 7:
      if ( a2 == 4867 )
      {
        CItemHolder::ClearCellSelection(*(CItemHolder **)(v6 + 3948));
        CItemHolder::ClearCellSelection(*(CItemHolder **)(v6 + 3952));
        v26 = *(CItemHolder **)(v6 + 3952);
        v31 = a5;
        *(_DWORD *)(v6 + 3968) = a5;
        *(_BYTE *)(v6 + 3980) = 0;
        CItemHolder::GetXYByPos(v26, v31, (int *)&a1, &a6);
        CItemHolder::SelectCell(*(CItemHolder **)(v6 + 3952), a1, a6);
        CDropBagUI::RefreshList((CDropBagUI *)v6, 0);
      }
      break;
    case 50:
      v27 = *(_DWORD *)(v6 + 4060);
      if ( v27 != -1 )
      {
        v28 = sub_10001DFC(v27);
        if ( v28 )
        {
          v29 = (GameClient::Booty *)_RTDynamicCast(
                                       v28,
                                       0,
                                       &GameClient::WorldObject `RTTI Type Descriptor',
                                       &GameClient::Booty `RTTI Type Descriptor');
          if ( v29 )
            GameClient::Booty::Close(v29);
        }
      }
      break;
    default:
      return;
  }
}
