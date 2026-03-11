/*
 * func-name: ?set_syspacket@Stream_Protocol_Head_Process@IONetwork@Outpop@@QAEX_NPAE@Z
 * func-address: 0x10009440
 * callers: none
 * callees: none
 */

unsigned __int8 *__thiscall Outpop::IONetwork::Stream_Protocol_Head_Process::set_syspacket(
        Outpop::IONetwork::Stream_Protocol_Head_Process *this,
        bool a2,
        unsigned __int8 *a3)
{
  unsigned __int8 *result; // eax

  result = a3;
  if ( a2 )
    *a3 |= 1u;
  else
    *a3 &= ~1u;
  return result;
}
