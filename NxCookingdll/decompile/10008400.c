/*
 * func-name: sub_10008400
 * func-address: 0x10008400
 * callers: 0x1000bf10
 * callees: none
 */

_DWORD *__thiscall sub_10008400(_DWORD *this, int a2, char a3, int a4, int a5, int a6, int a7, int a8)
{
  _DWORD *result; // eax
  _DWORD *v9; // ecx
  int i; // esi

  result = this;
  *this = 0;
  this[1] = 0;
  this[2] = 0;
  this[5] = 0;
  this[6] = 0;
  this[7] = 0;
  this[10] = 0;
  this[11] = 0;
  this[12] = 0;
  this[15] = a2;
  *((_BYTE *)this + 64) = a3;
  v9 = this + 17;
  for ( i = 31; i >= 0; --i )
  {
    *v9 = 0;
    v9[1] = 0;
    v9[2] = 0;
    v9 += 5;
  }
  result[177] = 0;
  result[178] = 0;
  result[179] = a4;
  result[180] = a5;
  result[181] = a6;
  result[182] = a7;
  result[183] = a8;
  return result;
}
