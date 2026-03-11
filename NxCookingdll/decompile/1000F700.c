/*
 * func-name: sub_1000F700
 * func-address: 0x1000f700
 * callers: 0x1000dbc0, 0x100239c0
 * callees: 0x1000f5f0
 */

_DWORD *__thiscall sub_1000F700(_DWORD *this, int a2)
{
  sub_1000F5F0(this);
  this[3] = 0;
  this[6] = 0;
  this[7] = 0;
  this[8] = a2;
  *this = &SupportVertexMap::`vftable';
  return this;
}
