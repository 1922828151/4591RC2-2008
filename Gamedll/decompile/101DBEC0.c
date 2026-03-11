/*
 * func-name: sub_101DBEC0
 * func-address: 0x101dbec0
 * callers: 0x10007f8b
 * callees: 0x10005614, 0x1001274c
 */

int __thiscall sub_101DBEC0(int this, char *a2)
{
  std::string::string((void *)this, a2);
  std::string::string((void *)(this + 28), a2 + 28);
  *(_BYTE *)(this + 56) = a2[56];
  *(_BYTE *)(this + 57) = a2[57];
  *(_BYTE *)(this + 58) = a2[58];
  *(_BYTE *)(this + 59) = a2[59];
  *(_DWORD *)(this + 60) = *((_DWORD *)a2 + 15);
  *(_DWORD *)(this + 64) = *((_DWORD *)a2 + 16);
  *(_DWORD *)(this + 68) = *((_DWORD *)a2 + 17);
  *(_DWORD *)(this + 72) = *((_DWORD *)a2 + 18);
  *(_DWORD *)(this + 76) = *((_DWORD *)a2 + 19);
  std::string::string((void *)(this + 80), a2 + 80);
  *(_DWORD *)(this + 108) = *((_DWORD *)a2 + 27);
  *(_DWORD *)(this + 112) = *((_DWORD *)a2 + 28);
  *(_DWORD *)(this + 116) = *((_DWORD *)a2 + 29);
  sub_1001274C((int)(a2 + 120));
  sub_10005614((int)(a2 + 136));
  *(_DWORD *)(this + 176) = *((_DWORD *)a2 + 44);
  return this;
}
