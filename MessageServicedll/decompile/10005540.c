/*
 * func-name: sub_10005540
 * func-address: 0x10005540
 * callers: none
 * callees: 0x100294f2
 */

Outpop::Utility::Dispatch_Thread *__thiscall sub_10005540(Outpop::Utility::Dispatch_Thread *this, char a2)
{
  Outpop::Utility::Dispatch_Thread::~Dispatch_Thread(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
