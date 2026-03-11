/*
 * func-name: ??0CGroupQuickCallUI@@QAE@ABV0@@Z_0
 * func-address: 0x1007ab70
 * callers: 0x10011982
 * callees: 0x1000416f
 */

CGroupQuickCallUI *__thiscall CGroupQuickCallUI::CGroupQuickCallUI(
        CGroupQuickCallUI *this,
        const struct CGroupQuickCallUI *a2)
{
  CTYDialog::CTYDialog(this, a2);
  *(_DWORD *)this = &CGroupQuickCallUI::`vftable';
  sub_1000416F((int)a2 + 3872);
  return this;
}
