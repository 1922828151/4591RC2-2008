/*
 * func-name: sub_100430C0
 * func-address: 0x100430c0
 * callers: 0x1000ee7b
 * callees: none
 */

int __thiscall sub_100430C0(int this, char *a2)
{
  std::string::string((void *)this, a2);
  std::string::string((void *)(this + 28), a2 + 28);
  return this;
}
