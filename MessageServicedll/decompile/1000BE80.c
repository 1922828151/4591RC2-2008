/*
 * func-name: sub_1000BE80
 * func-address: 0x1000be80
 * callers: 0x1000bde0, 0x10016550
 * callees: none
 */

int __stdcall sub_1000BE80(int a1)
{
  Outpop::IONetwork::Connector_Config::~Connector_Config((Outpop::IONetwork::Connector_Config *)(a1 + 4));
  return a1;
}
