/*
 * func-name: ?set_id@Connector@IONetwork@Outpop@@QAEXI@Z
 * func-address: 0x10008be0
 * callers: none
 * callees: none
 */

unsigned int __thiscall Outpop::IONetwork::Connector::set_id(Outpop::IONetwork::Connector *this, unsigned int a2)
{
  unsigned int result; // eax

  result = a2;
  *((_DWORD *)this + 27) = a2;
  return result;
}
