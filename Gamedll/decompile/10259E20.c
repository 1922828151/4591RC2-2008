/*
 * func-name: ?Tick@CChatMessageUI@@UAEXM@Z_0
 * func-address: 0x10259e20
 * callers: 0x1000f4cf
 * callees: 0x1000eea3
 */

void __thiscall CChatMessageUI::Tick(CChatMessageUI *this, float a2)
{
  CChatMessageUI::CheckMousePos(this);
  CTYDialog::NestToEdge(this, 1u);
  CTYDialog::NestToEdgeByDist(this, 8u, 27);
  CTYDialog::Tick(this, a2);
}
