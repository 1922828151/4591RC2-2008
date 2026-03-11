/*
 * func-name: sub_10001090
 * func-address: 0x10001090
 * callers: none
 * callees: 0x101a2500
 */

std::exception *__thiscall sub_10001090(std::exception *this, char a2)
{
  *(_DWORD *)this = &std::bad_alloc::`vftable';
  std::exception::~exception(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
