/*
 * func-name: sub_100210D0
 * func-address: 0x100210d0
 * callers: none
 * callees: 0x10020f90
 */

_DWORD *__thiscall sub_100210D0(_DWORD *this, char a2)
{
  Outpop::Utility::Sect_Block_Allocator *v3; // eax

  sub_10020F90(this);
  if ( (a2 & 1) != 0 )
  {
    v3 = (Outpop::Utility::Sect_Block_Allocator *)Outpop::Utility::Sect_Block_Allocator::instance(this);
    Outpop::Utility::Sect_Block_Allocator::free(v3);
  }
  return this;
}
