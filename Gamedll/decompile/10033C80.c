/*
 * func-name: ?IsTeamChat@GUIConsole@@QAE_NXZ_0
 * func-address: 0x10033c80
 * callers: 0x10013340
 * callees: none
 */

BOOL __thiscall GUIConsole::IsTeamChat(GUIConsole *this)
{
  return *((_DWORD *)this + 9) != -1 && *((_BYTE *)this + 68);
}
