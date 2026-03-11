/*
 * func-name: sub_1000EF70
 * func-address: 0x1000ef70
 * callers: 0x1000f830
 * callees: 0x10003250, 0x1000e110
 */

char *__usercall sub_1000EF70@<eax>(char *a1@<esi>)
{
  Outpop::Utility::Sect_Block_Allocator *v1; // eax
  Outpop::Utility::Sect_Block_Allocator *v2; // eax
  char *v4; // [esp-4h] [ebp-4h]

  v4 = *(char **)a1;
  v1 = Outpop::Utility::Sect_Block_Allocator::instance();
  Outpop::Utility::Sect_Block_Allocator::free(v1, v4);
  v2 = Outpop::Utility::Sect_Block_Allocator::instance();
  Outpop::Utility::Sect_Block_Allocator::free(v2, a1);
  return a1;
}
