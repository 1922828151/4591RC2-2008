/*
 * func-name: sub_10001390
 * func-address: 0x10001390
 * callers: 0x10001430
 * callees: 0x100014c0, 0x100034a0
 */

_DWORD *__thiscall sub_10001390(_DWORD *this)
{
  int v2; // eax

  this[1] = 0;
  this[2] = 0;
  this[3] = 0;
  this[6] = &NxFoundationSDK::`vftable';
  *this = &NxFoundation::FoundationSDK::`vftable';
  this[6] = &NxFoundation::FoundationSDK::`vftable';
  sub_100014C0(this + 13);
  this[7] = 0;
  *((_BYTE *)this + 48) = 1;
  this[10] = 0;
  this[9] = 0;
  this[11] = 0;
  v2 = (*(int (__thiscall **)(int, int, int))(*(_DWORD *)dword_100580A0 + 8))(dword_100580A0, 32908, 129);
  if ( v2 )
    this[8] = sub_100034A0(v2);
  else
    this[8] = 0;
  return this;
}
