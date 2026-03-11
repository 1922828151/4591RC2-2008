/*
 * func-name: ??4SubareaManager@@QAEAAV0@ABV0@@Z
 * func-address: 0x1003cd10
 * callers: none
 * callees: 0x1003cac0
 */

int __thiscall SubareaManager::operator=(int this, int a2)
{
  sub_1003CAC0((int *)(this + 4), (int *)(a2 + 4));
  *(_BYTE *)(this + 20) = *(_BYTE *)(a2 + 20);
  *(_DWORD *)(this + 24) = *(_DWORD *)(a2 + 24);
  *(_DWORD *)(this + 28) = *(_DWORD *)(a2 + 28);
  *(float *)(this + 32) = *(float *)(a2 + 32);
  *(float *)(this + 36) = *(float *)(a2 + 36);
  *(float *)(this + 40) = *(float *)(a2 + 40);
  *(_DWORD *)(this + 44) = *(_DWORD *)(a2 + 44);
  *(_DWORD *)(this + 48) = *(_DWORD *)(a2 + 48);
  *(_DWORD *)(this + 52) = *(_DWORD *)(a2 + 52);
  *(_DWORD *)(this + 56) = *(_DWORD *)(a2 + 56);
  *(_DWORD *)(this + 60) = *(_DWORD *)(a2 + 60);
  *(_DWORD *)(this + 64) = *(_DWORD *)(a2 + 64);
  *(_DWORD *)(this + 68) = *(_DWORD *)(a2 + 68);
  *(_DWORD *)(this + 72) = *(_DWORD *)(a2 + 72);
  *(_DWORD *)(this + 76) = *(_DWORD *)(a2 + 76);
  std::string::operator=(this + 80, a2 + 80);
  *(_DWORD *)(this + 108) = *(_DWORD *)(a2 + 108);
  return this;
}
