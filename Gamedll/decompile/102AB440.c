/*
 * func-name: sub_102AB440
 * func-address: 0x102ab440
 * callers: 0x100125b2
 * callees: 0x1000b406, 0x102c9d50
 */

void __thiscall sub_102AB440(Outpop::Utility::Singleton_Holder *this)
{
  int v2; // esi

  v2 = *((_DWORD *)this + 1);
  *(_DWORD *)this = &Outpop::Utility::Singleton_Holder_T<ClientManager>::`vftable';
  if ( v2 )
  {
    if ( *(_DWORD *)(v2 + 20) )
      operator delete(*(void **)(v2 + 20));
    *(_DWORD *)(v2 + 20) = 0;
    *(_DWORD *)(v2 + 24) = 0;
    *(_DWORD *)(v2 + 28) = 0;
    sub_1000B406();
    operator delete((void *)v2);
  }
  Outpop::Utility::Singleton_Holder::~Singleton_Holder(this);
}
