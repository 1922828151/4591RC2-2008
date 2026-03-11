/*
 * func-name: sub_10008670
 * func-address: 0x10008670
 * callers: none
 * callees: 0x100085e0, 0x10018cf2
 */

_DWORD *__thiscall sub_10008670(_DWORD *this, char a2)
{
  sub_100085E0(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
