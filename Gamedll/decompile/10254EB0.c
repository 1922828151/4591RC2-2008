/*
 * func-name: ?Initialize@CBattleFieldDetailUI@@QAEXXZ_0
 * func-address: 0x10254eb0
 * callers: 0x10014a38
 * callees: 0x102c9ea8
 */

void __thiscall CBattleFieldDetailUI::Initialize(CBattleFieldDetailUI *this)
{
  int v2; // eax
  struct CREControl *Control; // eax
  struct CREControl *v4; // eax
  struct CREControl *v5; // eax
  struct CREControl *v6; // eax
  int v7; // [esp-1Ch] [ebp-50h]
  int v8; // [esp-18h] [ebp-4Ch]
  int v9; // [esp-14h] [ebp-48h]
  _BYTE v10[28]; // [esp+Ch] [ebp-28h] BYREF
  int v11; // [esp+30h] [ebp-4h]

  *((_DWORD *)this + 173) = 0;
  *((_DWORD *)this + 174) = 0;
  CTYDialog::MoveNestedDialog(this);
  std::string::string(v10, "DlgDatabase.xml");
  v11 = 0;
  v2 = CDlgMgr::Instance();
  CDlgMgr::FillControls(v2);
  v11 = -1;
  std::string::~string(v10);
  Control = CREDialog::GetControl(this, 7);
  *((_DWORD *)this + 970) = _RTDynamicCast(Control, v9, 0, &CREControl `RTTI Type Descriptor');
  v4 = CREDialog::GetControl(this, 11);
  *((_DWORD *)this + 972) = _RTDynamicCast(v4, v8, 0, &CREControl `RTTI Type Descriptor');
  v5 = CREDialog::GetControl(this, 10);
  *((_DWORD *)this + 971) = _RTDynamicCast(v5, v7, 0, &CREControl `RTTI Type Descriptor');
  v6 = CREDialog::GetControl(this, 12);
  (*(void (__thiscall **)(struct CREControl *, _DWORD))(*(_DWORD *)v6 + 128))(v6, 0);
  *((_DWORD *)this + 184) = CBattleFieldDetailUI::BattleFieldDetailUIEvent;
}
