/*
 * func-name: ??4FXSystem@@QAEAAV0@ABV0@@Z
 * func-address: 0x1000bb30
 * callers: none
 * callees: none
 */

int __thiscall FXSystem::operator=(int this, int a2)
{
  int result; // eax

  result = this;
  *(_DWORD *)(this + 4) = *(_DWORD *)(a2 + 4);
  *(_BYTE *)(this + 8) = *(_BYTE *)(a2 + 8);
  *(float *)(this + 12) = *(float *)(a2 + 12);
  *(_BYTE *)(this + 16) = *(_BYTE *)(a2 + 16);
  *(_DWORD *)(this + 20) = *(_DWORD *)(a2 + 20);
  *(_DWORD *)(this + 24) = *(_DWORD *)(a2 + 24);
  *(_DWORD *)(this + 28) = *(_DWORD *)(a2 + 28);
  *(_DWORD *)(this + 32) = *(_DWORD *)(a2 + 32);
  *(_DWORD *)(this + 36) = *(_DWORD *)(a2 + 36);
  *(_DWORD *)(this + 40) = *(_DWORD *)(a2 + 40);
  qmemcpy((void *)(this + 44), (const void *)(a2 + 44), 0x46u);
  *(_DWORD *)(this + 116) = *(_DWORD *)(a2 + 116);
  *(_DWORD *)(this + 120) = *(_DWORD *)(a2 + 120);
  *(_BYTE *)(this + 124) = *(_BYTE *)(a2 + 124);
  *(float *)(this + 128) = *(float *)(a2 + 128);
  *(_DWORD *)(this + 136) = *(_DWORD *)(a2 + 136);
  *(_DWORD *)(this + 140) = *(_DWORD *)(a2 + 140);
  *(_DWORD *)(this + 144) = *(_DWORD *)(a2 + 144);
  *(_DWORD *)(this + 148) = *(_DWORD *)(a2 + 148);
  *(_DWORD *)(this + 152) = *(_DWORD *)(a2 + 152);
  *(_DWORD *)(this + 156) = *(_DWORD *)(a2 + 156);
  *(_DWORD *)(this + 160) = *(_DWORD *)(a2 + 160);
  *(_DWORD *)(this + 164) = *(_DWORD *)(a2 + 164);
  *(_DWORD *)(this + 168) = *(_DWORD *)(a2 + 168);
  *(_BYTE *)(this + 172) = *(_BYTE *)(a2 + 172);
  return result;
}
