/*
 * func-name: sub_1001E960
 * func-address: 0x1001e960
 * callers: none
 * callees: 0x1001e8d0
 */

Outpop::Utility::Thread_Message *__thiscall sub_1001E960(Outpop::Utility::Thread_Message *this, char a2)
{
  Outpop::Utility::Sect_Block_Allocator *v3; // eax

  sub_1001E8D0(this);
  if ( (a2 & 1) != 0 )
  {
    v3 = (Outpop::Utility::Sect_Block_Allocator *)Outpop::Utility::Sect_Block_Allocator::instance(this);
    Outpop::Utility::Sect_Block_Allocator::free(v3);
  }
  return this;
}
