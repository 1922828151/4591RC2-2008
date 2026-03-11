/*
 * func-name: sub_10220D20
 * func-address: 0x10220d20
 * callers: 0x1000e5ed
 * callees: 0x1000d512
 */

int __thiscall sub_10220D20(int this)
{
  char v3; // [esp+Fh] [ebp-11h] BYREF
  int v4; // [esp+10h] [ebp-10h]
  int v5; // [esp+1Ch] [ebp-4h]

  v4 = this;
  std::string::string((void *)this);
  v5 = 0;
  std::string::string((void *)(this + 28));
  std::string::string((void *)(this + 80));
  *(float *)(this + 108) = 0.0;
  *(_DWORD *)(this + 124) = 0;
  *(float *)(this + 112) = 0.0;
  *(_DWORD *)(this + 128) = 0;
  *(float *)(this + 116) = 0.0;
  *(_DWORD *)(this + 132) = 0;
  LOBYTE(v5) = 3;
  sub_1000D512((int)&v3, (int)&v3);
  return this;
}
