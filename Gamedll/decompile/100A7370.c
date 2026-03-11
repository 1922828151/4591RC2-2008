/*
 * func-name: sub_100A7370
 * func-address: 0x100a7370
 * callers: 0x1001078f
 * callees: 0x1000e336, 0x1001a2e4
 */

int __thiscall sub_100A7370(int this, char *a2)
{
  std::string::string((void *)this, a2);
  std::string::string((void *)(this + 28), a2 + 28);
  sub_1001A2E4((int)(a2 + 56));
  sub_1000E336((int)(a2 + 72));
  *(_DWORD *)(this + 88) = *((_DWORD *)a2 + 22);
  *(_BYTE *)(this + 92) = a2[92];
  return this;
}
