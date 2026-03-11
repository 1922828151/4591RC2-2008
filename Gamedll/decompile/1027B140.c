/*
 * func-name: ?OnExit@RadarMapState@@UAEXXZ_0
 * func-address: 0x1027b140
 * callers: 0x10016df6
 * callees: none
 */

void __thiscall RadarMapState::OnExit(RadarMapState *this)
{
  CREDialog *v2; // edi
  struct CREControl *Control; // eax
  struct CREControl *v4; // eax

  CHotZonePic::SetHoverPicTypeEnabled(*(CHotZonePic **)(*((_DWORD *)this + 1) + 3896), 1, 0);
  CHotZonePic::SetHoverPicTypeEnabled(*(CHotZonePic **)(*((_DWORD *)this + 1) + 3896), 4, 0);
  CHotZonePic::SetHoverPicTypeEnabled(*(CHotZonePic **)(*((_DWORD *)this + 1) + 3896), 6, 0);
  CHotZonePic::SetHoverPicTypeEnabled(*(CHotZonePic **)(*((_DWORD *)this + 1) + 3896), 5, 0);
  v2 = (CREDialog *)*((_DWORD *)this + 1);
  Control = CREDialog::GetControl(v2, 3);
  (*(void (__thiscall **)(struct CREControl *, _DWORD))(*(_DWORD *)Control + 136))(Control, 0);
  v4 = CREDialog::GetControl(v2, 4);
  (*(void (__thiscall **)(struct CREControl *, _DWORD))(*(_DWORD *)v4 + 136))(v4, 0);
  *((_DWORD *)this + 1) = 0;
}
