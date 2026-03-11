/*
 * func-name: sub_10067AD0
 * func-address: 0x10067ad0
 * callers: 0x10010c94
 * callees: 0x102c9d50
 */

char *__thiscall sub_10067AD0(char *this, char a2)
{
  *(_DWORD *)this = &std::logic_error::`vftable';
  std::string::~string(this + 12);
  std::exception::~exception((std::exception *)this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
