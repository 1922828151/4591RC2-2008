/*
 * func-name: sub_102B41B0
 * func-address: 0x102b41b0
 * callers: 0x10005b32
 * callees: 0x1000b3cf, 0x102c9d50
 */

void __thiscall sub_102B41B0(Outpop::Utility::Singleton_Holder *this)
{
  void *v2; // edi
  int v3; // [esp+0h] [ebp-1Ch]
  int v4; // [esp+4h] [ebp-18h]

  *(_DWORD *)this = &Outpop::Utility::Singleton_Holder_T<SynchLayer>::`vftable';
  v2 = (void *)*((_DWORD *)this + 1);
  if ( v2 )
  {
    sub_1000B3CF(v3, v4);
    operator delete(v2);
  }
  Outpop::Utility::Singleton_Holder::~Singleton_Holder(this);
}
