/*
 * func-name: sub_100605B0
 * func-address: 0x100605b0
 * callers: 0x101b7e00
 * callees: 0x10060470
 */

_DWORD *__thiscall sub_100605B0(_DWORD *this)
{
  this[1] = &SpatialTree::`vftable';
  *this = &BSPManager::`vftable';
  this[1] = &BSPManager::`vftable';
  this[3] = 0;
  this[4] = 0;
  this[5] = 0;
  this[6] = 0;
  this[7] = 0;
  this[8] = 0;
  *((_WORD *)this + 18) = -1;
  *((_WORD *)this + 19) = -1;
  *((_WORD *)this + 20) = -1;
  *((_WORD *)this + 22) = 0;
  *((_WORD *)this + 21) = 0;
  this[12] = 0;
  this[13] = 0;
  this[14] = sub_10060470();
  return this;
}
