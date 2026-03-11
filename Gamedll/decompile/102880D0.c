/*
 * func-name: sub_102880D0
 * func-address: 0x102880d0
 * callers: 0x1000208b
 * callees: 0x102c9d50
 */

_DWORD *__thiscall sub_102880D0(_DWORD *this, char a2)
{
  *this = &CMsgDlgHandler::`vftable';
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
