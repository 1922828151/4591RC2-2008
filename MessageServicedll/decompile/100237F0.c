/*
 * func-name: sub_100237F0
 * func-address: 0x100237f0
 * callers: none
 * callees: 0x100236a0
 */

_DWORD *__thiscall sub_100237F0(_DWORD *this, char a2)
{
  Outpop::Utility::Sect_Block_Allocator *v3; // eax

  sub_100236A0(this);
  if ( (a2 & 1) != 0 && this )
  {
    v3 = (Outpop::Utility::Sect_Block_Allocator *)Outpop::Utility::Sect_Block_Allocator::instance(this);
    Outpop::Utility::Sect_Block_Allocator::free(v3);
  }
  return this;
}
