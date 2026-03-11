/*
 * func-name: ?Tick@BigMapState@@UAEXXZ_0
 * func-address: 0x1027e8f0
 * callers: 0x100019dd
 * callees: 0x1000194c, 0x10004638, 0x100077ed, 0x100091e7, 0x1000a3a8, 0x1000b08c, 0x1000ed13, 0x1000f19b, 0x10013647, 0x10017c29
 */

void __thiscall BigMapState::Tick(BigMapState *this)
{
  int v2; // eax
  int v3; // eax
  bool v4; // zf
  int v5; // eax
  int v6; // edi
  struct GameClient::GroupManager *v7; // eax
  CREDialog *v8; // ecx
  struct CREControl *Control; // eax
  struct CREControl *v10; // eax
  struct CREControl *v11; // eax
  int v12; // edi
  GameClient::RobotManager *v13; // eax
  struct GameClient::Robot *Robot; // eax
  Outpop::Utility::Ref_Object *v15; // ecx
  int v16; // [esp+28h] [ebp-24h]
  Outpop::Utility::Ref_Object *v17; // [esp+38h] [ebp-14h] BYREF
  Outpop::Utility::Ref_Object *v18; // [esp+3Ch] [ebp-10h] BYREF
  int v19; // [esp+48h] [ebp-4h]

  v2 = *((_DWORD *)this + 1);
  if ( v2 )
  {
    CHotZonePic::RemoveHoverPic(*(CHotZonePic **)(v2 + 3896), 1, 0);
    CRadarMapUI::RefreshEntity(*((CRadarMapUI **)this + 1));
    CRadarMapUI::RefreshGroupmate(*((CRadarMapUI **)this + 1));
    CHotZonePic::RemoveHoverPic(*(CHotZonePic **)(*((_DWORD *)this + 1) + 3896), 6, 0);
    CRadarMapUI::DrawSelf(*((CRadarMapUI **)this + 1));
    CTYDialog::CenterDialog(*((CTYDialog **)this + 1), 1, 1);
    v3 = *((_DWORD *)this + 1);
    v4 = *(_BYTE *)(v3 + 4090) == 0;
    v5 = *(_DWORD *)(v3 + 3896);
    *(_BYTE *)(v5 + 644) = v4;
    v6 = sub_1000194C(0);
    if ( v6 )
    {
      v7 = GameClient::GroupManager::Instance();
      v8 = (CREDialog *)*((_DWORD *)this + 1);
      if ( *((_DWORD *)v7 + 45) == *(_DWORD *)(v6 + 4) )
      {
        Control = CREDialog::GetControl(v8, 5);
        (*(void (__thiscall **)(struct CREControl *, int))(*(_DWORD *)Control + 136))(Control, 1);
        v10 = CREDialog::GetControl(*((CREDialog **)this + 1), 5);
        (*(void (__thiscall **)(struct CREControl *, int, int))(*(_DWORD *)v10 + 156))(
          v10,
          *(_DWORD *)(*((_DWORD *)this + 1) + 700) - 89,
          *(_DWORD *)(*((_DWORD *)this + 1) + 704) - 169);
      }
      else
      {
        v11 = CREDialog::GetControl(v8, 5);
        (*(void (__thiscall **)(struct CREControl *, _DWORD))(*(_DWORD *)v11 + 136))(v11, 0);
        CRadarMapUI::SetInSelectPosMode(*((CRadarMapUI **)this + 1), 0);
      }
    }
  }
  if ( *((_BYTE *)this + 48) )
  {
    if ( *(float *)&GSeconds - *((float *)this + 9) > 3.0 )
    {
      v12 = sub_1000194C(0);
      if ( v12 )
      {
        v16 = *(_DWORD *)(v12 + 292);
        v13 = GameClient::RobotManager::Instance();
        Robot = GameClient::RobotManager::GetRobot(v13, v16);
        if ( Robot && *((float *)Robot + 100) < 0.00009999999747378752 )
        {
          sub_100077ED((int)&v17, 9, 234, COERCE_INT(0.0), 1, 512);
          v19 = 0;
          j_nullsub_44((int)&v17);
          v15 = v17;
          v4 = v17 == 0;
          *((float *)this + 9) = *(float *)&GSeconds;
          v19 = -1;
          if ( !v4 )
            Outpop::Utility::Ref_Object::release(v15);
        }
        else
        {
          CHotZonePic::RemoveAllHotZone(*(CHotZonePic **)(*((_DWORD *)this + 1) + 3896));
        }
      }
    }
  }
  if ( *(float *)&GSeconds - *((float *)this + 10) > 5.0 )
  {
    if ( sub_1000194C(0) )
    {
      *((float *)this + 10) = *(float *)&GSeconds;
      sub_100077ED((int)&v17, 9, 248, COERCE_INT(0.0), 1, 512);
      v19 = 1;
      j_nullsub_44((int)&v17);
      v19 = -1;
      if ( v17 )
        Outpop::Utility::Ref_Object::release(v17);
    }
  }
  if ( *(float *)&GSeconds - *((float *)this + 11) > 60.0 && sub_1000194C(0) )
  {
    *((float *)this + 11) = *(float *)&GSeconds;
    sub_100077ED((int)&v18, 9, 2, COERCE_INT(0.0), 1, 512);
    v19 = 2;
    j_nullsub_44((int)&v18);
    v19 = -1;
    if ( v18 )
      Outpop::Utility::Ref_Object::release(v18);
  }
}
