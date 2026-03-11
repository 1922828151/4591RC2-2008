/*
 * func-name: sub_10033810
 * func-address: 0x10033810
 * callers: 0x1000cf40
 * callees: none
 */

int __thiscall sub_10033810(int this, char *a2)
{
  int result; // eax

  std::string::string((void *)this, a2);
  std::string::string((void *)(this + 28), a2 + 28);
  *(_DWORD *)(this + 56) = *((_DWORD *)a2 + 14);
  *(float *)(this + 60) = *((float *)a2 + 15);
  *(_BYTE *)(this + 64) = a2[64];
  *(float *)(this + 68) = *((float *)a2 + 17);
  result = this;
  *(float *)(this + 72) = *((float *)a2 + 18);
  *(float *)(this + 76) = *((float *)a2 + 19);
  return result;
}
