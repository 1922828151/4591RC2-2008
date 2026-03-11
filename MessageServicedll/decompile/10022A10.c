/*
 * func-name: sub_10022A10
 * func-address: 0x10022a10
 * callers: 0x10011930, 0x10021970, 0x10021b60, 0x10022480, 0x100228c0
 * callees: 0x100294f2
 */

void __usercall sub_10022A10(int a1@<ebx>)
{
  Outpop::Utility::Ref_Object **v1; // esi
  Outpop::Utility::Ref_Object **i; // edi

  v1 = *(Outpop::Utility::Ref_Object ***)(a1 + 4);
  if ( v1 )
  {
    for ( i = *(Outpop::Utility::Ref_Object ***)(a1 + 8); v1 != i; ++v1 )
    {
      if ( *v1 )
        Outpop::Utility::Ref_Object::release(*v1);
    }
    operator delete(*(void **)(a1 + 4));
  }
  *(_DWORD *)(a1 + 4) = 0;
  *(_DWORD *)(a1 + 8) = 0;
  *(_DWORD *)(a1 + 12) = 0;
}
