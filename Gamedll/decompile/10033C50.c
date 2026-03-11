/*
 * func-name: ?ShowTeamNoSend@GUIConsole@@QAEXXZ_0
 * func-address: 0x10033c50
 * callers: 0x100166d5
 * callees: none
 */

void __thiscall GUIConsole::ShowTeamNoSend(GUIConsole *this)
{
  *((_BYTE *)this + 32) = 1;
  *((_BYTE *)this + 68) = 1;
  *((_DWORD *)this + 9) = -2;
  std::string::operator=((char *)this + 72, &unk_1030A528);
}
