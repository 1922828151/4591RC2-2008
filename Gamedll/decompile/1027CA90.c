/*
 * func-name: ?OnEnter@BigMapState@@UAEXXZ_0
 * func-address: 0x1027ca90
 * callers: 0x1001a1e5
 * callees: 0x1000194c, 0x1000a3a8, 0x1000e33b, 0x1000ed13, 0x102c9fe0
 */

void __thiscall BigMapState::OnEnter(BigMapState *this)
{
  EventAttemper *v2; // eax
  EventAttemper *v3; // eax
  EventAttemper *v4; // eax
  int v5; // eax
  bool v6; // zf
  int v7; // eax
  int v8; // ecx
  int v9; // ecx
  int v10; // eax
  int v11; // edi
  float v12; // eax
  CHotZonePic *v13; // ecx
  float v14; // edi
  int v15; // eax
  int v16; // eax
  int v17; // ecx
  int v18; // ecx
  float *v19; // eax
  int v20; // edx
  double v21; // st7
  int v22; // ecx
  int v23; // eax
  GameClient::RobotManager *v24; // eax
  struct GameClient::Robot *Robot; // eax
  _DWORD v26[5]; // [esp+38h] [ebp-74h] BYREF
  int v27; // [esp+4Ch] [ebp-60h]
  int v28; // [esp+50h] [ebp-5Ch]
  int p_rc; // [esp+54h] [ebp-58h]
  int PicHeight; // [esp+6Ch] [ebp-40h]
  float v31; // [esp+70h] [ebp-3Ch]
  struct tagRECT rc; // [esp+74h] [ebp-38h] BYREF
  _BYTE v33[28]; // [esp+84h] [ebp-28h] BYREF
  int v34; // [esp+A8h] [ebp-4h]

  v2 = (EventAttemper *)EventAttemper::Instance(19, 5331);
  v28 = 5600;
  v27 = 19;
  *((_DWORD *)this + 3) = EventAttemper::AddObserver(v2);
  v3 = (EventAttemper *)EventAttemper::Instance(v27, v28);
  p_rc = (int)this + 8;
  v28 = 5610;
  v27 = 19;
  *((_DWORD *)this + 7) = EventAttemper::AddObserver(v3);
  v4 = (EventAttemper *)EventAttemper::Instance(v27, v28);
  v5 = EventAttemper::AddObserver(v4);
  v6 = *((_BYTE *)this + 48) == 0;
  *((_DWORD *)this + 8) = v5;
  if ( !v6 )
  {
    v7 = *((_DWORD *)this + 1);
    if ( *(_BYTE *)(v7 + 4090) )
    {
      *((_DWORD *)this + 24) = 1;
      *((_DWORD *)this + 23) = *(_DWORD *)(v7 + 4096);
      p_rc = v7 + 3988;
      v8 = *(_DWORD *)(v7 + 3896);
      v28 = v7 + 3960;
      *(_BYTE *)(v7 + 4090) = 0;
      CHotZonePic::SetPic(v8, v28);
      v9 = *(_DWORD *)(*((_DWORD *)this + 1) + 3872);
      if ( v9 )
        (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v9 + 20))(v9, 0);
    }
  }
  v10 = *((_DWORD *)this + 1);
  p_rc = 0;
  v28 = 0;
  v27 = 0;
  *(_BYTE *)(v10 + 62) = 1;
  SetRect(&rc, 0, v27, v28, p_rc);
  std::wstring::wstring(v33, &unk_10322D3C);
  v11 = *((_DWORD *)this + 1);
  p_rc = (int)&rc;
  v31 = COERCE_FLOAT(v26);
  v34 = 1;
  std::wstring::wstring(v26, v33);
  CPictureLabel::ChangeTexture(*(_DWORD *)(v11 + 3900), v26[0], v26[1], v26[2], v26[3], v26[4], v27, v28, p_rc);
  v34 = -1;
  std::wstring::~wstring(v33);
  (*(void (__thiscall **)(_DWORD, _DWORD, _DWORD))(**(_DWORD **)(*((_DWORD *)this + 1) + 3896) + 156))(
    *(_DWORD *)(*((_DWORD *)this + 1) + 3896),
    0,
    0);
  v12 = COERCE_FLOAT(CHotZonePic::GetPicWidth(*(CHotZonePic **)(*((_DWORD *)this + 1) + 3896)));
  v13 = *(CHotZonePic **)(*((_DWORD *)this + 1) + 3896);
  v14 = v12;
  v31 = v12;
  PicHeight = CHotZonePic::GetPicHeight(v13);
  if ( LODWORD(v14) == PicHeight )
  {
    v15 = *((_DWORD *)this + 1);
    *(_DWORD *)(v15 + 700) = 501;
    *(_DWORD *)(v15 + 704) = 501;
    (*(void (__thiscall **)(_DWORD, int, int))(**(_DWORD **)(*((_DWORD *)this + 1) + 3896) + 160))(
      *(_DWORD *)(*((_DWORD *)this + 1) + 3896),
      501,
      501);
  }
  else
  {
    v31 = (double)PicHeight / 501.0 * (double)SLODWORD(v31);
    v16 = (int)(v31 + 0.5);
    v17 = *((_DWORD *)this + 1);
    *(_DWORD *)(v17 + 700) = v16;
    *(_DWORD *)(v17 + 704) = 501;
    (*(void (__thiscall **)(_DWORD, int, int))(**(_DWORD **)(*((_DWORD *)this + 1) + 3896) + 160))(
      *(_DWORD *)(*((_DWORD *)this + 1) + 3896),
      v16,
      501);
  }
  CTYDialog::CenterDialog(*((CTYDialog **)this + 1), 1, 1);
  CTYDialog::SetHasInput(*((CTYDialog **)this + 1), 0);
  *(_DWORD *)(*((_DWORD *)this + 1) + 4096) = 1;
  BigMapState::SetMapRect(this);
  v18 = *((_DWORD *)this + 1);
  v19 = (float *)(v18 + 4004);
  if ( !*(_BYTE *)(v18 + 4090) )
    v19 = (float *)(v18 + 3920);
  v20 = *(_DWORD *)(v18 + 3896);
  v21 = v19[7] - v19[4];
  p_rc = 1;
  v28 = 1;
  v31 = 500.0 / v21;
  *(float *)(v20 + 640) = v31;
  v22 = *(_DWORD *)(*((_DWORD *)this + 1) + 3896);
  v31 = 500.0 / (v19[9] - v19[6]);
  *(float *)(v22 + 636) = v31;
  CHotZonePic::SetHoverPicTypeEnabled(*(CHotZonePic **)(*((_DWORD *)this + 1) + 3896), v28, p_rc);
  CHotZonePic::SetHoverPicTypeEnabled(*(CHotZonePic **)(*((_DWORD *)this + 1) + 3896), 4, 1);
  CHotZonePic::SetHoverPicTypeEnabled(*(CHotZonePic **)(*((_DWORD *)this + 1) + 3896), 6, 1);
  CHotZonePic::SetHoverPicTypeEnabled(*(CHotZonePic **)(*((_DWORD *)this + 1) + 3896), 5, 1);
  CHotZonePic::SetHoverPicTypeEnabled(*(CHotZonePic **)(*((_DWORD *)this + 1) + 3896), 8, 1);
  CHotZonePic::SetHoverPicTypeEnabled(*(CHotZonePic **)(*((_DWORD *)this + 1) + 3896), 10, 1);
  *(_BYTE *)(*(_DWORD *)(*((_DWORD *)this + 1) + 3896) + 625) = 1;
  v23 = sub_1000194C(0);
  if ( v23 )
  {
    p_rc = *(_DWORD *)(v23 + 292);
    v24 = GameClient::RobotManager::Instance();
    Robot = GameClient::RobotManager::GetRobot(v24, p_rc);
    if ( Robot )
    {
      if ( *((float *)Robot + 100) < 0.00009999999747378752 )
      {
        if ( *((_DWORD *)Robot + 90) )
          CTYDialog::SetHasInput(*((CTYDialog **)this + 1), 1);
      }
    }
  }
}
