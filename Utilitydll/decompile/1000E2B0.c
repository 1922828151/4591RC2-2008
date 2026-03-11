/*
 * func-name: sub_1000E2B0
 * func-address: 0x1000e2b0
 * callers: 0x1000e320
 * callees: 0x10002d20, 0x10018cf2
 */

void __thiscall sub_1000E2B0(void *this)
{
  void *v2; // edi

  *(_DWORD *)this = &Outpop::Utility::Singleton_Holder_T<Outpop::Utility::Sect_Block_Allocator>::`vftable';
  v2 = (void *)*((_DWORD *)this + 1);
  if ( v2 )
  {
    Outpop::Utility::Sect_Block_Allocator::~Sect_Block_Allocator(*((Outpop::Utility::Sect_Block_Allocator **)this + 1));
    operator delete(v2);
  }
  *(_DWORD *)this = &Outpop::Utility::Singleton_Holder::`vftable';
}
