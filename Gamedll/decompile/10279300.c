/*
 * func-name: ?Initialize@CPowerTransportUI@@QAEXXZ_0
 * func-address: 0x10279300
 * callers: 0x10002446
 * callees: 0x102c9ea8
 */

void __thiscall CPowerTransportUI::Initialize(CPowerTransportUI *this)
{
  int v2; // eax
  struct CREControl *Control; // eax
  struct CREControl *v4; // eax
  int v5; // [esp-10h] [ebp-44h]
  int v6; // [esp-Ch] [ebp-40h]
  _DWORD v7[5]; // [esp+14h] [ebp-20h] BYREF

  *((_DWORD *)this + 173) = 0;
  *((_DWORD *)this + 174) = 0;
  CTYDialog::MoveNestedDialog(this);
  std::string::string(v7, "DlgDatabase.xml");
  v2 = CDlgMgr::Instance();
  CDlgMgr::FillControls(v2);
  std::string::~string(v7);
  Control = CREDialog::GetControl(this, 2);
  *((_DWORD *)this + 969) = _RTDynamicCast(Control, v6, 0, &CREControl `RTTI Type Descriptor');
  v4 = CREDialog::GetControl(this, 3);
  *((_DWORD *)this + 970) = _RTDynamicCast(v4, v5, 0, &CREControl `RTTI Type Descriptor');
  *((_DWORD *)this + 184) = CPowerTransportUI::PowerTransportUIEvent;
}
