/*
 * func-name: sub_1011F3A0
 * func-address: 0x1011f3a0
 * callers: 0x10003bb6
 * callees: none
 */

int __thiscall sub_1011F3A0(Actor *this, struct Actor *a2, bool a3)
{
  Actor::Clone(this, a2, a3);
  std::string::operator=((char *)a2 + 1052, (char *)this + 1052);
  std::string::operator=((char *)a2 + 1112, (char *)this + 1112);
  std::string::operator=((char *)a2 + 1140, (char *)this + 1140);
  std::string::operator=((char *)a2 + 1168, (char *)this + 1168);
  return std::string::operator=((char *)a2 + 1196, (char *)this + 1196);
}
