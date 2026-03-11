/*
 * func-name: sub_10010100
 * func-address: 0x10010100
 * callers: 0x1000fa50, 0x1000fc60
 * callees: 0x1000c050, 0x10029d92
 */

int __cdecl sub_10010100(Outpop::IONetwork::Acceptor_Config *a1, int a2)
{
  const struct Outpop::IONetwork::Acceptor_Config *v2; // ecx
  const struct Outpop::IONetwork::Acceptor_Config *v3; // ebx
  Outpop::IONetwork::Acceptor_Config *v5; // esi
  int result; // eax
  _DWORD v7[9]; // [esp+0h] [ebp-24h] BYREF

  v7[5] = v7;
  v3 = v2;
  v5 = a1;
  v7[4] = a1;
  v7[8] = 0;
  while ( a2 )
  {
    result = sub_1000C050(v5, v3);
    --a2;
    v5 = (Outpop::IONetwork::Acceptor_Config *)((char *)v5 + 116);
  }
  return result;
}
