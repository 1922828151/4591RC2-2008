/*
 * func-name: ??0GUIConsole@@QAE@ABV0@@Z_0
 * func-address: 0x10063b80
 * callers: 0x1001a9e7
 * callees: 0x100084b3, 0x1000b613, 0x1000fda3
 */

GUIConsole *__thiscall GUIConsole::GUIConsole(GUIConsole *this, const struct GUIConsole *a2)
{
  std::string::string(this, a2);
  *((_DWORD *)this + 7) = *((_DWORD *)a2 + 7);
  *((_BYTE *)this + 32) = *((_BYTE *)a2 + 32);
  *((_DWORD *)this + 9) = *((_DWORD *)a2 + 9);
  std::string::string((char *)this + 40, (char *)a2 + 40);
  *((_BYTE *)this + 68) = *((_BYTE *)a2 + 68);
  std::string::string((char *)this + 72, (char *)a2 + 72);
  sub_100084B3((int)a2 + 100);
  *((_DWORD *)this + 29) = *((_DWORD *)a2 + 29);
  *((float *)this + 30) = *((float *)a2 + 30);
  *((_BYTE *)this + 124) = *((_BYTE *)a2 + 124);
  *((_BYTE *)this + 125) = *((_BYTE *)a2 + 125);
  sub_1000B613((int)a2 + 128);
  std::string::string((char *)this + 144, (char *)a2 + 144);
  sub_1000FDA3((int)a2 + 172);
  *((_DWORD *)this + 47) = *((_DWORD *)a2 + 47);
  return this;
}
