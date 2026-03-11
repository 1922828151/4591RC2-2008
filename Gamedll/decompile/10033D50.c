/*
 * func-name: ?ClearWaitingTeamChat@GUIConsole@@QAEXXZ_0
 * func-address: 0x10033d50
 * callers: 0x1000319d
 * callees: none
 */

void __thiscall GUIConsole::ClearWaitingTeamChat(GUIConsole *this)
{
  std::string::operator=((char *)this + 72, &unk_1030A528);
}
