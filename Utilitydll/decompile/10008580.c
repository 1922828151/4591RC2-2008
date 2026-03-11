/*
 * func-name: sub_10008580
 * func-address: 0x10008580
 * callers: 0x10008080
 * callees: none
 */

_DWORD *__thiscall sub_10008580(void *this, _DWORD *a2)
{
  _DWORD *result; // eax

  result = a2;
  *a2 = &Outpop::Utility::Singleton_Holder::`vftable';
  *a2 = &Outpop::Utility::Singleton_Holder_T<Outpop::Utility::Timer_Queue>::`vftable';
  a2[1] = this;
  return result;
}
