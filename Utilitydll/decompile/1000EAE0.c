/*
 * func-name: ??1OS_Buffer@Utility@Outpop@@QAE@XZ
 * func-address: 0x1000eae0
 * callers: none
 * callees: 0x10003250, 0x1000e110
 */

void __thiscall Outpop::Utility::OS_Buffer::~OS_Buffer(char **this)
{
  Outpop::Utility::Sect_Block_Allocator *v1; // eax
  char *v2; // [esp-4h] [ebp-4h]

  v2 = *this;
  v1 = Outpop::Utility::Sect_Block_Allocator::instance();
  Outpop::Utility::Sect_Block_Allocator::free(v1, v2);
}
