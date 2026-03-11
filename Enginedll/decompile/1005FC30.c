/*
 * func-name: sub_1005FC30
 * func-address: 0x1005fc30
 * callers: none
 * callees: none
 */

_DWORD *__thiscall sub_1005FC30(_DWORD *this, int a2, unsigned __int16 a3)
{
  _DWORD *result; // eax

  result = (_DWORD *)(44 * a3 + this[5] + 8);
  *result &= ~a2;
  return result;
}
