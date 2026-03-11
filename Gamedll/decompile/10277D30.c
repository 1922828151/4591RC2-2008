/*
 * func-name: ?Initialize@CMiniWorldMapUI@@QAEXXZ_0
 * func-address: 0x10277d30
 * callers: 0x1001893f
 * callees: 0x102c9ea8
 */

void __thiscall CMiniWorldMapUI::Initialize(CMiniWorldMapUI *this)
{
  int v2; // eax
  struct CREControl *Control; // eax
  struct CREControl *v4; // eax
  int v5; // eax
  int v6; // [esp-18h] [ebp-54h]
  int v7; // [esp-14h] [ebp-50h]
  _DWORD v8[7]; // [esp+14h] [ebp-28h] BYREF
  int v9; // [esp+38h] [ebp-4h]

  *((_DWORD *)this + 173) = 0;
  *((_DWORD *)this + 174) = 0;
  CTYDialog::MoveNestedDialog(this);
  std::string::string(v8, "DlgDatabase.xml");
  v9 = 0;
  v2 = CDlgMgr::Instance();
  CDlgMgr::FillControls(v2);
  v9 = -1;
  std::string::~string(v8);
  Control = CREDialog::GetControl(this, 1);
  *((_DWORD *)this + 969) = _RTDynamicCast(Control, v7, 0, &CREControl `RTTI Type Descriptor');
  v4 = CREDialog::GetControl(this, 2);
  v5 = _RTDynamicCast(v4, v6, 0, &CREControl `RTTI Type Descriptor');
  *((_DWORD *)this + 970) = v5;
  (*(void (__thiscall **)(int, _DWORD, _DWORD, _DWORD))(*(_DWORD *)v5 + 136))(v5, 0, 0, 0);
  *((_DWORD *)this + 184) = CMiniWorldMapUI::MiniWorldMapUIEvent;
  *((_BYTE *)this + 62) = 0;
  *((_DWORD *)this + 173) = 0;
  *((_DWORD *)this + 174) = 548;
  CTYDialog::MoveNestedDialog(this);
  CTYDialog::NestToEdge(this, 4u);
}
