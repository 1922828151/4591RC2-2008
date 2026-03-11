/*
 * func-name: ?ApplyFontProperties@CInputBox@@EAEXXZ
 * func-address: 0x100c0000
 * callers: none
 * callees: 0x100bb3a0
 */

void __thiscall CInputBox::ApplyFontProperties(CInputBox *this)
{
  CREStatic::ApplyFontProperties(this);
  *(_DWORD *)(*(_DWORD *)(*((_DWORD *)this + 30) + 4) + 4) = *((_DWORD *)this + 140);
}
