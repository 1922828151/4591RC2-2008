/*
 * func-name: ??1Shared_Data@Utility@Outpop@@UAE@XZ
 * func-address: 0x100175f0
 * callers: 0x100176f0
 * callees: 0x10014c80
 */

void __thiscall Outpop::Utility::Shared_Data::~Shared_Data(Outpop::Utility::Shared_Data *this)
{
  void *v2; // edi

  *(_DWORD *)this = &Outpop::Utility::Shared_Data::`vftable';
  v2 = (void *)*((_DWORD *)this + 2);
  if ( v2 )
  {
    Outpop::Utility::Default_Allocator::instance();
    free(v2);
  }
  *(_DWORD *)this = &Outpop::Utility::Ref_Object::`vftable';
}
