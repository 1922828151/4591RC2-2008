/*
 * func-name: sub_101777F0
 * func-address: 0x101777f0
 * callers: 0x101723f0, 0x101724b0, 0x10172570, 0x10175470
 * callees: 0x101770d0
 */

int __thiscall sub_101777F0(char *this, _DWORD *a2)
{
  std::string::operator=(this, a2);
  std::string::operator=(this + 28, a2 + 7);
  sub_101770D0((int)(this + 56), a2 + 14);
  sub_101770D0((int)(this + 72), a2 + 18);
  sub_101770D0((int)(this + 88), a2 + 22);
  return sub_101770D0((int)(this + 104), a2 + 26);
}
