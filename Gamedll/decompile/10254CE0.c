/*
 * func-name: ?BattleFieldDetailUIEvent@CBattleFieldDetailUI@@CGXPAVCREDialog@@IHPAVCREControl@@IJ@Z_0
 * func-address: 0x10254ce0
 * callers: 0x1001995c
 * callees: 0x10007996, 0x1001055a, 0x10011abd, 0x1001572b, 0x102c9d62, 0x102c9ea8
 */

void __stdcall CBattleFieldDetailUI::BattleFieldDetailUIEvent(
        struct CREDialog *a1,
        unsigned int a2,
        int a3,
        struct CREControl *a4,
        unsigned int a5,
        int a6)
{
  CBattleFieldDetailUI *v6; // eax
  CBattleFieldDetailUI *v7; // esi
  CHotZonePic *v8; // ecx
  struct CREControl *Control; // eax
  struct GameClient::LocalUser *UserByIndex; // edi
  int v11; // [esp-14h] [ebp-B4h]
  unsigned int v12; // [esp-14h] [ebp-B4h]
  int v13; // [esp-10h] [ebp-B0h]
  int v14; // [esp-10h] [ebp-B0h]
  int v15; // [esp-Ch] [ebp-ACh]
  char v16[28]; // [esp+10h] [ebp-90h] BYREF
  char Buffer[100]; // [esp+2Ch] [ebp-74h] BYREF
  int v18; // [esp+9Ch] [ebp-4h]

  v6 = (CBattleFieldDetailUI *)_RTDynamicCast(
                                 a1,
                                 0,
                                 &CREDialog `RTTI Type Descriptor',
                                 &CBattleFieldDetailUI `RTTI Type Descriptor');
  v7 = v6;
  if ( v6 )
  {
    if ( a2 == 24 )
    {
      if ( !a5 )
      {
        v8 = (CHotZonePic *)*((_DWORD *)v6 + 969);
        *((_DWORD *)v6 + 968) = -1;
        *((_DWORD *)v6 + 981) = -1;
        *((_DWORD *)v6 + 983) = -1;
        *((_DWORD *)v6 + 982) = -1;
        CHotZonePic::RemoveAllHotZone(v8);
        CHotZonePic::RemoveAllHoverPic(*((CHotZonePic **)v7 + 969));
        Control = CREDialog::GetControl(v7, 12);
        (*(void (__thiscall **)(struct CREControl *, _DWORD))(*(_DWORD *)Control + 128))(Control, 0);
        (*(void (__thiscall **)(CBattleFieldDetailUI *, int))(*(_DWORD *)v7 + 36))(v7, 0x7FFFFFFF);
      }
    }
    else if ( a3 == 1 )
    {
      if ( a2 == 4352 )
      {
        *((_DWORD *)v6 + 981) = a5;
        CBattleFieldDetailUI::OnSelectEntryPoint(v6, a5);
      }
    }
    else if ( a3 == 12 && *((_DWORD *)v6 + 981) != -1 )
    {
      UserByIndex = GameClient::LocalUserManager::GetUserByIndex(GameClient::LocalUserManager::s_pInstance, 0);
      if ( UserByIndex )
      {
        sprintf(Buffer, "%d", *((_DWORD *)v7 + 981));
        std::string::string(v16, Buffer);
        v15 = *((_DWORD *)UserByIndex + 20);
        v13 = *((_DWORD *)UserByIndex + 19);
        v11 = *((_DWORD *)UserByIndex + 1);
        v18 = 0;
        sub_10011ABD(v11, v13);
        sub_1001572B(v12, v14, v15, 3, (int)v16);
        v18 = -1;
        std::string::~string(v16);
      }
    }
  }
}
