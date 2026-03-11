/*
 * func-name: sub_102B3F90
 * func-address: 0x102b3f90
 * callers: 0x10003f03
 * callees: 0x102c9d50
 */

Outpop::Utility::Dispatch_Thread *__thiscall sub_102B3F90(Outpop::Utility::Dispatch_Thread *this, char a2)
{
  Outpop::Utility::Dispatch_Thread::~Dispatch_Thread(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
