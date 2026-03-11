/*
 * func-name: ?SetRange@CMiniWorldMapUI@@QAEXJJJJ@Z_0
 * func-address: 0x10277c30
 * callers: 0x1001aa46
 * callees: 0x1000dab2, 0x1001145f
 */

void __thiscall CMiniWorldMapUI::SetRange(CMiniWorldMapUI *this, int a2, int a3, int a4, int a5)
{
  sub_1000DAB2(a2 + a4 / 2, a3 + a5 / 2);
  sub_1001145F(a4, a5);
}
