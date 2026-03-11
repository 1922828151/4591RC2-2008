/*
 * func-name: sub_100316B0
 * func-address: 0x100316b0
 * callers: 0x10030940
 * callees: none
 */

_DWORD *__thiscall sub_100316B0(_DWORD *this, const void *a2)
{
  _DWORD *result; // eax

  result = this;
  qmemcpy((void *)(this[9] + 40 * this[10]), a2, 0x28u);
  *(_WORD *)(this[9] + 40 * this[10]++ + 26) = *((_WORD *)this + 20);
  return result;
}
