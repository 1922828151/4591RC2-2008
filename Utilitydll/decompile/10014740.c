/*
 * func-name: sub_10014740
 * func-address: 0x10014740
 * callers: 0x100144b0
 * callees: none
 */

_DWORD *__thiscall sub_10014740(void *this, _DWORD *a2)
{
  _DWORD *result; // eax

  result = a2;
  *a2 = &Outpop::Utility::Singleton_Holder::`vftable';
  *a2 = &Outpop::Utility::Singleton_Holder_T<Outpop::Utility::Config>::`vftable';
  a2[1] = this;
  return result;
}
