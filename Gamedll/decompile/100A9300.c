/*
 * func-name: ?SetEndPoints@Laser@@QAEXAAVVector@@0@Z_0
 * func-address: 0x100a9300
 * callers: 0x10007b8f
 * callees: none
 */

void __thiscall Laser::SetEndPoints(Laser *this, struct Vector *a2, struct Vector *a3)
{
  *((_DWORD *)this + 55) = *(_DWORD *)a2;
  *((_DWORD *)this + 56) = *((_DWORD *)a2 + 1);
  *((_DWORD *)this + 57) = *((_DWORD *)a2 + 2);
  *((_DWORD *)this + 58) = *(_DWORD *)a3;
  *((_DWORD *)this + 59) = *((_DWORD *)a3 + 1);
  *((_DWORD *)this + 60) = *((_DWORD *)a3 + 2);
  *((_DWORD *)this + 5) = *(_DWORD *)a2;
  *((_DWORD *)this + 6) = *((_DWORD *)a2 + 1);
  *((_DWORD *)this + 7) = *((_DWORD *)a2 + 2);
}
