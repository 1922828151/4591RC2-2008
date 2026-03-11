/*
 * func-name: ?RefreshEntryPoint@CBattleFieldDetailUI@@QAEXJ@Z_0
 * func-address: 0x10255760
 * callers: 0x1000783d
 * callees: 0x1000194c, 0x10005b23, 0x1000a105, 0x10010d61, 0x1001949d, 0x102c9fe0
 */

void __thiscall CBattleFieldDetailUI::RefreshEntryPoint(CHotZonePic **this, CHotZonePic *a2)
{
  const struct GameClient::BATTLE_FIELD_INFO *BattleFieldIntro; // ebx
  unsigned int v4; // edi
  int v5; // eax
  int v6; // eax
  int v7; // eax
  int v8; // eax
  int v9; // eax
  _DWORD *v10; // eax
  int v11; // eax
  int v12; // [esp+14h] [ebp-54h]
  double v13; // [esp+18h] [ebp-50h]
  double v14; // [esp+20h] [ebp-48h]
  double v15; // [esp+28h] [ebp-40h]
  struct tagRECT rc; // [esp+30h] [ebp-38h] BYREF
  _BYTE v17[28]; // [esp+40h] [ebp-28h] BYREF
  int v18; // [esp+64h] [ebp-4h]
  int i; // [esp+6Ch] [ebp+4h]

  if ( this[968] == a2 )
  {
    BattleFieldIntro = GameClient::BattleFieldManager::GetBattleFieldIntro(
                         GameClient::BattleFieldManager::s_pInstance,
                         (int)a2,
                         1);
    if ( BattleFieldIntro )
    {
      v12 = sub_1000194C(0);
      if ( v12 )
      {
        CHotZonePic::RemoveAllHotZone(this[969]);
        sub_1001949D();
        v4 = 0;
        for ( i = 0; ; i += 84 )
        {
          v5 = *((_DWORD *)BattleFieldIntro + 31);
          if ( !v5 || v4 >= (*((_DWORD *)BattleFieldIntro + 32) - v5) / 84 )
            break;
          v6 = *((_DWORD *)BattleFieldIntro + 31);
          if ( !v6 || v4 >= (*((_DWORD *)BattleFieldIntro + 32) - v6) / 84 )
            _invalid_parameter_noinfo();
          if ( *(unsigned __int8 *)(i + *((_DWORD *)BattleFieldIntro + 31) + 74) == *(_DWORD *)(v12 + 48) )
          {
            v7 = *((_DWORD *)BattleFieldIntro + 31);
            if ( !v7 || v4 >= (*((_DWORD *)BattleFieldIntro + 32) - v7) / 84 )
              _invalid_parameter_noinfo();
            if ( *(_BYTE *)(i + *((_DWORD *)BattleFieldIntro + 31) + 73) == 1 )
            {
              v14 = (*(float *)(sub_10010D61(v4) + 4) + *((float *)BattleFieldIntro + 27))
                  / (*((float *)BattleFieldIntro + 27) + *((float *)BattleFieldIntro + 27));
              v8 = (int)((double)(int)CHotZonePic::GetPicWidth(this[969]) * v14);
              v13 = *((float *)BattleFieldIntro + 29);
              LODWORD(v14) = v8;
              v15 = (v13 - *(float *)(sub_10010D61(v4) + 8)) / (v13 + v13);
              v9 = (int)((double)(int)CHotZonePic::GetPicHeight(this[969]) * v15);
              SetRect(&rc, LODWORD(v14) - 16, v9 - 16, LODWORD(v14) + 16, v9 + 16);
              std::string::string(v17, "MachineCabin_m_1.dds");
              v18 = 0;
              v10 = (_DWORD *)sub_10010D61(v4);
              LODWORD(v14) = CHotZonePic::AddHotZone(this[969], &rc, v17, 0, 1, *v10);
              v18 = -1;
              std::string::~string(v17);
              v11 = sub_10010D61(v4);
              *(_DWORD *)sub_10005B23(v11) = LODWORD(v14);
              CHotZonePic::HighLight(this[969], LODWORD(v14), 1);
            }
          }
          ++v4;
        }
      }
    }
  }
}
