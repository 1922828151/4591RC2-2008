/*
 * func-name: sub_10288100
 * func-address: 0x10288100
 * callers: 0x10018057
 * callees: 0x102c9d50
 */

_DWORD *__thiscall sub_10288100(_DWORD *this, char a2)
{
  *this = &CMsgDlgHandler::`vftable';
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
