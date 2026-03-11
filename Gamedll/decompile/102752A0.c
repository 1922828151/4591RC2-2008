/*
 * func-name: ?RefreshBattleLoc@CHallMapUI@@QAEXXZ_0
 * func-address: 0x102752a0
 * callers: 0x100182fa
 * callees: 0x1000a105, 0x10019c68, 0x102c9d50, 0x102c9fe0
 */

void __thiscall CHallMapUI::RefreshBattleLoc(CHotZonePic **this)
{
  unsigned int v2; // ebp
  const struct GameClient::BATTLE_FIELD_INFO *BattleFieldIntro; // eax
  const struct GameClient::BATTLE_FIELD_INFO *v4; // edi
  int v5; // esi
  int v6; // eax
  int v7; // kr00_4
  _DWORD *v8; // eax
  int v9; // eax
  char v10[4]; // [esp+18h] [ebp-2Ch] BYREF
  void *v11; // [esp+1Ch] [ebp-28h]
  int v12; // [esp+20h] [ebp-24h]
  int v13; // [esp+24h] [ebp-20h]
  struct tagRECT rc; // [esp+28h] [ebp-1Ch] BYREF
  int v15; // [esp+40h] [ebp-4h]

  CHotZonePic::RemoveAllHotZone(this[968]);
  v11 = 0;
  v12 = 0;
  v13 = 0;
  v15 = 0;
  GameClient::BattleFieldManager::GetBattleFields((int)v10);
  v2 = 0;
  while ( v11 )
  {
    if ( v2 >= (v12 - (int)v11) >> 2 )
    {
      operator delete(v11);
      return;
    }
    BattleFieldIntro = GameClient::BattleFieldManager::GetBattleFieldIntro(
                         GameClient::BattleFieldManager::s_pInstance,
                         *((_DWORD *)v11 + v2),
                         1);
    v4 = BattleFieldIntro;
    if ( BattleFieldIntro )
    {
      v5 = (int)((double)(*((_DWORD *)BattleFieldIntro + 16) / 1000) / 1.885);
      v6 = (int)((double)(*((_DWORD *)BattleFieldIntro + 17) / 1000) / 3.134);
      v7 = dword_103B7940[*((unsigned __int8 *)v4 + 57)];
      SetRect(&rc, v5 - v7 / 2, v6 - v7 / 2, v7 / 2 + v5, v7 / 2 + v6);
      v8 = v11;
      if ( !v11 || v2 >= (v12 - (int)v11) >> 2 )
      {
        _invalid_parameter_noinfo();
        v8 = v11;
      }
      v9 = CHotZonePic::AddHotZone(
             this[968],
             &rc,
             (char *)&unk_103B7930 + 28 * *((unsigned __int8 *)v4 + 57),
             0,
             1,
             v8[v2]);
      CHotZonePic::HighLight(this[968], v9, 1);
    }
    ++v2;
  }
}
