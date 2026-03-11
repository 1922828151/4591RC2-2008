/*
 * func-name: ?DrawSelf@CRadarMapUI@@QAEXXZ_0
 * func-address: 0x1027b700
 * callers: 0x100091e7
 * callees: 0x1000194c, 0x100029cd, 0x1000a3a8, 0x1000ed13, 0x100155aa, 0x102c0750, 0x102c0c90, 0x102c0ed0, 0x102c9fe0
 */

void __thiscall CRadarMapUI::DrawSelf(CRadarMapUI *this)
{
  int v2; // eax
  GameClient::RobotManager *v3; // eax
  struct GameClient::Robot *Robot; // edi
  char *v5; // eax
  CHotZonePic *v6; // ecx
  int v7; // ebp
  int v8; // eax
  int v9; // [esp+0h] [ebp-84h]
  float v10; // [esp+14h] [ebp-70h]
  _BYTE v11[4]; // [esp+18h] [ebp-6Ch] BYREF
  float v12; // [esp+1Ch] [ebp-68h]
  struct tagRECT rc; // [esp+24h] [ebp-60h] BYREF
  _BYTE v14[28]; // [esp+34h] [ebp-50h] BYREF
  _BYTE v15[16]; // [esp+50h] [ebp-34h] BYREF
  float v16; // [esp+60h] [ebp-24h]
  float v17; // [esp+68h] [ebp-1Ch]
  float v18; // [esp+6Ch] [ebp-18h]
  float v19; // [esp+74h] [ebp-10h]
  int v20; // [esp+80h] [ebp-4h]

  v2 = sub_1000194C(0);
  if ( v2 )
  {
    v9 = *(_DWORD *)(v2 + 292);
    v3 = GameClient::RobotManager::Instance();
    Robot = GameClient::RobotManager::GetRobot(v3, v9);
    if ( Robot )
    {
      v5 = (char *)this + 4004;
      if ( !*((_BYTE *)this + 4090) )
        v5 = (char *)this + 3920;
      sub_100155AA((int)v5);
      v6 = (CHotZonePic *)*((_DWORD *)this + 974);
      v20 = 0;
      v7 = (int)((double)(int)CHotZonePic::GetPicWidth(v6) * ((*((float *)Robot + 6) - v16) / (v18 - v16)));
      v8 = (int)((double)(int)CHotZonePic::GetPicHeight(*((CHotZonePic **)this + 974))
               * ((v19 - *((float *)Robot + 8))
                / (v19 - v17)));
      SetRect(&rc, v7 - 16, v8 - 16, v7 + 16, v8 + 16);
      sub_102C0ED0(v11);
      v12 = 0.0;
      sub_100029CD();
      std::string::string(v14, "RadarPlayerSpot.dds");
      LOBYTE(v20) = 1;
      v10 = sub_102C0C90(v11);
      CHotZonePic::InsertHoverPic(*((_DWORD *)this + 974), 6, v14, &rc, 1, 0, 0, -1, LODWORD(v10));
      LOBYTE(v20) = 0;
      std::string::~string(v14);
      v20 = -1;
      sub_102C0750(v15);
    }
  }
}
