/*
 * func-name: ?Initialize@COccupyEstabUI@@QAEXXZ_0
 * func-address: 0x102783f0
 * callers: 0x100083af
 * callees: 0x102c9ea8
 */

void __thiscall COccupyEstabUI::Initialize(COccupyEstabUI *this)
{
  int v2; // eax
  struct CREControl *Control; // eax
  struct CREControl *v4; // eax
  struct CREControl *v5; // eax
  struct CREControl *v6; // eax
  int v7; // eax
  int v8; // ecx
  int v9; // [esp-10h] [ebp-44h]
  int v10; // [esp-Ch] [ebp-40h]
  int v11; // [esp-8h] [ebp-3Ch]
  int v12; // [esp-4h] [ebp-38h]
  _BYTE v13[12]; // [esp+1Ch] [ebp-18h] BYREF

  *((_DWORD *)this + 173) = 0;
  *((_DWORD *)this + 174) = 0;
  CTYDialog::MoveNestedDialog(this);
  std::string::string(v13, "DlgDatabase.xml");
  v2 = CDlgMgr::Instance();
  CDlgMgr::FillControls(v2);
  std::string::~string(v13);
  *((_DWORD *)this + 184) = COccupyEstabUI::OccupyEstabUIEvent;
  Control = CREDialog::GetControl(this, 1);
  *((_DWORD *)this + 968) = _RTDynamicCast(Control, v12, 0, &CREControl `RTTI Type Descriptor');
  v4 = CREDialog::GetControl(this, 2);
  *((_DWORD *)this + 969) = _RTDynamicCast(v4, v11, 0, &CREControl `RTTI Type Descriptor');
  v5 = CREDialog::GetControl(this, 3);
  *((_DWORD *)this + 970) = _RTDynamicCast(v5, v10, 0, &CREControl `RTTI Type Descriptor');
  v6 = CREDialog::GetControl(this, 4);
  v7 = _RTDynamicCast(v6, v9, 0, &CREControl `RTTI Type Descriptor');
  v8 = *((_DWORD *)this + 969);
  *((_DWORD *)this + 971) = v7;
  *(_DWORD *)(v8 + 752) = 4;
  *(_DWORD *)(*((_DWORD *)this + 969) + 760) = -7274582;
}
