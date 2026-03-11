/*
 * func-name: sub_102AF680
 * func-address: 0x102af680
 * callers: 0x10016932
 * callees: 0x102c9d50
 */

Outpop::Utility::Singleton_Holder *__thiscall sub_102AF680(Outpop::Utility::Singleton_Holder *this, char a2)
{
  void *v3; // eax

  v3 = (void *)*((_DWORD *)this + 1);
  *(_DWORD *)this = &Outpop::Utility::Singleton_Holder_T<GameClientConfig>::`vftable';
  if ( v3 )
    operator delete(v3);
  Outpop::Utility::Singleton_Holder::~Singleton_Holder(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
