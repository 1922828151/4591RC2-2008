/*
 * func-name: sub_10001FD0
 * func-address: 0x10001fd0
 * callers: none
 * callees: 0x10001e90, 0x10018cf2
 */

std::exception *__thiscall sub_10001FD0(std::exception *this, char a2)
{
  *(_DWORD *)this = &std::length_error::`vftable';
  sub_10001E90(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
