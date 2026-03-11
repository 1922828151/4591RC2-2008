/*
 * func-name: ?InitComponent@CVehicleRoofUI@@QAEXXZ_0
 * func-address: 0x102a3610
 * callers: 0x100136b5
 * callees: 0x10004e21, 0x1000bd6b, 0x102c9d98
 */

void __thiscall CVehicleRoofUI::InitComponent(CMultiLineStatic **this)
{
  CMultiLineStatic *v2; // eax
  CMultiLineStatic *v3; // edi
  CMultiLineStatic *v4; // ecx
  int v5; // eax
  CMultiLineStatic *v6; // eax
  CREScrollBar *v7; // eax
  CREScrollBar *v8; // edi
  CMultiLineStatic *v9; // ecx

  v2 = (CMultiLineStatic *)operator new(0x324u);
  v3 = v2;
  v4 = 0;
  if ( v2 )
  {
    CMultiLineStatic::CMultiLineStatic(v2, (struct CREDialog *)this, 0);
    *(_DWORD *)v3 = &CMultiLineStatic::`vftable';
    v4 = v3;
  }
  this[972] = v4;
  (*(void (__thiscall **)(CMultiLineStatic *, int, int))(*(_DWORD *)v4 + 156))(v4, 17, 243);
  (*(void (__thiscall **)(CMultiLineStatic *, int, int))(*(_DWORD *)this[972] + 160))(this[972], 200, 100);
  CMultiLineStatic::SetMaxLine(this[972], 5);
  *((_DWORD *)this[972] + 188) = 5;
  CREDialog::AddControl((CREDialog *)this, this[972]);
  if ( operator new(0x2BCu) )
    v5 = sub_1000BD6B((int)this);
  else
    v5 = 0;
  this[973] = (CMultiLineStatic *)v5;
  (*(void (__thiscall **)(int, int, int))(*(_DWORD *)v5 + 156))(v5, 231, 10);
  (*(void (__thiscall **)(CMultiLineStatic *, int, int))(*(_DWORD *)this[973] + 160))(this[973], 146, 403);
  *((_DWORD *)this[973] + 171) = 63;
  *((_DWORD *)this[973] + 172) = 75;
  *((_DWORD *)this[973] + 173) = 120;
  v6 = this[973];
  *((_DWORD *)v6 + 164) = 63;
  *((_DWORD *)v6 + 165) = 63;
  *((_DWORD *)this[973] + 162) = -16385803;
  *((_DWORD *)this[973] + 163) = -65536;
  CREDialog::AddControl((CREDialog *)this, this[973]);
  v7 = (CREScrollBar *)operator new(0x268u);
  v8 = v7;
  if ( v7 )
  {
    CREScrollBar::CREScrollBar(v7, (struct CREDialog *)this);
    *(_DWORD *)v8 = &CREScrollBar::`vftable';
    v9 = v8;
  }
  else
  {
    v9 = 0;
  }
  this[974] = v9;
  (*(void (__thiscall **)(CMultiLineStatic *, int, int))(*(_DWORD *)v9 + 156))(v9, 387, 10);
  (*(void (__thiscall **)(CMultiLineStatic *, int, int))(*(_DWORD *)this[974] + 160))(this[974], 12, 403);
  CREDialog::AddControl((CREDialog *)this, this[974]);
  sub_10004E21((int)this[974]);
}
