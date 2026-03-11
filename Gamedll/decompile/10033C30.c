/*
 * func-name: ?ShowTeam@GUIConsole@@QAEXH@Z_0
 * func-address: 0x10033c30
 * callers: 0x1001390d
 * callees: none
 */

void __thiscall GUIConsole::ShowTeam(GUIConsole *this, int a2)
{
  *((_BYTE *)this + 32) = 1;
  *((_BYTE *)this + 68) = 1;
  *((_DWORD *)this + 9) = a2;
}
