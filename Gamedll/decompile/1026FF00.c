/*
 * func-name: sub_1026FF00
 * func-address: 0x1026ff00
 * callers: 0x100172ec
 * callees: 0x10002d24, 0x10006dd4, 0x102c9d98
 */

int __thiscall sub_1026FF00(int this)
{
  CTYVStatic *v2; // eax
  CTYVStatic *v3; // edi
  CTYVStatic *v4; // eax
  int v5; // eax
  CProgressBar *v6; // eax
  CProgressBar *v7; // edi
  CProgressBar *v8; // ecx
  int v9; // eax

  v2 = (CTYVStatic *)operator new(0x2C4u);
  v3 = v2;
  if ( v2 )
  {
    CTYVStatic::CTYVStatic(v2, (struct CREDialog *)this);
    *(_DWORD *)v3 = &CTYVStatic::`vftable';
    v4 = v3;
  }
  else
  {
    v4 = 0;
  }
  *(_DWORD *)(this + 3880) = v4;
  *(_DWORD *)(this + 692) = 0;
  *(_DWORD *)(this + 696) = 0;
  CTYDialog::MoveNestedDialog((CTYDialog *)this);
  (*(void (__thiscall **)(_DWORD, int, int))(**(_DWORD **)(this + 3880) + 160))(*(_DWORD *)(this + 3880), 38, 10);
  *(_DWORD *)(*(_DWORD *)(this + 3880) + 704) = 6;
  v5 = *(_DWORD *)(this + 3880);
  *(_DWORD *)(v5 + 696) = 19;
  *(_DWORD *)(v5 + 700) = 120;
  CREDialog::AddControl((CREDialog *)this, *(struct CREControl **)(this + 3880));
  v6 = (CProgressBar *)operator new(0x300u);
  v7 = v6;
  if ( v6 )
  {
    CProgressBar::CProgressBar(v6, (struct CTYDialog *)this);
    *(_DWORD *)v7 = &CProgressBar::`vftable';
    v8 = v7;
  }
  else
  {
    v8 = 0;
  }
  *(_DWORD *)(this + 3876) = v8;
  (*(void (__thiscall **)(CProgressBar *, int, int))(*(_DWORD *)v8 + 156))(v8, -3, 10);
  (*(void (__thiscall **)(_DWORD, int, int))(**(_DWORD **)(this + 3876) + 160))(*(_DWORD *)(this + 3876), 3, 215);
  *(_DWORD *)(*(_DWORD *)(this + 3876) + 752) = 4;
  *(_DWORD *)(*(_DWORD *)(this + 3876) + 760) = -16384;
  *(_BYTE *)(*(_DWORD *)(this + 3876) + 748) = 1;
  *(_BYTE *)(*(_DWORD *)(this + 3876) + 744) = 1;
  CREDialog::AddControl((CREDialog *)this, *(struct CREControl **)(this + 3876));
  if ( operator new(0xF90u) )
    v9 = sub_10002D24(this);
  else
    v9 = 0;
  *(_DWORD *)(this + 3872) = v9;
  (*(void (__thiscall **)(int, int, int))(*(_DWORD *)v9 + 160))(v9, 28, 27);
  (*(void (__thiscall **)(_DWORD, int, int))(**(_DWORD **)(this + 3872) + 156))(*(_DWORD *)(this + 3872), 6, 187);
  sub_10006DD4(-16646148);
  *(float *)(*(_DWORD *)(this + 3872) + 3980) = 2550.0;
  return CREDialog::AddControl((CREDialog *)this, *(struct CREControl **)(this + 3872));
}
