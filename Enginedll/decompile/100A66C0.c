/*
 * func-name: ?OnFocusIn@CInputBox@@UAEXXZ
 * func-address: 0x100a66c0
 * callers: none
 * callees: none
 */

void __thiscall CInputBox::OnFocusIn(CInputBox *this)
{
  *((_BYTE *)this + 92) = 1;
  *((float *)this + 306) = GSeconds;
}
