/*
 * func-name: sub_100A1D10
 * func-address: 0x100a1d10
 * callers: 0x1000bfe6
 * callees: none
 */

int __thiscall sub_100A1D10(int this, char *a2)
{
  std::string::string((void *)this, a2);
  std::string::string((void *)(this + 28), a2 + 28);
  *(_BYTE *)(this + 56) = a2[56];
  *(_DWORD *)(this + 60) = *((_DWORD *)a2 + 15);
  return this;
}
