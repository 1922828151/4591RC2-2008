/*
 * func-name: sub_10001D00
 * func-address: 0x10001d00
 * callers: 0x10002a80, 0x10002b70, 0x10002c60, 0x10002d40, 0x10002e20, 0x10002f00, 0x10002fe0, 0x10003120, 0x10003250, 0x10003340
 * callees: none
 */

_DWORD *__thiscall sub_10001D00(_DWORD *this, int a2, char a3, int a4, int a5, const char *a6)
{
  _DWORD *result; // eax

  result = this;
  this[2] = a2;
  *((_BYTE *)this + 16) = a3;
  *(_BYTE *)this = 5;
  this[3] = a5;
  this[5] = a4;
  this[6] = a6;
  this[1] = strlen(a6) + a4 + 13;
  return result;
}
