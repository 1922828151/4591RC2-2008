/*
 * func-name: sub_10291510
 * func-address: 0x10291510
 * callers: 0x10011473
 * callees: 0x102c9d98
 */

int __thiscall sub_10291510(int this)
{
  CSeperateLine *v2; // edi
  struct CREControl *v3; // eax
  CREDialog *v4; // ecx
  CREStatic *v5; // eax
  struct CREControl *v6; // edi
  CREDialog *v7; // ecx
  CPictureLabel *v8; // eax
  struct CREControl *v9; // edi
  struct CREControl *v10; // eax
  CREDialog *v11; // ecx
  int v12; // eax
  int v13; // ecx
  unsigned int v14; // eax
  struct REFontNode *Font; // eax
  unsigned int v16; // eax
  CREDialog *v17; // ecx
  struct REFontNode *v18; // eax
  int v19; // eax
  int v20; // ecx
  int v21; // edx
  unsigned int v23; // [esp+8h] [ebp-94h]
  _DWORD v24[14]; // [esp+20h] [ebp-7Ch] BYREF
  _DWORD v25[14]; // [esp+58h] [ebp-44h] BYREF
  int v26; // [esp+98h] [ebp-4h]

  v2 = (CSeperateLine *)operator new(0x220u);
  v3 = 0;
  v26 = 0;
  if ( v2 )
  {
    CSeperateLine::CSeperateLine(v2, *(struct CREDialog **)(this + 112));
    *(_DWORD *)v2 = &CSeperateLine::`vftable';
    v3 = v2;
  }
  v4 = *(CREDialog **)(this + 112);
  v26 = -1;
  *(_DWORD *)(this + 572) = v3;
  CREDialog::InitControl(v4, v3);
  (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 572) + 8))(*(_DWORD *)(this + 572));
  v5 = (CREStatic *)operator new(0x2B8u);
  v6 = v5;
  v26 = 1;
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
  v26 = -1;
  *(_DWORD *)(this + 576) = v6;
  CREDialog::InitControl(v7, v6);
  (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 576) + 8))(*(_DWORD *)(this + 576));
  v8 = (CPictureLabel *)operator new(0x40Cu);
  v9 = v8;
  v26 = 2;
  if ( v8 )
  {
    CPictureLabel::CPictureLabel(v8, *(struct CREDialog **)(this + 112), D3DBLEND_SRCALPHA, D3DBLEND_INVSRCALPHA);
    *(_DWORD *)v9 = &CPictureLabel::`vftable';
    v10 = v9;
  }
  else
  {
    v10 = 0;
  }
  v11 = *(CREDialog **)(this + 112);
  v26 = -1;
  *(_DWORD *)(this + 580) = v10;
  CREDialog::InitControl(v11, v10);
  (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 580) + 8))(*(_DWORD *)(this + 580));
  *(_DWORD *)(this + 604) = (*(int (__thiscall **)(_DWORD, const wchar_t *))(**(_DWORD **)(this + 112) + 20))(
                              *(_DWORD *)(this + 112),
                              L"GUI.dds");
  SetRect((LPRECT)(this + 588), 184, 206, 370, 233);
  v12 = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 576) + 176))(*(_DWORD *)(this + 576));
  v13 = *(_DWORD *)(this + 576);
  *(_DWORD *)(this + 616) = v12;
  v14 = (*(int (__thiscall **)(int))(*(_DWORD *)v13 + 176))(v13);
  Font = CREDialog::GetFont(*(CREDialog **)(this + 112), v14);
  if ( Font )
  {
    (*(void (__stdcall **)(_DWORD, _DWORD *))(**((_DWORD **)Font + 130) + 24))(*((_DWORD *)Font + 130), v24);
    *(_DWORD *)(this + 620) = v24[0];
  }
  v16 = CREDialog::AddFont(*(CREDialog **)(this + 112), word_10323AC8, 14, 1);
  v17 = *(CREDialog **)(this + 112);
  v23 = *(_DWORD *)(this + 672);
  *(_DWORD *)(this + 608) = v16;
  v18 = CREDialog::GetFont(v17, v23);
  if ( v18 )
  {
    (*(void (__stdcall **)(_DWORD, _DWORD *))(**((_DWORD **)v18 + 130) + 24))(*((_DWORD *)v18 + 130), v25);
    *(_DWORD *)(this + 612) = v25[0];
  }
  v19 = *(_DWORD *)(this + 616);
  v20 = *(_DWORD *)(this + 612);
  *(_DWORD *)(this + 624) = *(_DWORD *)(this + 608);
  v21 = *(_DWORD *)(this + 620);
  *(_DWORD *)(this + 632) = v19;
  *(_DWORD *)(this + 628) = v20;
  *(_DWORD *)(this + 636) = v21;
  return 0;
}
