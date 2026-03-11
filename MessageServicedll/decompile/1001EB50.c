/*
 * func-name: sub_1001EB50
 * func-address: 0x1001eb50
 * callers: none
 * callees: 0x1001ea70
 */

_DWORD *__thiscall sub_1001EB50(_DWORD *this, char a2)
{
  Outpop::Utility::Sect_Block_Allocator *v3; // eax

  sub_1001EA70(this);
  if ( (a2 & 1) != 0 )
  {
    v3 = (Outpop::Utility::Sect_Block_Allocator *)Outpop::Utility::Sect_Block_Allocator::instance(this);
    Outpop::Utility::Sect_Block_Allocator::free(v3);
  }
  return this;
}
