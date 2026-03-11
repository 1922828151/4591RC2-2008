/*
 * func-name: sub_100147A0
 * func-address: 0x100147a0
 * callers: 0x10014810
 * callees: 0x10018cf2
 */

void __thiscall sub_100147A0(void **this)
{
  *this = &Outpop::Utility::Singleton_Holder_T<Outpop::Utility::Config>::`vftable';
  if ( this[1] )
    operator delete(this[1]);
  *this = &Outpop::Utility::Singleton_Holder::`vftable';
}
