/*
 * func-name: ?instance@Sect_Block_Allocator@Utility@Outpop@@SAPAV123@XZ
 * func-address: 0x1000e110
 * callers: 0x100038e0, 0x10004190, 0x10004430, 0x1000e3a0, 0x1000e3e0, 0x1000e4c0, 0x1000e520, 0x1000e580, 0x1000ea30, 0x1000eae0, 0x1000eb80, 0x1000ec50, 0x1000ee90, 0x1000ef70, 0x1000f2f0, 0x1000f3d0, 0x1000f830
 * callees: 0x10002bd0, 0x1000e1d0, 0x100178b0, 0x10018e10
 */

struct Outpop::Utility::Sect_Block_Allocator *__cdecl Outpop::Utility::Sect_Block_Allocator::instance()
{
  struct Outpop::Utility::Sect_Block_Allocator *result; // eax
  Outpop::Utility::Sect_Block_Allocator *v1; // eax
  struct Outpop::Utility::Sect_Block_Allocator *v2; // eax

  result = Outpop::Utility::Sect_Block_Allocator::Allocator_;
  if ( !Outpop::Utility::Sect_Block_Allocator::Allocator_ )
  {
    EnterCriticalSection(&Outpop::Utility::Singleton_Manager::g_singleton_lock_);
    if ( !Outpop::Utility::Sect_Block_Allocator::Allocator_ )
    {
      v1 = (Outpop::Utility::Sect_Block_Allocator *)operator new(0x23Cu);
      if ( v1 )
        v2 = Outpop::Utility::Sect_Block_Allocator::Sect_Block_Allocator(v1);
      else
        v2 = 0;
      Outpop::Utility::Sect_Block_Allocator::Allocator_ = v2;
      Outpop::Utility::Singleton_Manager::instance();
      sub_1000E1D0();
    }
    LeaveCriticalSection(&Outpop::Utility::Singleton_Manager::g_singleton_lock_);
    return Outpop::Utility::Sect_Block_Allocator::Allocator_;
  }
  return result;
}
