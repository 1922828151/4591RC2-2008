/*
 * func-name: ?HallMapUIEvent@CHallMapUI@@CGXPAVCREDialog@@IHPAVCREControl@@IJ@Z_0
 * func-address: 0x10275760
 * callers: 0x10012bca
 * callees: 0x10002aea, 0x10004886, 0x10009881, 0x10009e6c, 0x1001055a, 0x10011abd, 0x100142d1, 0x10019d03, 0x102c9ea8
 */

void __userpurge CHallMapUI::HallMapUIEvent(
        int a1@<esi>,
        struct CREDialog *a2,
        unsigned int a3,
        int a4,
        struct CREControl *a5,
        unsigned int a6,
        int a7)
{
  CHallMapUI *v7; // ecx
  struct GameClient::LocalUser *UserByIndex; // esi
  unsigned int v9; // [esp-8h] [ebp-8h]
  int v10; // [esp-4h] [ebp-4h]

  v7 = (CHallMapUI *)_RTDynamicCast(a2, 0, &CREDialog `RTTI Type Descriptor', &CHallMapUI `RTTI Type Descriptor');
  if ( v7 )
  {
    if ( a3 == 24 )
    {
      if ( a6 )
        CHallMapUI::Refresh(v7);
    }
    else
    {
      switch ( a4 )
      {
        case 1:
          if ( a3 == 4352 )
          {
            *((_DWORD *)GameClient::LocalUserManager::GetUserByIndex(GameClient::LocalUserManager::s_pInstance, 0) + 20) = a6;
            v10 = *(_DWORD *)(sub_10009E6C() + 32);
            sub_10009E6C();
            sub_10004886(v10);
          }
          break;
        case 2:
          CHallMapUI::ZoomIn(v7);
          break;
        case 3:
          CHallMapUI::ZoomOut(v7);
          break;
        case 4:
          UserByIndex = GameClient::LocalUserManager::GetUserByIndex(GameClient::LocalUserManager::s_pInstance, 0);
          if ( UserByIndex )
          {
            LogPrintf("Send get world list.");
            sub_10011ABD(*((_DWORD *)UserByIndex + 1), a1);
            sub_10002AEA(v9);
          }
          break;
        default:
          return;
      }
    }
  }
}
