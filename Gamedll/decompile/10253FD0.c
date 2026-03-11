/*
 * func-name: ?AddBattlePoint@CBattleFieldDetailUI@@QAEXMME@Z_0
 * func-address: 0x10253fd0
 * callers: 0x10013fcf
 * callees: 0x1000a105, 0x102c9fe0
 */

void __thiscall CBattleFieldDetailUI::AddBattlePoint(
        CBattleFieldDetailUI *this,
        float a2,
        float a3,
        unsigned __int8 a4)
{
  const struct GameClient::BATTLE_FIELD_INFO *BattleFieldIntro; // ebx
  int v6; // edi
  int v7; // ebx
  double v8; // st7
  int v9; // ecx
  int inserted; // edi
  struct tagRECT rc; // [esp+48h] [ebp-38h] BYREF
  _BYTE v12[28]; // [esp+58h] [ebp-28h] BYREF
  int v13; // [esp+7Ch] [ebp-4h]

  BattleFieldIntro = GameClient::BattleFieldManager::GetBattleFieldIntro(
                       GameClient::BattleFieldManager::s_pInstance,
                       *((_DWORD *)this + 968),
                       1);
  if ( BattleFieldIntro )
  {
    v6 = (int)((double)(int)CHotZonePic::GetPicWidth(*((CHotZonePic **)this + 969))
             * ((*((float *)BattleFieldIntro + 27) + a2)
              / (*((float *)BattleFieldIntro + 27) + *((float *)BattleFieldIntro + 27))));
    v7 = (int)((double)(int)CHotZonePic::GetPicHeight(*((CHotZonePic **)this + 969))
             * ((*((float *)BattleFieldIntro + 29) - a3)
              / (*((float *)BattleFieldIntro + 29) + *((float *)BattleFieldIntro + 29))));
    v8 = flt_103B3AEC[a4] * 32.0;
    SetRect(&rc, v6 - (int)v8 / 2, v7 - (int)v8 / 2, (int)v8 / 2 + v6, (int)v8 / 2 + v7);
    std::string::string(v12, "Icon_BattleSpot.dds");
    v9 = *((_DWORD *)this + 969);
    v13 = 0;
    inserted = CHotZonePic::InsertHoverPic(v9, 2, v12, &rc, 1, 0, 0, -1, 0.0);
    v13 = -1;
    std::string::~string(v12);
    CHotZonePic::SetHoverPicTypeEnabled(*((CHotZonePic **)this + 969), 2, 1);
    CHotZonePic::AnimateHoverPic(*((_DWORD *)this + 969), inserted, 1, 0.80000001, 1.0, -1.0);
  }
}
