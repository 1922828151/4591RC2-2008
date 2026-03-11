/*
 * func-name: sub_100101A0
 * func-address: 0x100101a0
 * callers: 0x10006ff0, 0x10010080
 * callees: 0x1000c050, 0x10029d92
 */

Outpop::IONetwork::Acceptor_Config *__cdecl sub_100101A0(
        const struct Outpop::IONetwork::Acceptor_Config *a1,
        Outpop::IONetwork::Acceptor_Config *a2)
{
  const struct Outpop::IONetwork::Acceptor_Config *v2; // ecx
  Outpop::IONetwork::Acceptor_Config *v3; // edi
  const struct Outpop::IONetwork::Acceptor_Config *v4; // ebx
  _DWORD v7[9]; // [esp+0h] [ebp-24h] BYREF

  v7[5] = v7;
  v3 = a2;
  v4 = v2;
  v7[4] = a2;
  v7[8] = 0;
  while ( a1 != v4 )
  {
    sub_1000C050(v3, a1);
    v3 = (Outpop::IONetwork::Acceptor_Config *)((char *)v3 + 116);
    a1 = (const struct Outpop::IONetwork::Acceptor_Config *)((char *)a1 + 116);
  }
  return v3;
}
