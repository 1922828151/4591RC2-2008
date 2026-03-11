/*
 * func-name: ?ChangeMap@CRadarMapUI@@QAEXJ@Z_0
 * func-address: 0x1027a910
 * callers: 0x1000eb56
 * callees: 0x1000516e, 0x1000a105, 0x102c8d6c, 0x102c9ea8
 */

void __thiscall CRadarMapUI::ChangeMap(CRadarMapUI *this, int a2)
{
  const struct GameClient::BATTLE_FIELD_INFO *BattleFieldIntro; // eax
  const struct GameClient::BATTLE_FIELD_INFO *v4; // edi
  LONG top; // ecx
  LONG right; // edx
  LONG bottom; // eax
  const char *v8; // eax
  const wchar_t *v9; // eax
  struct Game *v10; // eax
  struct CREControl *Control; // eax
  CREStatic *v12; // esi
  const char *v13; // eax
  const wchar_t *v14; // eax
  int v15; // [esp-1Ch] [ebp-34h]
  struct tagRECT rc; // [esp+8h] [ebp-10h] BYREF
  int v17; // [esp+1Ch] [ebp+4h]

  *((_DWORD *)this + 1023) = a2;
  BattleFieldIntro = GameClient::BattleFieldManager::GetBattleFieldIntro(
                       GameClient::BattleFieldManager::s_pInstance,
                       a2,
                       1);
  v4 = BattleFieldIntro;
  if ( BattleFieldIntro )
  {
    SetRect(&rc, 0, 0, *((_DWORD *)BattleFieldIntro + 18), *((_DWORD *)BattleFieldIntro + 19));
    top = rc.top;
    right = rc.right;
    *((_DWORD *)this + 997) = rc.left;
    bottom = rc.bottom;
    *((_DWORD *)this + 998) = top;
    *((_DWORD *)this + 999) = right;
    *((_DWORD *)this + 1000) = bottom;
    std::string::operator=((char *)this + 3960, (char *)v4 + 80);
    if ( *((_DWORD *)this + 995) )
    {
      v17 = *(_DWORD *)this;
      v8 = (const char *)std::string::c_str((char *)this + 3960);
      v9 = atow(v8);
      (*(void (__thiscall **)(CRadarMapUI *, const wchar_t *))(v17 + 20))(this, v9);
    }
    if ( !*((_BYTE *)this + 4090) )
      CHotZonePic::SetPic(*((_DWORD *)this + 974), (char *)v4 + 80);
    v10 = Game::Instance();
    World::GetWorldBBox(*((World **)v10 + 25), (CRadarMapUI *)((char *)this + 3920));
    Control = CREDialog::GetControl(this, 3);
    v12 = (CREStatic *)_RTDynamicCast(Control, v15, 0, &CREControl `RTTI Type Descriptor');
    v13 = (const char *)std::string::c_str(v4);
    v14 = atow(v13);
    CREStatic::SetText(v12, v14);
  }
}
