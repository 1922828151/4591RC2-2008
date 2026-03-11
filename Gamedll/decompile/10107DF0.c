/*
 * func-name: sub_10107DF0
 * func-address: 0x10107df0
 * callers: 0x100186f1
 * callees: none
 */

int __thiscall sub_10107DF0(int this, char *a2)
{
  std::string::string((void *)this, a2);
  std::string::string((void *)(this + 28), a2 + 28);
  std::string::string((void *)(this + 56), a2 + 56);
  return this;
}
