/*
 * func-name: ?Initialize@CControlCenterListUI@@QAEXXZ_0
 * func-address: 0x1025dac0
 * callers: 0x1000135c
 * callees: 0x10014d58, 0x10016937
 */

void __thiscall CControlCenterListUI::Initialize(CControlCenterListUI *this)
{
  int v2; // eax
  int Control; // [esp+24h] [ebp-2Ch] BYREF
  _BYTE v4[28]; // [esp+28h] [ebp-28h] BYREF
  int v5; // [esp+4Ch] [ebp-4h]

  *((_DWORD *)this + 173) = 0;
  *((_DWORD *)this + 174) = 0;
  CTYDialog::MoveNestedDialog(this);
  std::string::string(v4, "DlgDatabase.xml");
  v5 = 0;
  v2 = CDlgMgr::Instance();
  CDlgMgr::FillControls(v2);
  v5 = -1;
  std::string::~string(v4);
  *((_BYTE *)this + 62) = 0;
  *((_DWORD *)this + 184) = CControlCenterListUI::ControlCenterListUIEvent;
  Control = (int)CREDialog::GetControl(this, 1);
  sub_10014D58((char *)this + 3872, (int)&Control);
  Control = (int)CREDialog::GetControl(this, 2);
  sub_10014D58((char *)this + 3872, (int)&Control);
  Control = (int)CREDialog::GetControl(this, 3);
  sub_10014D58((char *)this + 3872, (int)&Control);
  Control = (int)CREDialog::GetControl(this, 4);
  sub_10016937((char *)this + 3888, (int)&Control);
  Control = (int)CREDialog::GetControl(this, 5);
  sub_10016937((char *)this + 3888, (int)&Control);
  Control = (int)CREDialog::GetControl(this, 6);
  sub_10016937((char *)this + 3888, (int)&Control);
}
