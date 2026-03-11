/*
 * func-name: ?Tick@CKillingInfoUI@@UAEXM@Z_0
 * func-address: 0x102760d0
 * callers: 0x100092d2
 * callees: none
 */

void __thiscall CKillingInfoUI::Tick(CKillingInfoUI *this, float a2)
{
  CTYDialog::NestToEdgeByDist(this, 4u, 181);
  CTYDialog::NestToEdgeByDist(this, 2u, 48);
  CTYDialog::Tick(this, a2);
}
