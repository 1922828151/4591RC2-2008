/*
 * func-name: sub_10260020
 * func-address: 0x10260020
 * callers: 0x1000345e
 * callees: 0x102c9d98
 */

int __thiscall sub_10260020(int this)
{
  CSeperateLine *v2; // edi
  struct CREControl *v3; // eax
  CREDialog *v4; // ecx
  CREStatic *v5; // eax
  struct CREControl *v6; // ebx
  CREDialog *v7; // ecx
  CPictureLabel *v8; // eax
  struct CREControl *v9; // ebx
  CREDialog *v10; // ecx
  CREButton *v11; // eax
  struct CREControl *v12; // eax
  CREDialog *v13; // ecx
  int v14; // eax
  int v15; // eax
  int v16; // ecx
  int v17; // ecx
  int v18; // ecx
  unsigned int v19; // eax
  CREDialog *v20; // ecx
  struct REFontNode *Font; // eax
  unsigned int v22; // eax
  CREDialog *v23; // ecx
  struct REFontNode *v24; // eax
  struct CREControl *v26; // [esp+44h] [ebp-90h]
  struct tagRECT rc; // [esp+48h] [ebp-8Ch] BYREF
  _DWORD v28[14]; // [esp+58h] [ebp-7Ch] BYREF
  _DWORD v29[14]; // [esp+90h] [ebp-44h] BYREF
  int v30; // [esp+D0h] [ebp-4h]

  v2 = (CSeperateLine *)operator new(0x220u);
  v3 = 0;
  v30 = 0;
  if ( v2 )
  {
    CSeperateLine::CSeperateLine(v2, *(struct CREDialog **)(this + 112));
    *(_DWORD *)v2 = &CSeperateLine::`vftable';
    v3 = v2;
  }
  v4 = *(CREDialog **)(this + 112);
  v30 = -1;
  *(_DWORD *)(this + 544) = v3;
  CREDialog::InitControl(v4, v3);
  (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 544) + 8))(*(_DWORD *)(this + 544));
  v5 = (CREStatic *)operator new(0x2B8u);
  v6 = v5;
  v30 = 1;
  if ( v5 )
  {
    CREStatic::CREStatic(v5, *(struct CREDialog **)(this + 112));
    *(_DWORD *)v6 = &CREStatic::`vftable';
  }
  else
  {
    v6 = 0;
  }
  v7 = *(CREDialog **)(this + 112);
  v30 = -1;
  *(_DWORD *)(this + 548) = v6;
  CREDialog::InitControl(v7, v6);
  (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 548) + 8))(*(_DWORD *)(this + 548));
  v8 = (CPictureLabel *)operator new(0x40Cu);
  v9 = v8;
  v30 = 2;
  if ( v8 )
  {
    CPictureLabel::CPictureLabel(v8, *(struct CREDialog **)(this + 112), D3DBLEND_SRCALPHA, D3DBLEND_INVSRCALPHA);
    *(_DWORD *)v9 = &CPictureLabel::`vftable';
  }
  else
  {
    v9 = 0;
  }
  v10 = *(CREDialog **)(this + 112);
  v30 = -1;
  *(_DWORD *)(this + 552) = v9;
  CREDialog::InitControl(v10, v9);
  (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 552) + 8))(*(_DWORD *)(this + 552));
  v11 = (CREButton *)operator new(0x330u);
  v26 = v11;
  v30 = 3;
  if ( v11 )
  {
    CREButton::CREButton(v11, *(struct CREDialog **)(this + 112));
    v12 = v26;
    *(_DWORD *)v26 = &CREButton::`vftable';
  }
  else
  {
    v12 = 0;
  }
  v13 = *(CREDialog **)(this + 112);
  v30 = -1;
  *(_DWORD *)(this + 556) = v12;
  CREDialog::InitControl(v13, v12);
  (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 556) + 8))(*(_DWORD *)(this + 556));
  v14 = *(_DWORD *)(this + 556);
  *(_DWORD *)(v14 + 784) = 0;
  *(_DWORD *)(v14 + 788) = 0;
  v15 = *(_DWORD *)(this + 556);
  *(_DWORD *)(v15 + 792) = 0;
  *(_DWORD *)(v15 + 796) = 0;
  SetRect(&rc, 7, 821, 67, 843);
  std::wstring::wstring(v28, L"GUI.dds");
  v16 = *(_DWORD *)(this + 556);
  v30 = 4;
  CREControl::SetCustomPic(v16, v28, &rc, 0);
  v30 = -1;
  std::wstring::~wstring(v28);
  SetRect(&rc, 7, 851, 67, 873);
  std::wstring::wstring(v28, L"GUI.dds");
  v17 = *(_DWORD *)(this + 556);
  v30 = 5;
  CREControl::SetCustomPic(v17, v28, &rc, 4);
  v30 = -1;
  std::wstring::~wstring(v28);
  SetRect(&rc, 7, 882, 67, 904);
  std::wstring::wstring(v28, L"GUI.dds");
  v18 = *(_DWORD *)(this + 556);
  v30 = 6;
  CREControl::SetCustomPic(v18, v28, &rc, 5);
  v30 = -1;
  std::wstring::~wstring(v28);
  (*(void (__thiscall **)(_DWORD, int, int))(**(_DWORD **)(this + 556) + 160))(*(_DWORD *)(this + 556), 60, 22);
  v19 = CREDialog::AddFont(*(CREDialog **)(this + 112), word_10321278, 12, 0);
  v20 = *(CREDialog **)(this + 112);
  *(_DWORD *)(this + 572) = v19;
  Font = CREDialog::GetFont(v20, v19);
  if ( Font )
  {
    (*(void (__stdcall **)(_DWORD, _DWORD *))(**((_DWORD **)Font + 130) + 24))(*((_DWORD *)Font + 130), v28);
    *(_DWORD *)(this + 576) = v28[0];
  }
  v22 = CREDialog::AddFont(*(CREDialog **)(this + 112), word_10321280, 14, 1);
  v23 = *(CREDialog **)(this + 112);
  *(_DWORD *)(this + 564) = v22;
  v24 = CREDialog::GetFont(v23, v22);
  if ( v24 )
  {
    (*(void (__stdcall **)(_DWORD, _DWORD *))(**((_DWORD **)v24 + 130) + 24))(*((_DWORD *)v24 + 130), v29);
    *(_DWORD *)(this + 568) = v29[0];
  }
  return 0;
}
