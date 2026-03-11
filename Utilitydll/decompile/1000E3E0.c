/*
 * func-name: ??3Stream_Base@Utility@Outpop@@SAXPAX@Z
 * func-address: 0x1000e3e0
 * callers: 0x1000ec50, 0x1000f2f0, 0x1000f3d0, 0x1000f490, 0x1000f830
 * callees: 0x10003250, 0x1000e110
 */

void __cdecl Outpop::Utility::Stream_Base::operator delete(char *a1)
{
  Outpop::Utility::Sect_Block_Allocator *v1; // eax

  if ( a1 )
  {
    v1 = Outpop::Utility::Sect_Block_Allocator::instance();
    Outpop::Utility::Sect_Block_Allocator::free(v1, a1);
  }
}
