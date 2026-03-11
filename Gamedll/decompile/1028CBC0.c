/*
 * func-name: ?Initialize@CStatusUI@@AAEXXZ_0
 * func-address: 0x1028cbc0
 * callers: 0x1000d436
 * callees: 0x102c9ea8
 */

void __thiscall CStatusUI::Initialize(CStatusUI *this)
{
  int v2; // eax
  struct CREControl *Control; // eax
  int v4; // eax
  struct CREControl *v5; // eax
  struct CREControl *v6; // eax
  struct CREControl *v7; // eax
  struct CREControl *v8; // eax
  int v9; // [esp-10h] [ebp-44h]
  int v10; // [esp-Ch] [ebp-40h]
  int v11; // [esp-8h] [ebp-3Ch]
  int v12; // [esp-4h] [ebp-38h]
  int v13; // [esp+0h] [ebp-34h]
  _DWORD v14[5]; // [esp+Ch] [ebp-28h] BYREF
  _BYTE v15[8]; // [esp+20h] [ebp-14h] BYREF
  int v16; // [esp+30h] [ebp-4h]

  *((_BYTE *)this + 62) = 0;
  std::string::string(v14, "DlgDatabase.xml");
  v16 = 0;
  v2 = CDlgMgr::Instance();
  CDlgMgr::FillControls(v2);
  std::string::~string(v15);
  v14[1] = 0;
  v14[0] = &CREStatic `RTTI Type Descriptor';
  Control = CREDialog::GetControl(this, 2);
  v4 = _RTDynamicCast(Control, v13, 0, &CREControl `RTTI Type Descriptor');
  v14[0] = 0;
  *((_DWORD *)this + 1007) = v4;
  v5 = CREDialog::GetControl(this, 3);
  *((_DWORD *)this + 1008) = _RTDynamicCast(v5, v12, 0, &CREControl `RTTI Type Descriptor');
  v6 = CREDialog::GetControl(this, 4);
  *((_DWORD *)this + 1006) = _RTDynamicCast(v6, v11, 0, &CREControl `RTTI Type Descriptor');
  v7 = CREDialog::GetControl(this, 5);
  *((_DWORD *)this + 1009) = _RTDynamicCast(v7, v10, 0, &CREControl `RTTI Type Descriptor');
  v8 = CREDialog::GetControl(this, 6);
  *((_DWORD *)this + 1010) = _RTDynamicCast(v8, v9, 0, &CREControl `RTTI Type Descriptor');
  *((_DWORD *)this + 184) = CStatusUI::StatusUIEvent;
}
