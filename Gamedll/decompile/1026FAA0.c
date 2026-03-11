/*
 * func-name: ?Initialize@CEstablishmentUI@@QAEXXZ_0
 * func-address: 0x1026faa0
 * callers: 0x100091d8
 * callees: 0x102c9ea8
 */

void __thiscall CEstablishmentUI::Initialize(CEstablishmentUI *this)
{
  int v2; // eax
  struct CREControl *Control; // eax
  struct CREControl *v4; // eax
  struct CREControl *v5; // eax
  struct CREControl *v6; // eax
  struct CREControl *v7; // eax
  struct CREControl *v8; // eax
  struct CREControl *v9; // eax
  int v10; // [esp-10h] [ebp-44h]
  int v11; // [esp-Ch] [ebp-40h]
  int v12; // [esp-8h] [ebp-3Ch]
  int v13; // [esp-4h] [ebp-38h]
  int v14; // [esp+0h] [ebp-34h]
  int v15; // [esp+4h] [ebp-30h]
  int v16; // [esp+8h] [ebp-2Ch]
  _BYTE v17[12]; // [esp+28h] [ebp-Ch] BYREF

  *((_DWORD *)this + 173) = 0;
  *((_DWORD *)this + 174) = 0;
  CTYDialog::MoveNestedDialog(this);
  std::string::string(v17, "DlgDatabase.xml");
  v2 = CDlgMgr::Instance();
  CDlgMgr::FillControls(v2);
  std::string::~string(v17);
  Control = CREDialog::GetControl(this, 2);
  *((_DWORD *)this + 970) = _RTDynamicCast(Control, v16, 0, &CREControl `RTTI Type Descriptor');
  v4 = CREDialog::GetControl(this, 3);
  *((_DWORD *)this + 971) = _RTDynamicCast(v4, v15, 0, &CREControl `RTTI Type Descriptor');
  v5 = CREDialog::GetControl(this, 4);
  *((_DWORD *)this + 972) = _RTDynamicCast(v5, v14, 0, &CREControl `RTTI Type Descriptor');
  v6 = CREDialog::GetControl(this, 5);
  *((_DWORD *)this + 973) = _RTDynamicCast(v6, v13, 0, &CREControl `RTTI Type Descriptor');
  v7 = CREDialog::GetControl(this, 6);
  *((_DWORD *)this + 974) = _RTDynamicCast(v7, v12, 0, &CREControl `RTTI Type Descriptor');
  v8 = CREDialog::GetControl(this, 7);
  *((_DWORD *)this + 975) = _RTDynamicCast(v8, v11, 0, &CREControl `RTTI Type Descriptor');
  v9 = CREDialog::GetControl(this, 8);
  *((_DWORD *)this + 976) = _RTDynamicCast(v9, v10, 0, &CREControl `RTTI Type Descriptor');
  *((_DWORD *)this + 184) = CEstablishmentUI::EstablishmentUIEvent;
}
