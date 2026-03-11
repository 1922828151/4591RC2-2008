/*
 * func-name: sub_1000B210
 * func-address: 0x1000b210
 * callers: 0x10008b00, 0x10012ea0, 0x10013290, 0x10016010, 0x10016160
 * callees: none
 */

void __usercall sub_1000B210(int a1@<edi>, int a2)
{
  int i; // esi

  for ( i = a2; i != a1; i += 108 )
    Outpop::IONetwork::Connector_Config::~Connector_Config((Outpop::IONetwork::Connector_Config *)(i + 4));
}
