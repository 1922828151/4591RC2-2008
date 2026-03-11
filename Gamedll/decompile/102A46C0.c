/*
 * func-name: ?Initialize@CVehicleRoofUI@@QAEXXZ_0
 * func-address: 0x102a46c0
 * callers: 0x100071e9
 * callees: 0x102c9ea8
 */

void __thiscall CVehicleRoofUI::Initialize(CVehicleRoofUI *this)
{
  int v2; // eax
  struct CREControl *Control; // eax
  struct CREControl *v4; // eax
  struct CREControl *v5; // eax
  struct CREControl *v6; // eax
  struct CREControl *v7; // eax
  int v8; // [esp-10h] [ebp-44h]
  int v9; // [esp-Ch] [ebp-40h]
  int v10; // [esp-8h] [ebp-3Ch]
  int v11; // [esp-4h] [ebp-38h]
  int v12; // [esp+0h] [ebp-34h]
  _BYTE v13[8]; // [esp+20h] [ebp-14h] BYREF

  *((_DWORD *)this + 173) = 0;
  *((_DWORD *)this + 174) = 0;
  CTYDialog::MoveNestedDialog(this);
  std::string::string(v13, "DlgDatabase.xml");
  v2 = CDlgMgr::Instance();
  CDlgMgr::FillControls(v2);
  std::string::~string(v13);
  Control = CREDialog::GetControl(this, 1);
  *((_DWORD *)this + 968) = _RTDynamicCast(Control, v12, 0, &CREControl `RTTI Type Descriptor');
  v4 = CREDialog::GetControl(this, 2);
  *((_DWORD *)this + 969) = _RTDynamicCast(v4, v11, 0, &CREControl `RTTI Type Descriptor');
  v5 = CREDialog::GetControl(this, 5);
  *((_DWORD *)this + 971) = _RTDynamicCast(v5, v10, 0, &CREControl `RTTI Type Descriptor');
  v6 = CREDialog::GetControl(this, 3);
  *((_DWORD *)this + 970) = _RTDynamicCast(v6, v9, 0, &CREControl `RTTI Type Descriptor');
  v7 = CREDialog::GetControl(this, 4);
  *((_DWORD *)this + 975) = _RTDynamicCast(v7, v8, 0, &CREControl `RTTI Type Descriptor');
  *((_DWORD *)this + 184) = CVehicleRoofUI::VehicleRoofUIEvent;
}
