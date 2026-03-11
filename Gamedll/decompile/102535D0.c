/*
 * func-name: ?Tick@CAlarmMessageUI@@UAEXM@Z_0
 * func-address: 0x102535d0
 * callers: 0x100039d6
 * callees: none
 */

void __thiscall CAlarmMessageUI::Tick(CAlarmMessageUI *this, float a2)
{
  CTYDialog::NestToEdgeByDist(this, 1u, 0);
  CTYDialog::NestToEdgeByDist(this, 2u, 48);
  CTYDialog::Tick(this, a2);
}
