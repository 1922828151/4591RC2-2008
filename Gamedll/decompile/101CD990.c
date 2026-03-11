/*
 * func-name: sub_101CD990
 * func-address: 0x101cd990
 * callers: 0x10011edc
 * callees: 0x1000194c, 0x10001dfc, 0x10006947, 0x10007ed2, 0x1000a3a8, 0x1000a506, 0x1000a54c, 0x1000adc6, 0x1000dafd, 0x1000e4bc, 0x1000ed13, 0x102c9ea8
 */

void __stdcall sub_101CD990(int a1)
{
  int v1; // eax
  int v2; // eax
  int v3; // ebx
  GameClient::RobotManager *v4; // eax
  struct GameClient::Robot *Robot; // esi
  CDlgMgr *v6; // eax
  CTYDialog *Dialog; // eax
  CTYDialog *v8; // edi
  int v9; // edi
  int v10; // eax
  GameClient::Booty *v11; // eax
  GameClient::Booty *FaceBooty; // eax
  unsigned int v13; // eax
  unsigned int v14; // esi
  GameClient::EstabManager *v15; // eax
  struct GameClient::Establishment *Establishment; // eax
  GameClient::EstabManager *v17; // eax
  struct GameClient::Establishment *v18; // eax
  GameClient::FuncManager *v19; // eax
  struct GameClient::Function *v20; // eax
  unsigned int v21; // esi
  GameClient::FuncManager *v22; // eax
  struct GameClient::Function *Function; // eax
  unsigned int v24; // [esp-10h] [ebp-10h]
  unsigned int v25; // [esp-10h] [ebp-10h]
  int v26; // [esp-Ch] [ebp-Ch]

  v1 = GUISystem::Instance();
  if ( !(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v1 + 44))(v1) )
  {
    v2 = sub_1000194C(0);
    v3 = v2;
    if ( v2 )
    {
      v26 = *(_DWORD *)(v2 + 292);
      v4 = GameClient::RobotManager::Instance();
      Robot = GameClient::RobotManager::GetRobot(v4, v26);
      if ( Robot )
      {
        v6 = (CDlgMgr *)CDlgMgr::Instance();
        Dialog = CDlgMgr::GetDialog(v6);
        v8 = Dialog;
        if ( Dialog )
        {
          if ( (unsigned __int8)CTYDialog::GetVisible(Dialog) )
          {
            v9 = *((_DWORD *)v8 + 1015);
            if ( v9 != -1 )
            {
              v10 = sub_10001DFC(v9);
              v11 = (GameClient::Booty *)_RTDynamicCast(
                                           v10,
                                           0,
                                           &GameClient::WorldObject `RTTI Type Descriptor',
                                           &GameClient::Booty `RTTI Type Descriptor',
                                           0);
              if ( v11 )
              {
                GameClient::Booty::Close(v11);
                return;
              }
            }
          }
          else
          {
            FaceBooty = GameClient::Robot::GetFaceBooty(Robot);
            if ( FaceBooty && !*((_DWORD *)Robot + 90) )
            {
              GameClient::Booty::Open(FaceBooty, Robot);
              return;
            }
          }
        }
        v13 = *((_DWORD *)Robot + 72);
        if ( v13 == -1 )
        {
          if ( *((_DWORD *)Robot + 227) == -1 )
          {
            v21 = *((_DWORD *)Robot + 226);
            if ( v21 != -1 )
            {
              v22 = GameClient::FuncManager::Instance();
              Function = GameClient::FuncManager::GetFunction(v22, v21);
              if ( Function )
                (*(void (__thiscall **)(struct GameClient::Function *, int))(*(_DWORD *)Function + 40))(Function, v3);
            }
          }
          else
          {
            v25 = *((_DWORD *)Robot + 227);
            v19 = GameClient::FuncManager::Instance();
            v20 = GameClient::FuncManager::GetFunction(v19, v25);
            if ( v20 )
              (*(void (__thiscall **)(struct GameClient::Function *, int))(*(_DWORD *)v20 + 44))(v20, v3);
          }
        }
        else
        {
          v14 = *((_DWORD *)Robot + 228);
          if ( v13 == v14 )
          {
            v15 = GameClient::EstabManager::Instance();
            Establishment = GameClient::EstabManager::GetEstablishment(v15, v14);
            if ( Establishment )
              (*(void (__thiscall **)(struct GameClient::Establishment *, int))(*(_DWORD *)Establishment + 104))(
                Establishment,
                v3);
          }
          else
          {
            v24 = v13;
            v17 = GameClient::EstabManager::Instance();
            v18 = GameClient::EstabManager::GetEstablishment(v17, v24);
            if ( v18 )
              (*(void (__thiscall **)(struct GameClient::Establishment *, int))(*(_DWORD *)v18 + 96))(v18, v3);
          }
        }
      }
    }
  }
}
