/*
 * func-name: ?Tick@CChatInputUI@@UAEXM@Z_0
 * func-address: 0x10258160
 * callers: 0x1000912e
 * callees: none
 */

void __thiscall CChatInputUI::Tick(CChatInputUI *this, float a2)
{
  CTYDialog::NestToEdge(this, 9u);
  CTYDialog::Tick(this, a2);
}
