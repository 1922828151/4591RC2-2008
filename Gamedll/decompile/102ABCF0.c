/*
 * func-name: sub_102ABCF0
 * func-address: 0x102abcf0
 * callers: 0x100036f7
 * callees: none
 */

void __thiscall sub_102ABCF0(Outpop::Utility::Singleton_Holder *this)
{
  void (__thiscall ***v2)(_DWORD, int); // ecx

  *(_DWORD *)this = &Outpop::Utility::Singleton_Holder_T<Ping_Manager>::`vftable';
  v2 = (void (__thiscall ***)(_DWORD, int))*((_DWORD *)this + 1);
  if ( v2 )
    (**v2)(v2, 1);
  Outpop::Utility::Singleton_Holder::~Singleton_Holder(this);
}
