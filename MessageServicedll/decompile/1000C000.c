/*
 * func-name: sub_1000C000
 * func-address: 0x1000c000
 * callers: 0x10015230, 0x10016160
 * callees: none
 */

void __stdcall sub_1000C000(int a1)
{
  Outpop::IONetwork::Connector_Config::~Connector_Config((Outpop::IONetwork::Connector_Config *)(a1 + 4));
}
