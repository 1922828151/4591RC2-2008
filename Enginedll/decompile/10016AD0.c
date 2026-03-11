/*
 * func-name: ?GetKeyboardBuffer@Input@@QAE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
 * func-address: 0x10016ad0
 * callers: none
 * callees: none
 */

int __thiscall Input::GetKeyboardBuffer(char *this, int a2)
{
  std::string::string(a2, this + 56);
  return a2;
}
