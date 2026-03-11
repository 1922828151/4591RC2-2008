/*
 * func-name: sub_1001BAC0
 * func-address: 0x1001bac0
 * callers: none
 * callees: 0x1001b980
 */

_DWORD *__thiscall sub_1001BAC0(_DWORD *this, char a2)
{
  Outpop::Utility::Sect_Block_Allocator *v3; // eax

  sub_1001B980(this);
  if ( (a2 & 1) != 0 )
  {
    v3 = (Outpop::Utility::Sect_Block_Allocator *)Outpop::Utility::Sect_Block_Allocator::instance(this);
    Outpop::Utility::Sect_Block_Allocator::free(v3);
  }
  return this;
}
