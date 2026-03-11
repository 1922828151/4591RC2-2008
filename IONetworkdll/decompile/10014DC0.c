/*
 * func-name: sub_10014DC0
 * func-address: 0x10014dc0
 * callers: none
 * callees: 0x10014b00
 */

_DWORD *__thiscall sub_10014DC0(_DWORD *this, char a2)
{
  Outpop::Utility::Sect_Block_Allocator *v3; // eax

  sub_10014B00(this);
  if ( (a2 & 1) != 0 )
  {
    v3 = (Outpop::Utility::Sect_Block_Allocator *)Outpop::Utility::Sect_Block_Allocator::instance(this);
    Outpop::Utility::Sect_Block_Allocator::free(v3);
  }
  return this;
}
