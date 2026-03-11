/*
 * func-name: ?OnBegin@SelectRebornLocObserver@GameClient@@UAEXAAVEvent@@@Z_0
 * func-address: 0x101cafd0
 * callers: 0x10013a34
 * callees: 0x1000194c, 0x100072cf, 0x1000a3a8, 0x1000ed13, 0x1001aa5f, 0x102c9ea8
 */

void __userpurge GameClient::SelectRebornLocObserver::OnBegin(int a1@<edi>, struct Event *a2)
{
  struct BinStream *Stream; // eax
  int v4; // edx
  float *v5; // ecx
  int v6; // ecx
  struct Event *v7; // edi
  int v8; // eax
  GameClient::RobotManager *v9; // eax
  GameClient::Robot *Robot; // esi
  CDlgMgr *v11; // eax
  struct CTYDialog *Dialog; // eax
  void (__thiscall *v13)(GameClient::Robot *, float *); // edx
  int v14; // [esp+1Ch] [ebp-18h]
  float v16; // [esp+28h] [ebp-Ch]
  float v17; // [esp+2Ch] [ebp-8h] BYREF
  float v18; // [esp+30h] [ebp-4h]

  v16 = 0.0;
  v17 = 0.0;
  v18 = 0.0;
  Stream = Event::GetStream(a2);
  v4 = *((_DWORD *)Stream + 3);
  if ( (unsigned int)(v4 + 12) <= *((_DWORD *)Stream + 2) )
  {
    v5 = (float *)(v4 + *((_DWORD *)Stream + 1));
    v16 = *v5;
    v17 = v5[1];
    v18 = v5[2];
    *((_DWORD *)Stream + 3) += 12;
  }
  v6 = *((_DWORD *)Stream + 3);
  if ( (unsigned int)(v6 + 4) > *((_DWORD *)Stream + 2) )
  {
    v7 = a2;
  }
  else
  {
    v7 = *(struct Event **)(v6 + *((_DWORD *)Stream + 1));
    *((_DWORD *)Stream + 3) = v6 + 4;
  }
  v8 = sub_1000194C(0);
  if ( v8 )
  {
    *(_DWORD *)(v8 + 308) = v7;
    v14 = *(_DWORD *)(v8 + 292);
    v9 = GameClient::RobotManager::Instance();
    Robot = GameClient::RobotManager::GetRobot(v9, v14);
    if ( Robot )
    {
      v11 = (CDlgMgr *)CDlgMgr::Instance();
      Dialog = CDlgMgr::GetDialog(v11);
      if ( _RTDynamicCast(Dialog, &CTYDialog `RTTI Type Descriptor', &CRadarMapUI `RTTI Type Descriptor', 0, a1) )
        CRadarMapUI::ChangeMapState(1);
      v13 = *(void (__thiscall **)(GameClient::Robot *, float *))(*(_DWORD *)Robot + 36);
      *((_DWORD *)Robot + 226) = v7;
      v13(Robot, &v17);
      GameClient::Robot::SetRebornFunction(Robot, (unsigned int)v7);
      LogPrintf("Select Reborn Loc : %d, pos : %.2f %.2f %.2f", v7, v16, v17, v18);
    }
  }
}
