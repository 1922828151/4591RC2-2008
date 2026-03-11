/*
 * func-name: ?OnSelectEntryPoint@CBattleFieldDetailUI@@IAEXJ@Z_0
 * func-address: 0x10254a00
 * callers: 0x10007996
 * callees: 0x1000194c, 0x1000a105, 0x100188bd, 0x102c9fe0
 */

void __thiscall CBattleFieldDetailUI::OnSelectEntryPoint(CBattleFieldDetailUI *this, int PicWidth)
{
  int v3; // eax
  float *v4; // esi
  int v5; // ebp
  int v6; // ebx
  CHotZonePic *v7; // ecx
  const struct GameClient::BATTLE_FIELD_INFO *BattleFieldIntro; // esi
  unsigned int v9; // ebx
  int i; // ebp
  int v11; // eax
  int v12; // eax
  int v13; // eax
  CHotZonePic *v14; // ecx
  int v15; // eax
  int v16; // ebx
  int v17; // eax
  int v18; // ecx
  struct CREControl *Control; // eax
  int v20; // [esp+14h] [ebp-5Ch]
  float *v21; // [esp+30h] [ebp-40h] BYREF
  int v22; // [esp+34h] [ebp-3Ch]
  struct tagRECT rc; // [esp+38h] [ebp-38h] BYREF
  _BYTE v24[28]; // [esp+48h] [ebp-28h] BYREF
  int v25; // [esp+6Ch] [ebp-4h]

  CHotZonePic::RemoveHoverPic(*((CHotZonePic **)this + 969), 1, 0);
  v3 = *((_DWORD *)this + 982);
  if ( v3 != -1 )
  {
    CHotZonePic::HighLight(*((CHotZonePic **)this + 969), v3, 1);
    *((_DWORD *)this + 982) = -1;
  }
  sub_100188BD((int)&v21, (int)&PicWidth);
  v4 = v21;
  v5 = *((_DWORD *)this + 986);
  if ( !v21 || v21 != (float *)((char *)this + 3940) )
    _invalid_parameter_noinfo();
  v6 = v22;
  if ( v22 != v5 )
  {
    if ( !v4 )
      _invalid_parameter_noinfo();
    if ( v6 == *((_DWORD *)v4 + 1) )
      _invalid_parameter_noinfo();
    v7 = (CHotZonePic *)*((_DWORD *)this + 969);
    v20 = *(_DWORD *)(v6 + 12);
    *((_DWORD *)this + 982) = v20;
    CHotZonePic::HighLight(v7, v20, 0);
    BattleFieldIntro = GameClient::BattleFieldManager::GetBattleFieldIntro(
                         GameClient::BattleFieldManager::s_pInstance,
                         *((_DWORD *)this + 968),
                         1);
    if ( BattleFieldIntro )
    {
      if ( sub_1000194C(0) )
      {
        v9 = 0;
        for ( i = 0; ; i += 84 )
        {
          v11 = *((_DWORD *)BattleFieldIntro + 31);
          if ( !v11 || v9 >= (*((_DWORD *)BattleFieldIntro + 32) - v11) / 84 )
            break;
          v12 = *((_DWORD *)BattleFieldIntro + 31);
          if ( !v12 || v9 >= (*((_DWORD *)BattleFieldIntro + 32) - v12) / 84 )
            _invalid_parameter_noinfo();
          v13 = *((_DWORD *)BattleFieldIntro + 31);
          if ( *(_DWORD *)(v13 + i) == PicWidth )
          {
            if ( !v13 || v9 >= (*((_DWORD *)BattleFieldIntro + 32) - v13) / 84 )
              _invalid_parameter_noinfo();
            v14 = (CHotZonePic *)*((_DWORD *)this + 969);
            v21 = (float *)(84 * v9 + *((_DWORD *)BattleFieldIntro + 31));
            PicWidth = CHotZonePic::GetPicWidth(v14);
            v21 = (float *)(int)((double)PicWidth
                               * ((v21[1] + *((float *)BattleFieldIntro + 27))
                                / (*((float *)BattleFieldIntro + 27) + *((float *)BattleFieldIntro + 27))));
            v15 = *((_DWORD *)BattleFieldIntro + 31);
            if ( !v15 || v9 >= (*((_DWORD *)BattleFieldIntro + 32) - v15) / 84 )
              _invalid_parameter_noinfo();
            v16 = 84 * v9 + *((_DWORD *)BattleFieldIntro + 31);
            PicWidth = CHotZonePic::GetPicHeight(*((CHotZonePic **)this + 969));
            v17 = (int)((double)PicWidth
                      * ((*((float *)BattleFieldIntro + 29) - *(float *)(v16 + 8))
                       / (*((float *)BattleFieldIntro + 29) + *((float *)BattleFieldIntro + 29))));
            SetRect(&rc, (int)(v21 - 4), v17 - 16, (int)(v21 + 4), v17 + 16);
            std::string::string(v24, "MachineCabin_m_2.dds");
            v18 = *((_DWORD *)this + 969);
            v25 = 0;
            CHotZonePic::InsertHoverPic(v18, 1, v24, &rc, 1, 0, 0, -1, 0.0);
            v25 = -1;
            std::string::~string(v24);
            CHotZonePic::SetHoverPicTypeEnabled(*((CHotZonePic **)this + 969), 1, 1);
            Control = CREDialog::GetControl(this, 12);
            (*(void (__thiscall **)(struct CREControl *, int))(*(_DWORD *)Control + 128))(Control, 1);
            return;
          }
          ++v9;
        }
      }
    }
  }
}
