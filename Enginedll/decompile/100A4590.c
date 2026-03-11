/*
 * func-name: ?SendKey@CREIMEEditBox@@KAXE@Z
 * func-address: 0x100a4590
 * callers: 0x100be440
 * callees: none
 */

void __cdecl CREIMEEditBox::SendKey(BYTE bVk)
{
  keybd_event(bVk, 0, 0, 0);
  keybd_event(bVk, 0, 2u, 0);
}
