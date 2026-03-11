/*
 * func-name: ?set_login_packet_type@Dgram_Protocol_Head_Process@IONetwork@Outpop@@QAEX_NPAE@Z
 * func-address: 0x10009550
 * callers: none
 * callees: none
 */

unsigned __int8 *__thiscall Outpop::IONetwork::Dgram_Protocol_Head_Process::set_login_packet_type(
        Outpop::IONetwork::Dgram_Protocol_Head_Process *this,
        bool a2,
        unsigned __int8 *a3)
{
  unsigned __int8 *result; // eax

  result = a3;
  if ( a2 )
    *a3 |= 0x80u;
  else
    *a3 &= ~0x80u;
  return result;
}
