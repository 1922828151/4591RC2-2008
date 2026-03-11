/*
 * func-name: ??0CRENumericEdit@@QAE@PAVCREDialog@@@Z
 * func-address: 0x100cc710
 * callers: 0x1006b2f0
 * callees: 0x100c7520, 0x100c84a0, 0x100cb5e0, 0x101a2534
 */

CRENumericEdit *__thiscall CRENumericEdit::CRENumericEdit(CRENumericEdit *this, struct CREDialog *a2)
{
  CREEditBox *v3; // eax
  CREEditBox *v4; // edi
  CREEditBox *v5; // ecx
  CREButton *v6; // eax
  CREButton *v7; // edi
  CREButton *v8; // eax
  CREButton *v9; // edi
  CREButton *v10; // ecx

  CREStatic::CREStatic(this, 0);
  *(_DWORD *)this = &CRENumericEdit::`vftable';
  *((_DWORD *)this + 35) = 10;
  *((_DWORD *)this + 28) = a2;
  *((_DWORD *)this + 185) = 10;
  *((_DWORD *)this + 184) = 0;
  v3 = (CREEditBox *)operator new(0x320u);
  v4 = v3;
  if ( v3 )
  {
    CREEditBox::CREEditBox(v3, 0);
    *(_DWORD *)v4 = &CRENumericEditBox::`vftable';
    *((_DWORD *)v4 + 35) = 7;
    *((_DWORD *)v4 + 28) = a2;
    v5 = v4;
  }
  else
  {
    v5 = 0;
  }
  *((_DWORD *)this + 190) = v5;
  (*(void (__thiscall **)(CREEditBox *, CRENumericEdit *))(*(_DWORD *)v5 + 176))(v5, this);
  v6 = (CREButton *)operator new(0x338u);
  v7 = v6;
  if ( v6 )
  {
    CREButton::CREButton(v6, 0);
    *(_DWORD *)v7 = &CRENumericButton::`vftable';
    *((_DWORD *)v7 + 35) = 9;
    *((_DWORD *)v7 + 28) = a2;
    *((_BYTE *)v7 + 779) = 0;
    *((_DWORD *)v7 + 36) = 0;
  }
  else
  {
    v7 = 0;
  }
  *((_DWORD *)this + 191) = v7;
  *((_BYTE *)v7 + 816) = 1;
  (*(void (__thiscall **)(_DWORD, CRENumericEdit *))(**((_DWORD **)this + 191) + 208))(*((_DWORD *)this + 191), this);
  v8 = (CREButton *)operator new(0x338u);
  v9 = v8;
  if ( v8 )
  {
    CREButton::CREButton(v8, 0);
    *(_DWORD *)v9 = &CRENumericButton::`vftable';
    *((_DWORD *)v9 + 35) = 9;
    *((_DWORD *)v9 + 28) = a2;
    *((_BYTE *)v9 + 779) = 0;
    *((_DWORD *)v9 + 36) = 0;
    v10 = v9;
  }
  else
  {
    v10 = 0;
  }
  *((_DWORD *)this + 192) = v10;
  (*(void (__thiscall **)(CREButton *, CRENumericEdit *))(*(_DWORD *)v10 + 208))(v10, this);
  *((_BYTE *)this + 732) = 0;
  *((_BYTE *)this + 696) = 0;
  return this;
}
