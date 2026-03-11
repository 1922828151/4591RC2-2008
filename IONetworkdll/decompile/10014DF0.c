/*
 * func-name: sub_10014DF0
 * func-address: 0x10014df0
 * callers: none
 * callees: 0x10014bb0
 */

_DWORD *__thiscall sub_10014DF0(_DWORD *this, char a2)
{
  Outpop::Utility::Sect_Block_Allocator *v3; // eax

  sub_10014BB0(this);
  if ( (a2 & 1) != 0 )
  {
    v3 = (Outpop::Utility::Sect_Block_Allocator *)Outpop::Utility::Sect_Block_Allocator::instance(this);
    Outpop::Utility::Sect_Block_Allocator::free(v3);
  }
  return this;
}
