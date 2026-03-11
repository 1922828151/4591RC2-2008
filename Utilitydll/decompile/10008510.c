/*
 * func-name: sub_10008510
 * func-address: 0x10008510
 * callers: 0x10008650
 * callees: 0x100166d0, 0x10018cf2
 */

void __thiscall sub_10008510(void *this)
{
  void *v2; // edi

  *(_DWORD *)this = &Outpop::Utility::Singleton_Holder_T<Outpop::Utility::Logger>::`vftable';
  v2 = (void *)*((_DWORD *)this + 1);
  if ( v2 )
  {
    Outpop::Utility::Logger::~Logger(*((Outpop::Utility::Logger **)this + 1));
    operator delete(v2);
  }
  *(_DWORD *)this = &Outpop::Utility::Singleton_Holder::`vftable';
}
