/*
 * func-name: sub_100084B0
 * func-address: 0x100084b0
 * callers: 0x10008000
 * callees: none
 */

_DWORD *__thiscall sub_100084B0(void *this, _DWORD *a2)
{
  _DWORD *result; // eax

  result = a2;
  *a2 = &Outpop::Utility::Singleton_Holder::`vftable';
  *a2 = &Outpop::Utility::Singleton_Holder_T<Outpop::Utility::Logger>::`vftable';
  a2[1] = this;
  return result;
}
