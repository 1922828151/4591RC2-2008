/*
 * func-name: sub_10031E20
 * func-address: 0x10031e20
 * callers: 0x100322a0, 0x10032590, 0x10177070
 * callees: 0x100319f0
 */

char *__thiscall sub_10031E20(char *this, int a2)
{
  std::string::string(this, a2);
  std::string::string(this + 28, a2 + 28);
  sub_100319F0((int)(this + 56), a2 + 56);
  sub_100319F0((int)(this + 72), a2 + 72);
  sub_100319F0((int)(this + 88), a2 + 88);
  sub_100319F0((int)(this + 104), a2 + 104);
  return this;
}
