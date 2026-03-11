/*
 * func-name: ?OnHotkey@CRECheckBox@@UAEXXZ
 * func-address: 0x1006a210
 * callers: none
 * callees: none
 */

void __thiscall CRECheckBox::OnHotkey(CRECheckBox *this)
{
  (*(void (__stdcall **)(bool, int))(*(_DWORD *)this + 208))(*((_BYTE *)this + 816) == 0, 1);
}
