/*
 * func-name: sub_10217C20
 * func-address: 0x10217c20
 * callers: 0x1001a915
 * callees: 0x102c9d50
 */

_DWORD *__thiscall sub_10217C20(_DWORD *this, char a2)
{
  *this = &CMsgDlgHandler::`vftable';
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
