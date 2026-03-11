/*
 * func-name: sub_100237C0
 * func-address: 0x100237c0
 * callers: none
 * callees: 0x100235a0
 */

Outpop::Utility::Timer_Handler *__thiscall sub_100237C0(Outpop::Utility::Timer_Handler *this, char a2)
{
  Outpop::Utility::Sect_Block_Allocator *v3; // eax

  sub_100235A0(this);
  if ( (a2 & 1) != 0 && this )
  {
    v3 = (Outpop::Utility::Sect_Block_Allocator *)Outpop::Utility::Sect_Block_Allocator::instance(this);
    Outpop::Utility::Sect_Block_Allocator::free(v3);
  }
  return this;
}
