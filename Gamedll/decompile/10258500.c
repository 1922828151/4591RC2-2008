/*
 * func-name: ?Initialize@CChatInputUI@@QAEXXZ_0
 * func-address: 0x10258500
 * callers: 0x10008de1
 * callees: 0x10005245, 0x102c9ea8
 */

void __thiscall CChatInputUI::Initialize(CChatInputUI *this)
{
  int v2; // eax
  struct CREControl *Control; // eax
  int v4; // [esp-Ch] [ebp-40h]
  _BYTE v5[24]; // [esp+10h] [ebp-24h] BYREF
  int retaddr; // [esp+34h] [ebp+0h]

  *((_DWORD *)this + 173) = 0;
  *((_DWORD *)this + 174) = 741;
  CTYDialog::MoveNestedDialog(this);
  std::string::string(v5, "DlgDatabase.xml");
  v2 = CDlgMgr::Instance();
  CDlgMgr::FillControls(v2);
  retaddr = -1;
  std::string::~string(v5);
  Control = CREDialog::GetControl(this, 1);
  *((_DWORD *)this + 968) = _RTDynamicCast(Control, v4, 0, &CREControl `RTTI Type Descriptor');
  *((_DWORD *)this + 184) = CChatInputUI::ChatInputUIEvent;
  CChatInputUI::SetChannel(9);
}
