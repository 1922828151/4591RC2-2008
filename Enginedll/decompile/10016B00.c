/*
 * func-name: ?GetKeyboardCmdBuffer@Input@@QAE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
 * func-address: 0x10016b00
 * callers: none
 * callees: none
 */

int __thiscall Input::GetKeyboardCmdBuffer(char *this, int a2)
{
  std::string::string(a2, this + 84);
  return a2;
}
