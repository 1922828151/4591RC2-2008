/*
 * func-name: sub_1000FBF0
 * func-address: 0x1000fbf0
 * callers: 0x1000fb00
 * callees: 0x10010030
 */

_DWORD *__stdcall sub_1000FBF0(int a1, _DWORD *a2, int a3, int a4, int a5, int a6)
{
  int v6; // esi
  int v7; // ecx
  Outpop::IONetwork::Acceptor_Config *v8; // eax
  Outpop::IONetwork::Acceptor_Config *v9; // edi
  Outpop::IONetwork::Acceptor_Config *v10; // ebx
  Outpop::IONetwork::Acceptor_Config *i; // esi
  _DWORD *result; // eax

  v6 = a3;
  if ( !a3 || a3 != a5 )
    invalid_parameter_noinfo();
  v7 = a4;
  if ( a4 != a6 )
  {
    v8 = (Outpop::IONetwork::Acceptor_Config *)sub_10010030(a4);
    v9 = *(Outpop::IONetwork::Acceptor_Config **)(a1 + 8);
    v10 = v8;
    for ( i = v8; i != v9; i = (Outpop::IONetwork::Acceptor_Config *)((char *)i + 116) )
      Outpop::IONetwork::Acceptor_Config::~Acceptor_Config(i);
    v7 = a4;
    v6 = a3;
    *(_DWORD *)(a1 + 8) = v10;
  }
  result = a2;
  *a2 = v6;
  a2[1] = v7;
  return result;
}
