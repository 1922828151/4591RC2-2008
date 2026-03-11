/*
 * func-name: ?OnHotkey@CREButton@@UAEXXZ
 * func-address: 0x1006a080
 * callers: none
 * callees: 0x100a2ff0
 */

void __thiscall CREButton::OnHotkey(CREDialog **this)
{
  CREDialog::SendEvent(this[28], 0x101u, 1, (struct CREControl *)this, 0, 0);
}
