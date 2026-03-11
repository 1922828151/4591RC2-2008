/*
 * func-name: ?SetMargins@CRETextBox@@QAEXHH@Z
 * func-address: 0x1006af70
 * callers: none
 * callees: none
 */

void __thiscall CRETextBox::SetMargins(CRETextBox *this, int a2, int a3)
{
  *((_DWORD *)this + 176) = a2;
  *((_DWORD *)this + 177) = a3;
}
