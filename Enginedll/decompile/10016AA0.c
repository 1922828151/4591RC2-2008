/*
 * func-name: ?FlushKeyboardBuffer@Input@@QAEXXZ
 * func-address: 0x10016aa0
 * callers: none
 * callees: none
 */

void __thiscall Input::FlushKeyboardBuffer(Input *this)
{
  std::string::operator=((char *)this + 56, &unk_101BAFFA);
  std::string::operator=((char *)this + 84, &unk_101BAFFA);
}
