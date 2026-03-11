/*
 * func-name: ?Initialize@CLoginUI@@QAEXXZ_0
 * func-address: 0x10276de0
 * callers: 0x10012f85
 * callees: 0x102c9ea8
 */

void __thiscall CLoginUI::Initialize(CLoginUI *this)
{
  int v2; // eax
  struct CREControl *Control; // eax
  struct CREControl *v4; // eax
  int v5; // eax
  int v6; // ecx
  int v7; // [esp-10h] [ebp-48h]
  int v8; // [esp-Ch] [ebp-44h]
  _DWORD v9[5]; // [esp+18h] [ebp-20h] BYREF

  *((_DWORD *)this + 173) = 0;
  *((_DWORD *)this + 174) = 0;
  CTYDialog::MoveNestedDialog(this);
  std::string::string(v9, "DlgDatabase.xml");
  v2 = CDlgMgr::Instance();
  CDlgMgr::FillControls(v2);
  std::string::~string(v9);
  Control = CREDialog::GetControl(this, 1);
  *((_DWORD *)this + 968) = _RTDynamicCast(Control, v8, 0, &CREControl `RTTI Type Descriptor');
  v4 = CREDialog::GetControl(this, 2);
  v5 = _RTDynamicCast(v4, v7, 0, &CREControl `RTTI Type Descriptor');
  v6 = *((_DWORD *)this + 968);
  *((_DWORD *)this + 969) = v5;
  *(_BYTE *)(v6 + 789) = 0;
  *(_BYTE *)(*((_DWORD *)this + 969) + 789) = 0;
  *((_BYTE *)this + 62) = 0;
  *((_DWORD *)this + 184) = CLoginUI::LoginUIEvent;
}
