/*
 * func-name: ?SendKey@CMLIMEEditBox@@KAXE@Z
 * func-address: 0x100a7aa0
 * callers: 0x100c21a0
 * callees: none
 */

void __cdecl CMLIMEEditBox::SendKey(BYTE bVk)
{
  keybd_event(bVk, 0, 0, 0);
  keybd_event(bVk, 0, 2u, 0);
}
