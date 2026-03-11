/*
 * func-name: sub_10007C90
 * func-address: 0x10007c90
 * callers: none
 * callees: none
 */

char __thiscall sub_10007C90(int this, int a2)
{
  int v2; // edx
  int v3; // edx

  *(float *)(a2 + 40) = 0.0;
  *(_DWORD *)(a2 + 4) = 0;
  *(_DWORD *)(a2 + 8) = 0;
  *(_DWORD *)(a2 + 12) = 0;
  *(_DWORD *)(a2 + 16) = 0;
  *(_DWORD *)(a2 + 28) = 0;
  *(_DWORD *)(a2 + 32) = 0;
  *(_DWORD *)(a2 + 44) = 0;
  *(_DWORD *)(a2 + 48) = 0;
  *(_DWORD *)(a2 + 52) = 0;
  *(_DWORD *)(a2 + 56) = 0;
  *(_DWORD *)(a2 + 60) = 0;
  *(_DWORD *)a2 = 0;
  *(_DWORD *)(a2 + 20) = 0;
  *(_DWORD *)(a2 + 24) = 0;
  *(_DWORD *)(a2 + 36) = 0;
  *(_DWORD *)(a2 + 4) = (*(_DWORD *)(this + 8) - *(_DWORD *)(this + 4)) / 12;
  *(_DWORD *)(a2 + 12) = ((*(_DWORD *)(this + 68) - *(_DWORD *)(this + 64)) >> 2) / 3u;
  *(_DWORD *)(a2 + 28) = *(_DWORD *)(this + 4);
  *(_DWORD *)(a2 + 56) = *(_DWORD *)(this + 24);
  *(_DWORD *)(a2 + 60) = *(_DWORD *)(this + 44);
  v2 = *(_DWORD *)(this + 64);
  *(_DWORD *)(a2 + 8) = 12;
  *(_DWORD *)(a2 + 16) = 12;
  *(_DWORD *)(a2 + 48) = 4;
  *(_DWORD *)(a2 + 52) = 4;
  *(_DWORD *)(a2 + 32) = v2;
  *(_DWORD *)(a2 + 44) = *(_DWORD *)(this + 216) & 0xFFFFFFFC;
  *(float *)(a2 + 40) = *(float *)(this + 220);
  if ( *(_DWORD *)(this + 208) )
  {
    *(_DWORD *)(a2 + 12) = 0;
    *(_DWORD *)(a2 + 32) = 0;
    *(_DWORD *)(a2 + 16) = 0;
    v3 = *(_DWORD *)(this + 68) - *(_DWORD *)(this + 64);
    *(_DWORD *)(a2 + 24) = 16;
    *(_DWORD *)(a2 + 20) = (unsigned int)(v3 >> 2) >> 2;
    *(_DWORD *)(a2 + 36) = *(_DWORD *)(this + 64);
  }
  return 1;
}
