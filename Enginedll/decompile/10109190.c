/*
 * func-name: ??4PostProcess@@QAEAAV0@ABV0@@Z
 * func-address: 0x10109190
 * callers: none
 * callees: 0x10108f10
 */

_BYTE *__thiscall PostProcess::operator=(_BYTE *this, int a2)
{
  *this = *(_BYTE *)a2;
  this[1] = *(_BYTE *)(a2 + 1);
  *((_DWORD *)this + 1) = *(_DWORD *)(a2 + 4);
  *((_DWORD *)this + 2) = *(_DWORD *)(a2 + 8);
  *((_DWORD *)this + 3) = *(_DWORD *)(a2 + 12);
  *((_DWORD *)this + 4) = *(_DWORD *)(a2 + 16);
  *((_DWORD *)this + 5) = *(_DWORD *)(a2 + 20);
  *((_DWORD *)this + 6) = *(_DWORD *)(a2 + 24);
  *((_DWORD *)this + 7) = *(_DWORD *)(a2 + 28);
  *((_DWORD *)this + 8) = *(_DWORD *)(a2 + 32);
  *((_DWORD *)this + 9) = *(_DWORD *)(a2 + 36);
  *((_DWORD *)this + 10) = *(_DWORD *)(a2 + 40);
  *((_DWORD *)this + 11) = *(_DWORD *)(a2 + 44);
  *((_DWORD *)this + 12) = *(_DWORD *)(a2 + 48);
  *((_DWORD *)this + 13) = *(_DWORD *)(a2 + 52);
  *((_DWORD *)this + 14) = *(_DWORD *)(a2 + 56);
  *((_DWORD *)this + 15) = *(_DWORD *)(a2 + 60);
  sub_10108F10((int)(this + 64), a2 + 64);
  *((_DWORD *)this + 20) = *(_DWORD *)(a2 + 80);
  return this;
}
