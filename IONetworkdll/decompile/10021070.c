/*
 * func-name: sub_10021070
 * func-address: 0x10021070
 * callers: none
 * callees: 0x10020d10
 */

_DWORD *__thiscall sub_10021070(_DWORD *this, char a2)
{
  Outpop::Utility::Sect_Block_Allocator *v3; // eax

  sub_10020D10(this);
  if ( (a2 & 1) != 0 )
  {
    v3 = (Outpop::Utility::Sect_Block_Allocator *)Outpop::Utility::Sect_Block_Allocator::instance(this);
    Outpop::Utility::Sect_Block_Allocator::free(v3);
  }
  return this;
}
