/*
 * func-name: sub_101378B0
 * func-address: 0x101378b0
 * callers: 0x1000c09a
 * callees: 0x1001025d, 0x100146af
 */

_DWORD *__thiscall sub_101378B0(_DWORD *this)
{
  char v3; // [esp+Bh] [ebp-11h] BYREF
  _DWORD *v4; // [esp+Ch] [ebp-10h]
  int v5; // [esp+18h] [ebp-4h]

  v4 = this;
  v5 = 0;
  *this = &COutPopStream::`vftable';
  std::string::string(this + 1);
  LOBYTE(v5) = 1;
  sub_1001025D((int)&v3, (int)&v3);
  LOBYTE(v5) = 2;
  sub_100146AF((int)&v3, (int)&v3);
  this[31] = 1;
  return this;
}
