/*
 * func-name: ?SetTextFont@CREListCtrl@@QAEXPB_WH_N@Z
 * func-address: 0x100c14a0
 * callers: none
 * callees: 0x100b5550
 */

void __thiscall CREListCtrl::SetTextFont(CREListCtrl *this, wchar_t *String2, int a3, bool a4)
{
  *((_DWORD *)this + 194) = CREDialog::AddFont(*((CREDialog **)this + 28), String2, a3, a4);
}
