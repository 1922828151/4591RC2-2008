/*
 * func-name: sub_100038E0
 * func-address: 0x100038e0
 * callers: none
 * callees: 0x10003250, 0x100039e0, 0x1000e110
 */

char *__thiscall sub_100038E0(char *this, char a2)
{
  Outpop::Utility::Sect_Block_Allocator *v3; // eax

  sub_100039E0(this);
  if ( (a2 & 1) != 0 && this )
  {
    v3 = Outpop::Utility::Sect_Block_Allocator::instance();
    Outpop::Utility::Sect_Block_Allocator::free(v3, this);
  }
  return this;
}
