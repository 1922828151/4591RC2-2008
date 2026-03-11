/*
 * func-name: ?InitComponent@CChatMessageUI@@QAEXXZ_0
 * func-address: 0x10259b20
 * callers: 0x10003bf7
 * callees: 0x102c9d98
 */

void __thiscall CChatMessageUI::InitComponent(CMultiLineStatic **this)
{
  CREScrollBar *v2; // eax
  CREScrollBar *v3; // edi
  CMultiLineStatic *v4; // ecx
  CMultiLineStatic *v5; // eax
  CMultiLineStatic *v6; // edi
  CMultiLineStatic *v7; // ecx

  v2 = (CREScrollBar *)operator new(0x268u);
  v3 = v2;
  v4 = 0;
  if ( v2 )
  {
    CREScrollBar::CREScrollBar(v2, (struct CREDialog *)this);
    *(_DWORD *)v3 = &CREScrollBar::`vftable';
    v4 = v3;
  }
  this[969] = v4;
  (*(void (__thiscall **)(CMultiLineStatic *, int, int))(*(_DWORD *)v4 + 156))(v4, 245, 11);
  (*(void (__thiscall **)(CMultiLineStatic *, int, int))(*(_DWORD *)this[969] + 160))(this[969], 12, 157);
  CREDialog::AddControl((CREDialog *)this, this[969]);
  v5 = (CMultiLineStatic *)operator new(0x324u);
  v6 = v5;
  if ( v5 )
  {
    CMultiLineStatic::CMultiLineStatic(v5, (struct CREDialog *)this, 0);
    *(_DWORD *)v6 = &CMultiLineStatic::`vftable';
    v7 = v6;
  }
  else
  {
    v7 = 0;
  }
  this[968] = v7;
  (*(void (__thiscall **)(CMultiLineStatic *, int, int))(*(_DWORD *)v7 + 156))(v7, 11, 20);
  (*(void (__thiscall **)(CMultiLineStatic *, int, int))(*(_DWORD *)this[968] + 160))(this[968], 217, 139);
  *((_DWORD *)this[968] + 188) = 5;
  CMultiLineStatic::SetMaxLine(this[968], 100);
  *((_DWORD *)this[968] + 182) = 6;
  CMultiLineStatic::SetScrollBar(this[968], this[969]);
  CREDialog::AddControl((CREDialog *)this, this[968]);
}
