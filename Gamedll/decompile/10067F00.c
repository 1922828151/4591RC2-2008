/*
 * func-name: ??0BigMapState@@QAE@ABV0@@Z_0
 * func-address: 0x10067f00
 * callers: 0x100125a8
 * callees: none
 */

BigMapState *__thiscall BigMapState::BigMapState(BigMapState *this, const struct BigMapState *a2)
{
  BigMapState *result; // eax

  result = this;
  *(_DWORD *)this = &MapState::`vftable';
  *((_DWORD *)this + 1) = *((_DWORD *)a2 + 1);
  *(_DWORD *)this = &BigMapState::`vftable'{for `MapState'};
  *((_DWORD *)this + 2) = &BigMapState::`vftable'{for `EventObserver'};
  *((_DWORD *)this + 3) = *((_DWORD *)a2 + 3);
  *((_DWORD *)this + 4) = *((_DWORD *)a2 + 4);
  *((_DWORD *)this + 5) = *((_DWORD *)a2 + 5);
  *((_DWORD *)this + 6) = *((_DWORD *)a2 + 6);
  *((_DWORD *)this + 7) = *((_DWORD *)a2 + 7);
  *((_DWORD *)this + 8) = *((_DWORD *)a2 + 8);
  *((float *)this + 9) = *((float *)a2 + 9);
  *((float *)this + 10) = *((float *)a2 + 10);
  *((float *)this + 11) = *((float *)a2 + 11);
  *((_BYTE *)this + 48) = *((_BYTE *)a2 + 48);
  qmemcpy((char *)this + 52, (char *)a2 + 52, 0x30u);
  return result;
}
