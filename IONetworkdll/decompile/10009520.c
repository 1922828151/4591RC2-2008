/*
 * func-name: ?set_reliable@Dgram_Protocol_Head_Process@IONetwork@Outpop@@QAEX_NPAE@Z
 * func-address: 0x10009520
 * callers: none
 * callees: none
 */

unsigned __int8 *__thiscall Outpop::IONetwork::Dgram_Protocol_Head_Process::set_reliable(
        Outpop::IONetwork::Dgram_Protocol_Head_Process *this,
        bool a2,
        unsigned __int8 *a3)
{
  unsigned __int8 *result; // eax

  result = a3;
  if ( a2 )
    *a3 |= 0x40u;
  else
    *a3 &= ~0x40u;
  return result;
}
