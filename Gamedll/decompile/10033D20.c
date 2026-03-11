/*
 * func-name: ?GetWaitingTeamChat@GUIConsole@@QAE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ_0
 * func-address: 0x10033d20
 * callers: 0x100124e5
 * callees: none
 */

void *__thiscall GUIConsole::GetWaitingTeamChat(int this, void *a2)
{
  std::string::string(a2, (void *)(this + 72));
  return a2;
}
