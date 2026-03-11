/*
 * func-name: ??0FXSystem@@QAE@ABV0@@Z
 * func-address: 0x1000b9e0
 * callers: none
 * callees: none
 */

FXSystem *__thiscall FXSystem::FXSystem(FXSystem *this, const struct FXSystem *a2)
{
  FXSystem *result; // eax

  result = this;
  *(_DWORD *)this = &FXSystem::`vftable';
  *((_DWORD *)this + 1) = *((_DWORD *)a2 + 1);
  *((_BYTE *)this + 8) = *((_BYTE *)a2 + 8);
  *((float *)this + 3) = *((float *)a2 + 3);
  *((_BYTE *)this + 16) = *((_BYTE *)a2 + 16);
  *((_DWORD *)this + 5) = *((_DWORD *)a2 + 5);
  *((_DWORD *)this + 6) = *((_DWORD *)a2 + 6);
  *((_DWORD *)this + 7) = *((_DWORD *)a2 + 7);
  *((_DWORD *)this + 8) = *((_DWORD *)a2 + 8);
  *((_DWORD *)this + 9) = *((_DWORD *)a2 + 9);
  *((_DWORD *)this + 10) = *((_DWORD *)a2 + 10);
  *((float *)this + 11) = 0.0;
  *((float *)this + 12) = 0.0;
  *((float *)this + 13) = 0.0;
  *((float *)this + 15) = 0.0;
  *((float *)this + 16) = 0.0;
  *((float *)this + 17) = 0.0;
  *((float *)this + 19) = 0.0;
  *((float *)this + 20) = 0.0;
  *((float *)this + 21) = 0.0;
  *((float *)this + 23) = 0.0;
  *((float *)this + 24) = 0.0;
  *((float *)this + 25) = 0.0;
  qmemcpy((char *)this + 44, (char *)a2 + 44, 0x46u);
  *((_DWORD *)this + 29) = *((_DWORD *)a2 + 29);
  *((_DWORD *)this + 30) = *((_DWORD *)a2 + 30);
  *((_BYTE *)this + 124) = *((_BYTE *)a2 + 124);
  *((float *)this + 32) = *((float *)a2 + 32);
  *((_DWORD *)this + 33) = &Volume::`vftable';
  *((_DWORD *)this + 34) = *((_DWORD *)a2 + 34);
  *((_DWORD *)this + 35) = *((_DWORD *)a2 + 35);
  *((_DWORD *)this + 36) = *((_DWORD *)a2 + 36);
  *((_DWORD *)this + 33) = &BBox::`vftable';
  *((_DWORD *)this + 37) = *((_DWORD *)a2 + 37);
  *((_DWORD *)this + 38) = *((_DWORD *)a2 + 38);
  *((_DWORD *)this + 39) = *((_DWORD *)a2 + 39);
  *((_DWORD *)this + 40) = *((_DWORD *)a2 + 40);
  *((_DWORD *)this + 41) = *((_DWORD *)a2 + 41);
  *((_DWORD *)this + 42) = *((_DWORD *)a2 + 42);
  *((_BYTE *)this + 172) = *((_BYTE *)a2 + 172);
  return result;
}
