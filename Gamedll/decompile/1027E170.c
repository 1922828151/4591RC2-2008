/*
 * func-name: ?RefreshEntity@CRadarMapUI@@QAEXXZ_0
 * func-address: 0x1027e170
 * callers: 0x1000b08c
 * callees: 0x1000194c, 0x100029cd, 0x10004665, 0x1000564b, 0x10006c8a, 0x1000902a, 0x1000a3a8, 0x1000a830, 0x1000a984, 0x1000adc6, 0x1000ed13, 0x10010389, 0x10010591, 0x10011d6f, 0x1001241d, 0x100132c8, 0x10017c29, 0x102c0c90, 0x102c0ed0, 0x102c9d50, 0x102c9d62, 0x102c9fe0
 */

void __thiscall CRadarMapUI::RefreshEntity(CRadarMapUI *this)
{
  unsigned int v2; // ebp
  int v3; // edi
  GameClient::RobotManager *v4; // eax
  struct GameClient::Robot *Robot; // eax
  GameClient::Robot *v6; // esi
  int v7; // ecx
  int v8; // edx
  int v9; // eax
  double v10; // st7
  GameClient::GroupManager *v11; // eax
  float *v12; // edi
  _DWORD *v13; // esi
  int v14; // eax
  GameClient::ProductManager *v15; // eax
  int v16; // esi
  int v17; // esi
  int v18; // eax
  int v19; // esi
  struct Actor *StateActor; // eax
  unsigned int v21; // esi
  int v22; // ebp
  int v23; // eax
  GameClient::ProductManager *v24; // eax
  int v25; // esi
  int v26; // eax
  int v27; // ebp
  int v28; // ebp
  int v29; // [esp+4h] [ebp-BCh]
  unsigned int v30; // [esp+4h] [ebp-BCh]
  unsigned int v31; // [esp+4h] [ebp-BCh]
  unsigned int v32; // [esp+4h] [ebp-BCh]
  struct GameClient::FProductInfo *ProductInfo; // [esp+1Ch] [ebp-A4h]
  GameClient::Group *RadirRange; // [esp+20h] [ebp-A0h]
  const struct GameClient::Group *Group; // [esp+20h] [ebp-A0h]
  unsigned int v36; // [esp+20h] [ebp-A0h]
  _DWORD *v37; // [esp+24h] [ebp-9Ch]
  float v38; // [esp+24h] [ebp-9Ch]
  struct GameClient::Robot *v39; // [esp+28h] [ebp-98h]
  int PicHeight; // [esp+2Ch] [ebp-94h]
  int v41; // [esp+30h] [ebp-90h]
  int v42; // [esp+34h] [ebp-8Ch] BYREF
  void *v43; // [esp+38h] [ebp-88h]
  int v44; // [esp+3Ch] [ebp-84h]
  int v45; // [esp+40h] [ebp-80h]
  _BYTE v46[4]; // [esp+44h] [ebp-7Ch] BYREF
  float v47[2]; // [esp+48h] [ebp-78h] BYREF
  _BYTE v48[4]; // [esp+50h] [ebp-70h] BYREF
  void *v49; // [esp+54h] [ebp-6Ch]
  int v50; // [esp+58h] [ebp-68h]
  int v51; // [esp+5Ch] [ebp-64h]
  int v52; // [esp+60h] [ebp-60h]
  _DWORD v53[5]; // [esp+64h] [ebp-5Ch] BYREF
  struct tagRECT rc; // [esp+78h] [ebp-48h] BYREF
  _BYTE v55[12]; // [esp+88h] [ebp-38h] BYREF
  _BYTE v56[28]; // [esp+94h] [ebp-2Ch] BYREF
  int v57; // [esp+BCh] [ebp-4h]

  v2 = 0;
  v3 = sub_1000194C(0);
  v41 = v3;
  if ( v3 )
  {
    v29 = *(_DWORD *)(v3 + 292);
    v4 = GameClient::RobotManager::Instance();
    Robot = GameClient::RobotManager::GetRobot(v4, v29);
    v6 = Robot;
    v39 = Robot;
    if ( Robot )
    {
      RadirRange = (GameClient::Group *)*((_DWORD *)this + 979);
      if ( *((_DWORD *)Robot + 50) )
        RadirRange = (GameClient::Group *)GameClient::RobotArmor::GetRadirRange(*((GameClient::RobotArmor **)Robot + 51));
      v7 = *((_DWORD *)v6 + 6);
      v8 = *((_DWORD *)v6 + 7);
      v9 = *((_DWORD *)v6 + 8);
      *(float *)&v53[3] = (float)(int)RadirRange;
      v53[0] = v7;
      v10 = 3.4028235e38;
      v53[1] = v8;
      *(float *)&v53[4] = 3.4028235e38;
      v53[2] = v9;
      v43 = 0;
      v44 = 0;
      v45 = 0;
      v57 = 0;
      GameClient::RobotManager::Instance();
      sub_1000A830((int)v53, (int)&v42);
      v30 = *(_DWORD *)(v3 + 216);
      v11 = GameClient::GroupManager::Instance();
      Group = GameClient::GroupManager::GetGroup(v11, v30);
      v12 = (float *)((char *)this + 4004);
      if ( !*((_BYTE *)this + 4090) )
        v12 = (float *)((char *)this + 3920);
      while ( v43 && v2 < (v44 - (int)v43) >> 2 )
      {
        v13 = (_DWORD *)*((_DWORD *)v43 + v2);
        v37 = v13;
        if ( v13[50] )
        {
          if ( v13[3] != *(_DWORD *)(v41 + 292) && v13[70] == -1 && !v13[90] )
          {
            if ( v13[27] == *(_DWORD *)(v41 + 48)
              || (sub_10011D6F((int)v55, (int)v39 + 24), sub_1000A984(), v10 <= 50.0) )
            {
              if ( *(_DWORD *)(v13[43] + 1112) == *(_DWORD *)(*((_DWORD *)v39 + 43) + 1112)
                && (!Group || !GameClient::Group::IsInGroup(Group, v13[4])) )
              {
                v14 = *(_DWORD *)(v13[50] + 8);
                if ( v14 )
                {
                  v31 = *(_DWORD *)(v14 + 108);
                  v15 = GameClient::ProductManager::Instance();
                  ProductInfo = GameClient::ProductManager::GetProductInfo(v15, v31);
                  if ( ProductInfo )
                  {
                    v16 = *(_DWORD *)sub_1000902A(v2);
                    v17 = (int)((double)(int)CHotZonePic::GetPicWidth(*((CHotZonePic **)this + 974))
                              * ((*(float *)(v16 + 24) - v12[4])
                               / (v12[7] - v12[4])));
                    v52 = *(_DWORD *)sub_1000902A(v2);
                    PicHeight = CHotZonePic::GetPicHeight(*((CHotZonePic **)this + 974));
                    v18 = (int)((double)PicHeight * ((v12[9] - *(float *)(v52 + 32)) / (v12[9] - v12[6])));
                    SetRect(&rc, v17 - 8, v18 - 8, v17 + 8, v18 + 8);
                    sub_1000902A(v2);
                    sub_102C0ED0(v46);
                    v47[0] = 0.0;
                    sub_100029CD();
                    v19 = v37[27];
                    v38 = sub_102C0C90(v46);
                    v10 = v38;
                    CHotZonePic::InsertHoverPic(
                      *((_DWORD *)this + 974),
                      1,
                      (char *)ProductInfo + 204,
                      &rc,
                      1,
                      0,
                      0,
                      *(_DWORD *)(v41 + 48) != v19 ? -65536 : -16711936,
                      LODWORD(v38));
                  }
                }
              }
            }
          }
        }
        v6 = v39;
        ++v2;
      }
      std::string::string(v56);
      LOBYTE(v57) = 1;
      if ( GameClient::Robot::GetStateActor(v6) )
      {
        StateActor = GameClient::Robot::GetStateActor(v6);
        std::string::operator=(v56, (char *)StateActor + 444);
      }
      v21 = 0;
      v49 = 0;
      v50 = 0;
      v51 = 0;
      LOBYTE(v57) = 2;
      GameClient::EstabManager::Instance();
      sub_10010591((int)v53, (int)v48);
      while ( v49 )
      {
        if ( v21 >= (v50 - (int)v49) >> 2 )
        {
          operator delete(v49);
          break;
        }
        v22 = *((_DWORD *)v49 + v21);
        if ( !(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v22 + 152))(v22)
          && !(unsigned __int8)std::operator!=<char>(v22 + 428, v56)
          && *((_DWORD *)v39 + 70) != *(_DWORD *)(v22 + 12) )
        {
          v23 = *(_DWORD *)(v22 + 8);
          if ( v23 )
          {
            v32 = *(_DWORD *)(v23 + 108);
            v24 = GameClient::ProductManager::Instance();
            if ( GameClient::ProductManager::GetProductInfo(v24, v32) )
            {
              v25 = (int)((double)(int)CHotZonePic::GetPicWidth(*((CHotZonePic **)this + 974))
                        * ((*(float *)(v22 + 24) - v12[4])
                         / (v12[7] - v12[4])));
              v26 = (int)((double)(int)CHotZonePic::GetPicHeight(*((CHotZonePic **)this + 974))
                        * ((v12[9] - *(float *)(v22 + 32))
                         / (v12[9] - v12[6])));
              SetRect((LPRECT)&rc.top, v25 - 8, v26 - 8, v25 + 8, v26 + 8);
              sub_102C0ED0(v47);
              v47[1] = 0.0;
              sub_100029CD();
              v27 = *(_DWORD *)(v22 + 108);
              if ( v27 == *(_DWORD *)(v42 + 48) )
              {
                v28 = -16711936;
              }
              else if ( v27 )
              {
                v28 = v27 != -1 ? -65536 : -1;
              }
              else
              {
                v28 = -1;
              }
              *(float *)&v36 = sub_102C0C90(v47);
              CHotZonePic::InsertHoverPic(*((_DWORD *)this + 974), 1, (char *)v39 + 204, &rc.top, 1, 0, 0, v28, v36);
              v21 = v36;
            }
          }
        }
        ++v21;
      }
      v49 = 0;
      v50 = 0;
      v51 = 0;
      LOBYTE(v57) = 0;
      std::string::~string(v56);
      if ( v43 )
        operator delete(v43);
    }
  }
}
