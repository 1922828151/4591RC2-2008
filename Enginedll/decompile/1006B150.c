/*
 * func-name: ?SetButtonWidth@CRENumericEdit@@QAEXH@Z
 * func-address: 0x1006b150
 * callers: none
 * callees: none
 */

void __thiscall CRENumericEdit::SetButtonWidth(CRENumericEdit *this, int a2)
{
  int v2; // edx

  v2 = *(_DWORD *)this;
  *((_DWORD *)this + 185) = a2;
  (*(void (**)(void))(v2 + 164))();
}
