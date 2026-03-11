/*
 * func-name: sub_10008A10
 * func-address: 0x10008a10
 * callers: none
 * callees: 0x1004e870
 */

std::exception *__thiscall sub_10008A10(std::exception *this, char a2)
{
  *(_DWORD *)this = &std::bad_alloc::`vftable';
  std::exception::~exception(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
