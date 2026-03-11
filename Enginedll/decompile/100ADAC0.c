/*
 * func-name: ?OnFocusOut@CRENumericEditBox@@UAEXXZ
 * func-address: 0x100adac0
 * callers: none
 * callees: none
 */

void __thiscall CRENumericEditBox::OnFocusOut(CRENumericEditBox *this)
{
  int v2; // ecx

  v2 = *((_DWORD *)this + 198);
  *((_BYTE *)this + 92) = 0;
  (*(void (__thiscall **)(int, _DWORD, int))(*(_DWORD *)v2 + 208))(v2, *((_DWORD *)this + 133), 1);
}
