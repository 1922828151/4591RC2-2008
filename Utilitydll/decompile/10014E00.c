/*
 * func-name: sub_10014E00
 * func-address: 0x10014e00
 * callers: 0x10014e70
 * callees: 0x10018cf2
 */

void __thiscall sub_10014E00(void **this)
{
  *this = &Outpop::Utility::Singleton_Holder_T<Outpop::Utility::Default_Allocator>::`vftable';
  operator delete(this[1]);
  *this = &Outpop::Utility::Singleton_Holder::`vftable';
}
