/*
 * func-name: ??0CKillingInfoUI@@QAE@ABV0@@Z_0
 * func-address: 0x1018ecb0
 * callers: 0x100086d9
 * callees: none
 */

CKillingInfoUI *__thiscall CKillingInfoUI::CKillingInfoUI(CKillingInfoUI *this, const struct CKillingInfoUI *a2)
{
  CTYDialog::CTYDialog(this, a2);
  *(_DWORD *)this = &CKillingInfoUI::`vftable';
  *((_DWORD *)this + 968) = *((_DWORD *)a2 + 968);
  return this;
}
