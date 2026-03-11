/*
 * func-name: sub_100163E0
 * func-address: 0x100163e0
 * callers: none
 * callees: 0x100162c0, 0x1004e870
 */

_DWORD *__thiscall sub_100163E0(_DWORD *this, char a2)
{
  sub_100162C0(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
