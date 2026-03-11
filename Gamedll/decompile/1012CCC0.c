/*
 * func-name: ?Clone@HookEsbEnergy@@UAEXPAVActor@@_N@Z_0
 * func-address: 0x1012ccc0
 * callers: 0x1000bd52
 * callees: none
 */

void __thiscall HookEsbEnergy::Clone(HookEsbEnergy *this, struct Actor *a2, bool a3)
{
  Actor::Clone(this, a2, a3);
  std::string::operator=((char *)a2 + 1052, (char *)this + 1052);
  std::string::operator=((char *)a2 + 1080, (char *)this + 1080);
  std::string::operator=((char *)a2 + 1140, (char *)this + 1140);
  *((float *)a2 + 300) = *((float *)this + 300);
  *((float *)a2 + 301) = *((float *)this + 301);
}
