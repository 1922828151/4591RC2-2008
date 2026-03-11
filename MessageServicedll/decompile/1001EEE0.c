/*
 * func-name: sub_1001EEE0
 * func-address: 0x1001eee0
 * callers: none
 * callees: 0x1001ee10
 */

_DWORD *__thiscall sub_1001EEE0(_DWORD *this, char a2)
{
  Outpop::Utility::Sect_Block_Allocator *v3; // eax

  sub_1001EE10(this);
  if ( (a2 & 1) != 0 )
  {
    v3 = (Outpop::Utility::Sect_Block_Allocator *)Outpop::Utility::Sect_Block_Allocator::instance(this);
    Outpop::Utility::Sect_Block_Allocator::free(v3);
  }
  return this;
}
