/*
 * func-name: sub_10068410
 * func-address: 0x10068410
 * callers: 0x10004bfb
 * callees: none
 */

_BYTE *__thiscall sub_10068410(_BYTE *this)
{
  _BYTE *result; // eax

  result = this;
  *(_DWORD *)this = &GameClient::UserControl::`vftable';
  this[4] = 1;
  return result;
}
