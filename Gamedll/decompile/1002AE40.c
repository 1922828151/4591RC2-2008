/*
 * func-name: sub_1002AE40
 * func-address: 0x1002ae40
 * callers: 0x1000c4c3
 * callees: 0x102c9d50
 */

char *__thiscall sub_1002AE40(char *this, char a2)
{
  *(_DWORD *)this = &std::logic_error::`vftable';
  std::string::~string(this + 12);
  std::exception::~exception((std::exception *)this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
