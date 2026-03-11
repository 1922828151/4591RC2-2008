/*
 * func-name: sub_10013F00
 * func-address: 0x10013f00
 * callers: none
 * callees: none
 */

char __thiscall sub_10013F00(int this, int a2)
{
  *(_DWORD *)(a2 + 24) = *(_DWORD *)(this + 96) & 0xFFFFFFFC;
  *(_DWORD *)a2 = *(_DWORD *)(this + 4);
  *(_DWORD *)(a2 + 4) = *(_DWORD *)(this + 8);
  *(_DWORD *)(a2 + 16) = *(_DWORD *)(this + 12);
  *(_DWORD *)(a2 + 20) = *(_DWORD *)(this + 16);
  *(_DWORD *)(a2 + 8) = 12;
  *(_DWORD *)(a2 + 12) = 12;
  *(_DWORD *)(a2 + 32) = *(_DWORD *)(this + 80);
  *(_DWORD *)(a2 + 28) = 2;
  *(_DWORD *)(a2 + 36) = *(_DWORD *)(this + 176);
  *(float *)(a2 + 40) = *(float *)(this + 180);
  *(_DWORD *)(a2 + 44) = 0;
  return 1;
}
