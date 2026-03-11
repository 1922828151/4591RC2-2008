/*
 * func-name: ?InitComponent@CStatusUI@@AAEXXZ_0
 * func-address: 0x1028b1d0
 * callers: 0x100140ec
 * callees: 0x10002d24, 0x10006dd4, 0x102c9d98
 */

void __thiscall CStatusUI::InitComponent(struct CREControl **this)
{
  CFormatedStatic *v2; // eax
  CFormatedStatic *v3; // edi
  struct CREControl *v4; // ecx
  int v5; // eax
  int FontInfo; // eax
  int v7; // ebx
  int v8; // eax
  int v9; // eax
  int v10; // eax
  int v11; // [esp+34h] [ebp-28h]
  int v12; // [esp+38h] [ebp-24h]

  v2 = (CFormatedStatic *)operator new(0x2E0u);
  v3 = v2;
  if ( v2 )
  {
    CFormatedStatic::CFormatedStatic(v2, (struct CREDialog *)this);
    *(_DWORD *)v3 = &CFormatedStatic::`vftable';
    v4 = v3;
  }
  else
  {
    v4 = 0;
  }
  this[1005] = v4;
  (*(void (__thiscall **)(struct CREControl *, int, int))(*(_DWORD *)v4 + 156))(v4, 612, 30);
  (*(void (__thiscall **)(struct CREControl *, int, int))(*(_DWORD *)this[1005] + 160))(this[1005], 71, 14);
  (*(void (__thiscall **)(struct CREControl *, int))(*(_DWORD *)this[1005] + 188))(this[1005], 5);
  CREDialog::AddControl((CREDialog *)this, this[1005]);
  v5 = GUISystem::Instance(4);
  FontInfo = GUISystem::GetFontInfo(v5);
  if ( FontInfo )
  {
    v7 = *(_DWORD *)this[1005];
    v12 = *(unsigned __int8 *)(FontInfo + 32);
    v11 = *(_DWORD *)(FontInfo + 28);
    v8 = std::wstring::c_str(FontInfo);
    (*(void (__thiscall **)(struct CREControl *, int, int, int))(v7 + 168))(this[1005], v8, v11, v12);
  }
  if ( operator new(0xF90u) )
    v9 = sub_10002D24((int)this);
  else
    v9 = 0;
  this[1011] = (struct CREControl *)v9;
  (*(void (__thiscall **)(int, int, int))(*(_DWORD *)v9 + 160))(v9, 35, 35);
  (*(void (__thiscall **)(struct CREControl *, int, int))(*(_DWORD *)this[1011] + 156))(this[1011], 700, 99);
  sub_10006DD4(-16646148);
  *((float *)this[1011] + 995) = 2550.0;
  CREDialog::AddControl((CREDialog *)this, this[1011]);
  if ( operator new(0xF90u) )
    v10 = sub_10002D24((int)this);
  else
    v10 = 0;
  this[1012] = (struct CREControl *)v10;
  (*(void (__thiscall **)(int, int, int))(*(_DWORD *)v10 + 160))(v10, 18, 19);
  (*(void (__thiscall **)(struct CREControl *, int, int))(*(_DWORD *)this[1012] + 156))(this[1012], 702, 79);
  *((float *)this[1012] + 995) = 2550.0;
  CREDialog::AddControl((CREDialog *)this, this[1012]);
}
