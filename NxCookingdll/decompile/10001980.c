/*
 * func-name: sub_10001980
 * func-address: 0x10001980
 * callers: 0x10001a50
 * callees: none
 */

_BYTE *__thiscall sub_10001980(_BYTE *this)
{
  _BYTE *result; // eax

  result = this;
  this[4] = 0;
  *((_DWORD *)this + 2) = 0;
  *((_DWORD *)this + 3) = 0;
  *((_DWORD *)this + 4) = 0;
  *((_DWORD *)this + 5) = 0;
  *((_DWORD *)this + 7) = -1;
  this[32] = 0;
  this[24] = 1;
  *((_DWORD *)this + 9) = &meq::OutputStream::`vftable';
  this[40] = 1;
  *((_DWORD *)this + 11) = 0;
  *(_DWORD *)this = &meq::Socket::`vftable';
  *((_DWORD *)this + 9) = &meq::Socket::`vftable';
  *((_DWORD *)this + 8209) = 15;
  *((_DWORD *)this + 8208) = 0;
  this[32816] = 0;
  *((_DWORD *)this + 8210) = 0;
  return result;
}
