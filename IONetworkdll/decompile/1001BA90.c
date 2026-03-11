/*
 * func-name: sub_1001BA90
 * func-address: 0x1001ba90
 * callers: none
 * callees: 0x1001b7d0
 */

_DWORD *__thiscall sub_1001BA90(_DWORD *this, char a2)
{
  Outpop::Utility::Sect_Block_Allocator *v3; // eax

  sub_1001B7D0(this);
  if ( (a2 & 1) != 0 )
  {
    v3 = (Outpop::Utility::Sect_Block_Allocator *)Outpop::Utility::Sect_Block_Allocator::instance(this);
    Outpop::Utility::Sect_Block_Allocator::free(v3);
  }
  return this;
}
