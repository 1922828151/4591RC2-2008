/*
 * func-name: sub_10008810
 * func-address: 0x10008810
 * callers: 0x10006ff0, 0x100070f0, 0x1000e150, 0x1000e2e0
 * callees: 0x100294f2
 */

void __usercall sub_10008810(int a1@<ebx>)
{
  Outpop::IONetwork::Acceptor_Config *v1; // esi
  Outpop::IONetwork::Acceptor_Config *i; // edi

  v1 = *(Outpop::IONetwork::Acceptor_Config **)(a1 + 4);
  if ( v1 )
  {
    for ( i = *(Outpop::IONetwork::Acceptor_Config **)(a1 + 8);
          v1 != i;
          v1 = (Outpop::IONetwork::Acceptor_Config *)((char *)v1 + 116) )
    {
      Outpop::IONetwork::Acceptor_Config::~Acceptor_Config(v1);
    }
    operator delete(*(void **)(a1 + 4));
  }
  *(_DWORD *)(a1 + 4) = 0;
  *(_DWORD *)(a1 + 8) = 0;
  *(_DWORD *)(a1 + 12) = 0;
}
