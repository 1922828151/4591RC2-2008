/*
 * func-name: sub_101E29D0
 * func-address: 0x101e29d0
 * callers: 0x10007522
 * callees: 0x10001721, 0x100032a1, 0x1000ba0f, 0x1000e061, 0x10018c0a
 */

_DWORD *__thiscall sub_101E29D0(_DWORD *this)
{
  char v3; // [esp+Fh] [ebp-11h] BYREF
  _DWORD *v4; // [esp+10h] [ebp-10h]
  int v5; // [esp+1Ch] [ebp-4h]

  v4 = this;
  *this = &GameClient::CharacterManager::`vftable';
  sub_10001721((int)&v3, (int)&v3);
  v5 = 0;
  sub_1000BA0F((int)&v3, (int)&v3);
  LOBYTE(v5) = 1;
  sub_1000E061((int)&v3, (int)&v3);
  LOBYTE(v5) = 2;
  sub_1000E061((int)&v3, (int)&v3);
  LOBYTE(v5) = 3;
  sub_100032A1((int)&v3, (int)&v3);
  this[53] = 0;
  this[54] = 0;
  this[55] = 0;
  this[57] = 0;
  this[58] = 0;
  this[59] = 0;
  this[62] = -1;
  this[64] = -1;
  this[65] = 0;
  this[66] = 0;
  this[68] = 0;
  this[69] = 0;
  this[70] = 0;
  LOBYTE(v5) = 7;
  sub_10018C0A((int)&v3, (int)&v3);
  return this;
}
