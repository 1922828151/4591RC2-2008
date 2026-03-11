/*
 * func-name: ?SetCaptionWidth@CRENumericEdit@@QAEXH@Z
 * func-address: 0x1006b180
 * callers: none
 * callees: none
 */

void __thiscall CRENumericEdit::SetCaptionWidth(CRENumericEdit *this, int a2)
{
  int v2; // edx

  v2 = *(_DWORD *)this;
  *((_DWORD *)this + 184) = a2;
  (*(void (**)(void))(v2 + 164))();
}
