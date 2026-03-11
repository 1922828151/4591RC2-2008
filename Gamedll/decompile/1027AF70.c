/*
 * func-name: ?OnEnter@RadarMapState@@UAEXXZ_0
 * func-address: 0x1027af70
 * callers: 0x1001a690
 * callees: none
 */

void __thiscall RadarMapState::OnEnter(RadarMapState *this)
{
  int v2; // edi
  int v3; // eax
  CREDialog *v4; // esi
  struct CREControl *Control; // eax
  struct CREControl *v6; // eax
  _DWORD v7[7]; // [esp+18h] [ebp-68h] BYREF
  struct tagRECT *p_rc; // [esp+34h] [ebp-4Ch]
  _DWORD *v9; // [esp+44h] [ebp-3Ch]
  struct tagRECT rc; // [esp+48h] [ebp-38h] BYREF
  _BYTE v11[28]; // [esp+58h] [ebp-28h] BYREF
  int v12; // [esp+7Ch] [ebp-4h]

  (*(void (__thiscall **)(_DWORD, int, _DWORD))(**(_DWORD **)(*((_DWORD *)this + 1) + 3896) + 156))(
    *(_DWORD *)(*((_DWORD *)this + 1) + 3896),
    17,
    0);
  (*(void (__thiscall **)(_DWORD, int, int))(**(_DWORD **)(*((_DWORD *)this + 1) + 3896) + 160))(
    *(_DWORD *)(*((_DWORD *)this + 1) + 3896),
    156,
    148);
  (*(void (__thiscall **)(_DWORD, _DWORD, _DWORD))(**(_DWORD **)(*((_DWORD *)this + 1) + 3900) + 156))(
    *(_DWORD *)(*((_DWORD *)this + 1) + 3900),
    0,
    0);
  (*(void (__thiscall **)(_DWORD, int, int))(**(_DWORD **)(*((_DWORD *)this + 1) + 3900) + 160))(
    *(_DWORD *)(*((_DWORD *)this + 1) + 3900),
    173,
    176);
  SetRect(&rc, 615, 14, 788, 190);
  std::wstring::wstring(v11, L"GUI.dds");
  v2 = *((_DWORD *)this + 1);
  p_rc = &rc;
  v9 = v7;
  v12 = 0;
  std::wstring::wstring(v7, v11);
  CPictureLabel::ChangeTexture(*(_DWORD *)(v2 + 3900), v7[0], v7[1], v7[2], v7[3], v7[4], v7[5], v7[6], p_rc);
  v12 = -1;
  std::wstring::~wstring(v11);
  *(_BYTE *)(*((_DWORD *)this + 1) + 62) = 0;
  v3 = *((_DWORD *)this + 1);
  *(_DWORD *)(v3 + 700) = 173;
  *(_DWORD *)(v3 + 704) = 176;
  CTYDialog::NestToEdge(*((CTYDialog **)this + 1), 6u);
  *(_DWORD *)(*((_DWORD *)this + 1) + 4096) = 1;
  CHotZonePic::SetHoverPicTypeEnabled(*(CHotZonePic **)(*((_DWORD *)this + 1) + 3896), 1, 1);
  CHotZonePic::SetHoverPicTypeEnabled(*(CHotZonePic **)(*((_DWORD *)this + 1) + 3896), 4, 1);
  CHotZonePic::SetHoverPicTypeEnabled(*(CHotZonePic **)(*((_DWORD *)this + 1) + 3896), 6, 1);
  CHotZonePic::SetHoverPicTypeEnabled(*(CHotZonePic **)(*((_DWORD *)this + 1) + 3896), 5, 1);
  *(_BYTE *)(*(_DWORD *)(*((_DWORD *)this + 1) + 3896) + 625) = 0;
  v4 = (CREDialog *)*((_DWORD *)this + 1);
  Control = CREDialog::GetControl(v4, 3);
  (*(void (__thiscall **)(struct CREControl *, int))(*(_DWORD *)Control + 136))(Control, 1);
  v6 = CREDialog::GetControl(v4, 4);
  (*(void (__thiscall **)(struct CREControl *, int))(*(_DWORD *)v6 + 136))(v6, 1);
}
