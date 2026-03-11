/*
 * func-name: ?OnGroupCmdUpdated@CRadarMapUI@@QAEXXZ_0
 * func-address: 0x1027c0c0
 * callers: 0x10008edb
 * callees: 0x1000108c, 0x1000194c, 0x10004665, 0x10005ccc, 0x10017c29, 0x102c9fe0
 */

void __thiscall CRadarMapUI::OnGroupCmdUpdated(CHotZonePic **this)
{
  CHotZonePic **v1; // ebp
  int v2; // eax
  unsigned int v3; // eax
  GameClient::GroupManager *v4; // eax
  const struct GameClient::Group *Group; // eax
  float *v6; // ebx
  char *v7; // esi
  unsigned int v8; // edi
  int v9; // eax
  int v10; // eax
  int v11; // eax
  int v12; // ebp
  int v13; // eax
  int v14; // eax
  int inserted; // eax
  unsigned int v16; // [esp+3Ch] [ebp-38h]
  int v18; // [esp+48h] [ebp-2Ch]
  int v19; // [esp+4Ch] [ebp-28h]
  const struct GameClient::Group *v20; // [esp+50h] [ebp-24h]
  float v21; // [esp+58h] [ebp-1Ch]
  float v22; // [esp+60h] [ebp-14h]
  struct tagRECT rc; // [esp+64h] [ebp-10h] BYREF

  v1 = this;
  CHotZonePic::RemoveHoverPic(this[974], 5, 0);
  v2 = sub_1000194C(0);
  v19 = v2;
  if ( v2 )
  {
    v3 = *(_DWORD *)(v2 + 216);
    if ( v3 )
    {
      v16 = v3;
      v4 = GameClient::GroupManager::Instance();
      Group = GameClient::GroupManager::GetGroup(v4, v16);
      v20 = Group;
      if ( Group )
      {
        v6 = (float *)(v1 + 1001);
        if ( !*((_BYTE *)v1 + 4090) )
          v6 = (float *)(v1 + 980);
        v7 = (char *)Group + 12;
        v8 = 0;
        if ( sub_1000108C() )
        {
          v18 = 0;
          do
          {
            if ( *((_DWORD *)v20 + 2) == *(_DWORD *)(v19 + 4) )
              goto LABEL_13;
            v9 = *((_DWORD *)v7 + 1);
            if ( !v9 || v8 >= (*((_DWORD *)v7 + 2) - v9) / 84 )
              _invalid_parameter_noinfo();
            if ( *(_DWORD *)(v18 + *((_DWORD *)v7 + 1)) == *(_DWORD *)(v19 + 4) )
            {
LABEL_13:
              v10 = *((_DWORD *)v7 + 1);
              if ( !v10 || v8 >= (*((_DWORD *)v7 + 2) - v10) / 84 )
                _invalid_parameter_noinfo();
              if ( *(_DWORD *)(v18 + *((_DWORD *)v7 + 1) + 64) != 6 )
              {
                v11 = sub_10005CCC(v8);
                v21 = *(float *)(v11 + 68);
                v22 = *(float *)(v11 + 76);
                v12 = (int)((double)(int)CHotZonePic::GetPicWidth(v1[974]) * ((v21 - v6[4]) / (v6[7] - v6[4])));
                v13 = (int)((double)(int)CHotZonePic::GetPicHeight(this[974]) * ((v6[9] - v22) / (v6[9] - v6[6])));
                SetRect(&rc, v12 - 8, v13 - 8, v12 + 8, v13 + 8);
                if ( *(int *)(sub_10005CCC(v8) + 64) < 0 || *(int *)(sub_10005CCC(v8) + 64) > 5 )
                {
                  v1 = this;
                }
                else
                {
                  v14 = sub_10005CCC(v8);
                  v1 = this;
                  inserted = CHotZonePic::InsertHoverPic(
                               this[974],
                               5,
                               (char *)&unk_103B7BB8 + 28 * *(_DWORD *)(v14 + 64),
                               &rc,
                               1,
                               0,
                               0,
                               -1,
                               0.0);
                  CHotZonePic::AnimateHoverPic(this[974], inserted, 1, 0.80000001, 1.0, -1.0);
                }
              }
            }
            v18 += 84;
            ++v8;
          }
          while ( v8 < sub_1000108C() );
        }
      }
    }
  }
}
