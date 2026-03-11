/*
 * func-name: ??4CollisionInfo@@QAEAAU0@ABU0@@Z
 * func-address: 0x10029a50
 * callers: 0x10052bc0, 0x10052d30, 0x1013fff0, 0x10143c20, 0x10146a50, 0x10146b40, 0x101478f0, 0x101488a0, 0x10148960
 * callees: 0x10022c20, 0x100268d0
 */

double *__thiscall CollisionInfo::operator=(double *this, int a2)
{
  *(_BYTE *)this = *(_BYTE *)a2;
  this[1] = *(double *)(a2 + 8);
  sub_100268D0((int)(this + 2), a2 + 16);
  sub_100268D0((int)(this + 4), a2 + 32);
  sub_10022C20((int)(this + 6), a2 + 48);
  *((_DWORD *)this + 16) = *(_DWORD *)(a2 + 64);
  *((_DWORD *)this + 17) = *(_DWORD *)(a2 + 68);
  *((_DWORD *)this + 18) = *(_DWORD *)(a2 + 72);
  *((_DWORD *)this + 19) = *(_DWORD *)(a2 + 76);
  *((_DWORD *)this + 20) = *(_DWORD *)(a2 + 80);
  *((_DWORD *)this + 21) = *(_DWORD *)(a2 + 84);
  *((_DWORD *)this + 22) = *(_DWORD *)(a2 + 88);
  *((_DWORD *)this + 23) = *(_DWORD *)(a2 + 92);
  *((_DWORD *)this + 24) = *(_DWORD *)(a2 + 96);
  *((_DWORD *)this + 25) = *(_DWORD *)(a2 + 100);
  return this;
}
