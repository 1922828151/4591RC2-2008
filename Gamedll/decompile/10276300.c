/*
 * func-name: ?Initialize@CKillingInfoUI@@QAEXXZ_0
 * func-address: 0x10276300
 * callers: 0x10013b8d
 * callees: none
 */

void __thiscall CKillingInfoUI::Initialize(CKillingInfoUI *this)
{
  int v2; // eax
  _BYTE v3[28]; // [esp+Ch] [ebp-28h] BYREF
  int v4; // [esp+30h] [ebp-4h]

  *((_DWORD *)this + 173) = 0;
  *((_DWORD *)this + 174) = 0;
  CTYDialog::MoveNestedDialog(this);
  std::string::string(v3, "DlgDatabase.xml");
  v4 = 0;
  v2 = CDlgMgr::Instance();
  CDlgMgr::FillControls(v2);
  v4 = -1;
  std::string::~string(v3);
  *((_BYTE *)this + 62) = 0;
  *((_DWORD *)this + 184) = CKillingInfoUI::KillingInfoUIEvent;
}
