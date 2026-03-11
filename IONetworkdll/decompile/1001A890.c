/*
 * func-name: sub_1001A890
 * func-address: 0x1001a890
 * callers: none
 * callees: 0x10019f20, 0x1004e870
 */

_DWORD *__thiscall sub_1001A890(_DWORD *this, char a2)
{
  sub_10019F20(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
