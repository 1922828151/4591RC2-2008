/*
 * func-name: ?Tick@CDropBagUI@@UAEXM@Z_0
 * func-address: 0x10268d60
 * callers: 0x1000ea9d
 * callees: 0x1000194c, 0x10001dfc, 0x10007766, 0x1000a3a8, 0x1000ed13
 */

void __thiscall CDropBagUI::Tick(CDropBagUI *this, float a2)
{
  int v3; // eax
  int v4; // eax
  int v5; // eax
  GameClient::RobotManager *v6; // eax
  GameClient::Robot *Robot; // eax
  int v8; // edi
  float Energy; // [esp+4h] [ebp-Ch]
  int v10; // [esp+8h] [ebp-8h]

  v3 = *((_DWORD *)this + 1015);
  if ( v3 != -1 )
  {
    v4 = sub_10001DFC(v3);
    if ( v4 )
      (*(void (__stdcall **)(_DWORD))(**((_DWORD **)this + 1017) + 200))(*(float *)(v4 + 168));
  }
  v5 = sub_1000194C(0);
  if ( v5 )
  {
    v10 = *(_DWORD *)(v5 + 292);
    v6 = GameClient::RobotManager::Instance();
    Robot = GameClient::RobotManager::GetRobot(v6, v10);
    if ( Robot )
    {
      v8 = **((_DWORD **)this + 1016);
      Energy = GameClient::Robot::GetEnergy(Robot);
      (*(void (__thiscall **)(_DWORD, _DWORD))(v8 + 200))(*((_DWORD *)this + 1016), LODWORD(Energy));
    }
  }
  CTYDialog::Tick(this, a2);
}
