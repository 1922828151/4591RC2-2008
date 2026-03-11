/*
 * func-name: sub_10001DB0
 * func-address: 0x10001db0
 * callers: none
 * callees: 0x10018cf2
 */

std::exception *__thiscall sub_10001DB0(std::exception *this, char a2)
{
  *(_DWORD *)this = &std::bad_alloc::`vftable';
  std::exception::~exception(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
