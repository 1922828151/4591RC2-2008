/*
 * func-name: ?Initialize@CGroupMemberUI@@QAEXXZ_0
 * func-address: 0x10271180
 * callers: 0x1000ca63
 * callees: 0x102c9ea8
 */

void __thiscall CGroupMemberUI::Initialize(CGroupMemberUI *this)
{
  int v2; // eax
  struct CREControl *Control; // eax
  int v4; // [esp-Ch] [ebp-40h]
  _BYTE v5[24]; // [esp+10h] [ebp-24h] BYREF
  int retaddr; // [esp+34h] [ebp+0h]

  *((_DWORD *)this + 173) = 0;
  *((_DWORD *)this + 174) = 0;
  CTYDialog::MoveNestedDialog(this);
  std::string::string(v5, "DlgDatabase.xml");
  v2 = CDlgMgr::Instance();
  CDlgMgr::FillControls(v2);
  retaddr = -1;
  std::string::~string(v5);
  Control = CREDialog::GetControl(this, 1);
  *((_DWORD *)this + 972) = _RTDynamicCast(Control, v4, 0, &CREControl `RTTI Type Descriptor');
  *((_DWORD *)this + 184) = CGroupMemberUI::GroupMemberUIEvent;
}
