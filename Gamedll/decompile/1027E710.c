/*
 * func-name: ?Tick@RadarMapState@@UAEXXZ_0
 * func-address: 0x1027e710
 * callers: 0x1000e03e
 * callees: 0x1000194c, 0x100091e7, 0x1000a3a8, 0x1000b08c, 0x1000ed13, 0x1000f19b, 0x102c9fe0
 */

void __thiscall RadarMapState::Tick(RadarMapState *this)
{
  int v2; // eax
  int v3; // eax
  GameClient::RobotManager *v4; // eax
  struct GameClient::Robot *Robot; // ebx
  int v6; // eax
  float *v7; // esi
  int v8; // ebx
  int v9; // ebp
  int v10; // eax
  int v11; // [esp+4h] [ebp-2Ch]
  float v12; // [esp+14h] [ebp-1Ch]
  float v13; // [esp+18h] [ebp-18h]
  int v14; // [esp+18h] [ebp-18h]
  float v15; // [esp+1Ch] [ebp-14h]
  float v16; // [esp+1Ch] [ebp-14h]
  struct tagRECT rc; // [esp+20h] [ebp-10h] BYREF

  v2 = *((_DWORD *)this + 1);
  if ( v2 )
  {
    CHotZonePic::RemoveHoverPic(*(CHotZonePic **)(v2 + 3896), 1, 0);
    CRadarMapUI::RefreshEntity(*((CRadarMapUI **)this + 1));
    CRadarMapUI::RefreshGroupmate(*((CRadarMapUI **)this + 1));
    CHotZonePic::RemoveHoverPic(*(CHotZonePic **)(*((_DWORD *)this + 1) + 3896), 6, 0);
    CRadarMapUI::DrawSelf(*((CRadarMapUI **)this + 1));
    CTYDialog::NestToEdge(*((CTYDialog **)this + 1), 6u);
    v3 = sub_1000194C(0);
    if ( v3 )
    {
      v11 = *(_DWORD *)(v3 + 292);
      v4 = GameClient::RobotManager::Instance();
      Robot = GameClient::RobotManager::GetRobot(v4, v11);
      if ( Robot )
      {
        v6 = *((_DWORD *)this + 1);
        v7 = (float *)(v6 + 4004);
        if ( !*(_BYTE *)(v6 + 4090) )
          v7 = (float *)(v6 + 3920);
        v13 = (double)(int)CHotZonePic::GetPicWidth(*(CHotZonePic **)(v6 + 3896))
            * ((*((float *)Robot + 6) - v7[4])
             / (v7[7] - v7[4]));
        v15 = (double)(int)CHotZonePic::GetPicHeight(*(CHotZonePic **)(*((_DWORD *)this + 1) + 3896))
            * ((v7[9] - *((float *)Robot + 8))
             / (v7[9] - v7[6]));
        v12 = (double)(6 - *(_DWORD *)(*((_DWORD *)this + 1) + 4096)) * 50.0;
        v8 = (int)v13;
        v9 = (int)v15;
        v14 = (int)((double)(int)CHotZonePic::GetPicWidth(*(CHotZonePic **)(*((_DWORD *)this + 1) + 3896))
                  * (v12
                   / (v7[7] - v7[4]))
                  * 0.5);
        v16 = v12 / 156.0 * 148.0;
        v10 = (int)((double)(int)CHotZonePic::GetPicHeight(*(CHotZonePic **)(*((_DWORD *)this + 1) + 3896))
                  * (v16
                   / (v7[9] - v7[6]))
                  * 0.5);
        SetRect(&rc, v8 - v14, v9 - v10, v14 + v8, v10 + v9);
        CHotZonePic::SetDrawRect(*(CHotZonePic **)(*((_DWORD *)this + 1) + 3896), &rc);
      }
    }
  }
}
