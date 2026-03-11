/*
 * func-name: sub_10010030
 * func-address: 0x10010030
 * callers: 0x1000fbf0
 * callees: none
 */

int __usercall sub_10010030@<eax>(int a1@<eax>, int a2@<ebx>, int a3)
{
  int v3; // esi
  int v4; // edi
  int v5; // ebp

  v3 = a1;
  v4 = a3 + 116 * ((a2 - a1) / 116);
  if ( a1 != a2 )
  {
    v5 = a3 - a1;
    do
    {
      Outpop::IONetwork::Acceptor_Config::operator=(v3 + v5, v3);
      v3 += 116;
    }
    while ( v3 != a2 );
  }
  return v4;
}
