/*
 * func-name: ?Hide@GUIConsole@@QAEXXZ_0
 * func-address: 0x10033c00
 * callers: 0x10009b38
 * callees: none
 */

void __thiscall GUIConsole::Hide(GUIConsole *this)
{
  *((_BYTE *)this + 32) = 0;
  *((_BYTE *)this + 68) = 0;
}
