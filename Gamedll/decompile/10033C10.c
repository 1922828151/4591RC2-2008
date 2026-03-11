/*
 * func-name: ?Show@GUIConsole@@QAEX_N@Z_0
 * func-address: 0x10033c10
 * callers: 0x1000d95e
 * callees: none
 */

void __thiscall GUIConsole::Show(GUIConsole *this, bool a2)
{
  *((_BYTE *)this + 32) = 1;
  *((_BYTE *)this + 68) = a2;
  *((_DWORD *)this + 9) = -1;
}
