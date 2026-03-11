/*
 * func-name: sub_100F1150
 * func-address: 0x100f1150
 * callers: 0x100057f4
 * callees: none
 */

int __thiscall sub_100F1150(int this)
{
  int result; // eax

  std::string::string((void *)this);
  std::string::string((void *)(this + 28));
  *(float *)(this + 60) = 50.0;
  *(_DWORD *)(this + 56) = 0;
  *(_BYTE *)(this + 64) = 1;
  *(float *)(this + 68) = 0.0;
  result = this;
  *(float *)(this + 72) = 0.0;
  *(float *)(this + 76) = 0.0;
  return result;
}
