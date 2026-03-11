/*
 * func-name: ?OnFocusOut@CInputBox@@UAEXXZ
 * func-address: 0x100a66e0
 * callers: none
 * callees: none
 */

void __thiscall CInputBox::OnFocusOut(CInputBox *this)
{
  *((_BYTE *)this + 92) = 0;
  *((_BYTE *)this + 696) = 0;
}
