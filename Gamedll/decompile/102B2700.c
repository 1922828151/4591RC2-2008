/*
 * func-name: sub_102B2700
 * func-address: 0x102b2700
 * callers: 0x10015587
 * callees: 0x10009cd2
 */

_DWORD *__thiscall sub_102B2700(_DWORD *this)
{
  char v3; // [esp+Fh] [ebp-11h] BYREF
  _DWORD *v4; // [esp+10h] [ebp-10h]
  int v5; // [esp+1Ch] [ebp-4h]

  v4 = this;
  v5 = 0;
  *this = &GameDefaultMessageHandler::`vftable';
  sub_10009CD2((int)&v3, (int)&v3);
  this[13] = 0;
  this[14] = 0;
  this[15] = 0;
  this[11] = 0;
  return this;
}
