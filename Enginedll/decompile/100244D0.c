/*
 * func-name: ??0CollisionInfo@@QAE@XZ
 * func-address: 0x100244d0
 * callers: 0x1004c6f0, 0x10063980, 0x10084530, 0x10147890, 0x101478f0, 0x101484b0, 0x10169d00
 * callees: none
 */

CollisionInfo *__thiscall CollisionInfo::CollisionInfo(CollisionInfo *this)
{
  CollisionInfo *result; // eax

  result = this;
  *((_DWORD *)this + 5) = 0;
  *((_DWORD *)this + 6) = 0;
  *((_DWORD *)this + 7) = 0;
  *((_DWORD *)this + 9) = 0;
  *((_DWORD *)this + 10) = 0;
  *((_DWORD *)this + 11) = 0;
  *((float *)this + 20) = 0.0;
  *((_DWORD *)this + 13) = 0;
  *((float *)this + 21) = 0.0;
  *((_DWORD *)this + 14) = 0;
  *((float *)this + 22) = 0.0;
  *((_DWORD *)this + 15) = 0;
  *((float *)this + 23) = 0.0;
  *((float *)this + 24) = 0.0;
  *((float *)this + 25) = 0.0;
  *((_DWORD *)this + 18) = 0;
  *((_DWORD *)this + 16) = 0;
  *((_DWORD *)this + 17) = 0;
  *(_BYTE *)this = 0;
  *((_DWORD *)this + 19) = -1;
  return result;
}
