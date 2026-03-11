/*
 * func-name: ?ClearEditingLine@GUIConsole@@QAEXXZ_0
 * func-address: 0x10033cb0
 * callers: 0x10007d4c
 * callees: none
 */

void __thiscall GUIConsole::ClearEditingLine(GUIConsole *this)
{
  std::string::operator=((char *)this + 144, &unk_1030A528);
  *((_DWORD *)this + 47) = 0;
}
