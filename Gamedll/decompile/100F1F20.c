/*
 * func-name: sub_100F1F20
 * func-address: 0x100f1f20
 * callers: 0x10016527
 * callees: none
 */

int __thiscall sub_100F1F20(int this, void *a2, void *a3, char a4, int a5)
{
  std::string::string((void *)this, a2);
  std::string::string((void *)(this + 28), a3);
  *(_DWORD *)(this + 60) = a5;
  *(_BYTE *)(this + 56) = a4;
  return this;
}
