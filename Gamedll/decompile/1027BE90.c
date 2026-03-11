/*
 * func-name: ?RefreshGroupmate@CRadarMapUI@@QAEXXZ_0
 * func-address: 0x1027be90
 * callers: 0x1000f19b
 * callees: 0x1000108c, 0x1000194c, 0x10004665, 0x10005ccc, 0x1000a3a8, 0x1000ed13, 0x10017c29, 0x102c9fe0
 */

void __thiscall CRadarMapUI::RefreshGroupmate(CHotZonePic **this)
{
  CRadarMapUI *v1; // ebx
  CHotZonePic *v2; // ecx
  int v3; // eax
  unsigned int v4; // eax
  GameClient::GroupManager *v5; // eax
  const struct GameClient::Group *Group; // eax
  float *v7; // esi
  char *v8; // edi
  unsigned int v9; // ebp
  int v10; // eax
  int v11; // eax
  GameClient::RobotManager *v12; // eax
  struct GameClient::Robot *Robot; // eax
  int v14; // ebx
  int v15; // eax
  int v16; // eax
  int v17; // [esp+14h] [ebp-40h]
  unsigned int v18; // [esp+20h] [ebp-34h]
  int v20; // [esp+2Ch] [ebp-28h]
  int v21; // [esp+30h] [ebp-24h]
  float v22; // [esp+38h] [ebp-1Ch]
  float v23; // [esp+40h] [ebp-14h]
  struct tagRECT rc; // [esp+44h] [ebp-10h] BYREF

  v1 = (CRadarMapUI *)this;
  if ( *(float *)&GSeconds - *((float *)this + 1030) > 1.0 )
  {
    v2 = this[974];
    *((float *)v1 + 1030) = *(float *)&GSeconds;
    CHotZonePic::RemoveHoverPic(v2, 4, 0);
    v3 = sub_1000194C(0);
    v21 = v3;
    if ( v3 )
    {
      v4 = *(_DWORD *)(v3 + 216);
      if ( v4 )
      {
        v18 = v4;
        v5 = GameClient::GroupManager::Instance();
        Group = GameClient::GroupManager::GetGroup(v5, v18);
        if ( Group )
        {
          v7 = (float *)((char *)v1 + 4004);
          if ( !*((_BYTE *)v1 + 4090) )
            v7 = (float *)((char *)v1 + 3920);
          v8 = (char *)Group + 12;
          v9 = 0;
          if ( sub_1000108C() )
          {
            v20 = 0;
            do
            {
              v10 = *((_DWORD *)v8 + 1);
              if ( !v10 || v9 >= (*((_DWORD *)v8 + 2) - v10) / 84 )
                _invalid_parameter_noinfo();
              if ( *(_BYTE *)(*((_DWORD *)v8 + 1) + v20 + 36) && *(_DWORD *)sub_10005CCC(v9) != *(_DWORD *)(v21 + 4) )
              {
                v11 = sub_10005CCC(v9);
                v22 = *(float *)(v11 + 44);
                v23 = *(float *)(v11 + 52);
                v17 = *(_DWORD *)(sub_10005CCC(v9) + 40);
                v12 = GameClient::RobotManager::Instance();
                Robot = GameClient::RobotManager::GetRobot(v12, v17);
                if ( Robot )
                {
                  v22 = *((float *)Robot + 6);
                  v23 = *((float *)Robot + 8);
                }
                v14 = (int)((double)(int)CHotZonePic::GetPicWidth(*((CHotZonePic **)v1 + 974))
                          * ((v22 - v7[4])
                           / (v7[7] - v7[4])));
                v15 = (int)((double)(int)CHotZonePic::GetPicHeight(this[974]) * ((v7[9] - v23) / (v7[9] - v7[6])));
                SetRect(&rc, v14 - 8, v15 - 8, v14 + 8, v15 + 8);
                v16 = sub_10005CCC(v9);
                CHotZonePic::InsertHoverPic(
                  this[974],
                  4,
                  (char *)&unk_103B7A84 + 28 * *(_DWORD *)(v16 + 32),
                  &rc,
                  1,
                  0,
                  0,
                  -1,
                  0.0);
                v1 = (CRadarMapUI *)this;
              }
              v20 += 84;
              ++v9;
            }
            while ( v9 < sub_1000108C() );
          }
        }
      }
    }
  }
}
