/*
 * func-name: ?AssignControlHandle@CInputBox@@UAEXH@Z
 * func-address: 0x100b4990
 * callers: none
 * callees: 0x100b3c70
 */

void __thiscall CInputBox::AssignControlHandle(CInputBox *this, int a2)
{
  *((_DWORD *)this + 175) = a2;
  CInputBox::UpdateControlKeyName(this);
}
