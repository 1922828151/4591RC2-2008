/*
 * func-name: sub_10031570
 * func-address: 0x10031570
 * callers: 0x10030940
 * callees: 0x10014f50
 */

_DWORD *__thiscall sub_10031570(_DWORD *this, int a2)
{
  int v3; // eax

  *this = 0;
  this[1] = a2;
  sub_10014F50((int)(this + 2), (void **)0x1000, 0);
  v3 = 10 * this[1];
  this[9] = 0;
  this[10] = 0;
  this[9] = (*(int (__thiscall **)(int, int, int))(*(_DWORD *)dword_100580A0 + 8))(dword_100580A0, 4 * v3, 1);
  return this;
}
