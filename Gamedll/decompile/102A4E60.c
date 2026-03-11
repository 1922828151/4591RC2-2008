/*
 * func-name: ?Initialize@CWaitQueueUI@@QAEXXZ_0
 * func-address: 0x102a4e60
 * callers: 0x1000d50d
 * callees: 0x102c9ea8
 */

void __thiscall CWaitQueueUI::Initialize(CWaitQueueUI *this)
{
  int v2; // eax
  struct CREControl *Control; // eax
  struct CREControl *v4; // eax
  struct CREControl *v5; // eax
  struct CREControl *v6; // eax
  int v7; // [esp-10h] [ebp-44h]
  int v8; // [esp-Ch] [ebp-40h]
  int v9; // [esp-8h] [ebp-3Ch]
  int v10; // [esp-4h] [ebp-38h]
  _BYTE v11[12]; // [esp+1Ch] [ebp-18h] BYREF

  *((_DWORD *)this + 173) = 0;
  *((_DWORD *)this + 174) = 0;
  CTYDialog::MoveNestedDialog(this);
  std::string::string(v11, "DlgDatabase.xml");
  v2 = CDlgMgr::Instance();
  CDlgMgr::FillControls(v2);
  std::string::~string(v11);
  Control = CREDialog::GetControl(this, 1);
  *((_DWORD *)this + 968) = _RTDynamicCast(Control, v10, 0, &CREControl `RTTI Type Descriptor');
  v4 = CREDialog::GetControl(this, 2);
  *((_DWORD *)this + 969) = _RTDynamicCast(v4, v9, 0, &CREControl `RTTI Type Descriptor');
  v5 = CREDialog::GetControl(this, 3);
  *((_DWORD *)this + 970) = _RTDynamicCast(v5, v8, 0, &CREControl `RTTI Type Descriptor');
  v6 = CREDialog::GetControl(this, 4);
  *((_DWORD *)this + 971) = _RTDynamicCast(v6, v7, 0, &CREControl `RTTI Type Descriptor');
  *((_DWORD *)this + 184) = CWaitQueueUI::WaitQueueUIEvent;
}
