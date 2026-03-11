/*
 * func-name: ??4Canvas@@QAEAAV0@ABV0@@Z
 * func-address: 0x1002fea0
 * callers: none
 * callees: 0x1002ee00
 */

int __thiscall Canvas::operator=(int this, int a2)
{
  *(_DWORD *)(this + 4) = *(_DWORD *)(a2 + 4);
  *(_DWORD *)(this + 8) = *(_DWORD *)(a2 + 8);
  *(_DWORD *)(this + 12) = *(_DWORD *)(a2 + 12);
  *(_DWORD *)(this + 16) = *(_DWORD *)(a2 + 16);
  *(_DWORD *)(this + 20) = *(_DWORD *)(a2 + 20);
  *(_DWORD *)(this + 24) = *(_DWORD *)(a2 + 24);
  *(_DWORD *)(this + 28) = *(_DWORD *)(a2 + 28);
  sub_1002EE00((int *)(this + 32), (int *)(a2 + 32));
  *(_DWORD *)(this + 48) = *(_DWORD *)(a2 + 48);
  *(float *)(this + 52) = *(float *)(a2 + 52);
  *(float *)(this + 56) = *(float *)(a2 + 56);
  *(_DWORD *)(this + 60) = *(_DWORD *)(a2 + 60);
  *(_DWORD *)(this + 64) = *(_DWORD *)(a2 + 64);
  *(_DWORD *)(this + 68) = *(_DWORD *)(a2 + 68);
  *(_DWORD *)(this + 72) = *(_DWORD *)(a2 + 72);
  *(_BYTE *)(this + 76) = *(_BYTE *)(a2 + 76);
  *(_BYTE *)(this + 77) = *(_BYTE *)(a2 + 77);
  *(_BYTE *)(this + 78) = *(_BYTE *)(a2 + 78);
  *(_BYTE *)(this + 79) = *(_BYTE *)(a2 + 79);
  *(_BYTE *)(this + 80) = *(_BYTE *)(a2 + 80);
  return this;
}
