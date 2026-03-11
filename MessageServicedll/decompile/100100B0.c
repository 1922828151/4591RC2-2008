/*
 * func-name: sub_100100B0
 * func-address: 0x100100b0
 * callers: 0x1000fc90
 * callees: none
 */

int __usercall sub_100100B0@<eax>(int a1@<eax>, int a2@<edi>, int a3)
{
  int v3; // esi
  int v4; // ebx
  int v5; // ebp

  v3 = a1;
  v4 = a3 - 116 * ((a1 - a2) / 116);
  if ( a2 != a1 )
  {
    v5 = a3 - a1;
    do
    {
      v3 -= 116;
      Outpop::IONetwork::Acceptor_Config::operator=(v3 + v5, v3);
    }
    while ( v3 != a2 );
  }
  return v4;
}
