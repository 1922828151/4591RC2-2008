/*
 * func-name: sub_100571B0
 * func-address: 0x100571b0
 * callers: 0x10057650
 * callees: none
 */

_DWORD *__thiscall sub_100571B0(_DWORD *this, int a2, int a3, int a4, _DWORD *a5, char a6)
{
  _DWORD *v7; // edi

  this[1] = a3;
  v7 = this + 3;
  *this = a2;
  this[2] = a4;
  std::string::string(this + 3, a5);
  v7[7] = a5[7];
  v7[8] = a5[8];
  v7[9] = a5[9];
  *((_BYTE *)this + 52) = a6;
  *((_BYTE *)this + 53) = 0;
  return this;
}
