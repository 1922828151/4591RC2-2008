/*
 * func-name: ?OnMouseUp@CREDialog@@IAEXUtagPOINT@@@Z
 * func-address: 0x100a3040
 * callers: none
 * callees: none
 */

void __thiscall CREDialog::OnMouseUp(CREDialog *this, struct tagPOINT a2)
{
  CREDialog::s_pControlPressed = 0;
  *((_DWORD *)this + 43) = 0;
}
