/*
 * func-name: ??0CKillingInfoUI@@QAE@XZ_0
 * func-address: 0x102763a0
 * callers: 0x1000369d
 * callees: 0x1000be79, 0x10013b8d
 */

CKillingInfoUI *__thiscall CKillingInfoUI::CKillingInfoUI(CKillingInfoUI *this)
{
  CTYDialog::CTYDialog(this);
  *(_DWORD *)this = &CKillingInfoUI::`vftable';
  *((_DWORD *)this + 22) = 21;
  *((_DWORD *)this + 959) = 9;
  CTYDialog::ShowDialog(this, 0, 0.0);
  *((_DWORD *)this + 42) = 2;
  CKillingInfoUI::Initialize(this);
  CKillingInfoUI::InitComponent(this);
  return this;
}
