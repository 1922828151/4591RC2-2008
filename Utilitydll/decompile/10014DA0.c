/*
 * func-name: sub_10014DA0
 * func-address: 0x10014da0
 * callers: 0x10014d20
 * callees: none
 */

_DWORD *__thiscall sub_10014DA0(void *this, _DWORD *a2)
{
  _DWORD *result; // eax

  result = a2;
  *a2 = &Outpop::Utility::Singleton_Holder::`vftable';
  *a2 = &Outpop::Utility::Singleton_Holder_T<Outpop::Utility::Default_Allocator>::`vftable';
  a2[1] = this;
  return result;
}
