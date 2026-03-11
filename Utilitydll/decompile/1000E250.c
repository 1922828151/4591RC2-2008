/*
 * func-name: sub_1000E250
 * func-address: 0x1000e250
 * callers: 0x1000e1d0
 * callees: none
 */

_DWORD *__thiscall sub_1000E250(void *this, _DWORD *a2)
{
  _DWORD *result; // eax

  result = a2;
  *a2 = &Outpop::Utility::Singleton_Holder::`vftable';
  *a2 = &Outpop::Utility::Singleton_Holder_T<Outpop::Utility::Sect_Block_Allocator>::`vftable';
  a2[1] = this;
  return result;
}
