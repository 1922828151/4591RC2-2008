/*
 * func-name: ??1GUIConsole@@QAE@XZ_0
 * func-address: 0x102ba7e0
 * callers: 0x10004abb
 * callees: 0x10003fe9, 0x1000ff7e, 0x10017198
 */

void __thiscall GUIConsole::~GUIConsole(GUIConsole *this)
{
  sub_10017198();
  std::string::~string((char *)this + 144);
  sub_10003FE9();
  sub_1000FF7E();
  std::string::~string((char *)this + 72);
  std::string::~string((char *)this + 40);
  std::string::~string(this);
}
