/*
 * func-name: sub_100D3ED0
 * func-address: 0x100d3ed0
 * callers: 0x10009c19
 * callees: none
 */

_DWORD *__thiscall sub_100D3ED0(_DWORD *this)
{
  _DWORD *result; // eax

  result = this;
  *this = &GameClient::NxRaycastVehicle::`vftable';
  this[1] = 0;
  this[2] = 0;
  this[6] = 0;
  this[7] = 0;
  this[8] = 0;
  this[10] = 0;
  this[11] = 0;
  this[12] = 0;
  this[39] = 0;
  this[40] = 0;
  this[41] = 0;
  *((float *)this + 46) = 1.0;
  *((_BYTE *)this + 168) = 1;
  *((float *)this + 47) = 0.0;
  this[43] = 2;
  *((float *)this + 17) = 0.0;
  this[44] = 0;
  *((float *)this + 18) = 0.0;
  *((_BYTE *)this + 180) = 0;
  *((_BYTE *)this + 181) = 0;
  return result;
}
