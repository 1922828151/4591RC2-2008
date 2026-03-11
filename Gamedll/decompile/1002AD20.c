/*
 * func-name: sub_1002AD20
 * func-address: 0x1002ad20
 * callers: 0x1001389a
 * callees: 0x102c9d50
 */

std::exception *__thiscall sub_1002AD20(std::exception *this, char a2)
{
  *(_DWORD *)this = &std::bad_alloc::`vftable';
  std::exception::~exception(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
