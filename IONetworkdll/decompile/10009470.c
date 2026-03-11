/*
 * func-name: ?set_key@Stream_Protocol_Head_Process@IONetwork@Outpop@@QAEX_NPAE@Z
 * func-address: 0x10009470
 * callers: none
 * callees: none
 */

unsigned __int8 *__thiscall Outpop::IONetwork::Stream_Protocol_Head_Process::set_key(
        Outpop::IONetwork::Stream_Protocol_Head_Process *this,
        bool a2,
        unsigned __int8 *a3)
{
  unsigned __int8 *result; // eax

  result = a3;
  if ( a2 )
    *a3 |= 2u;
  else
    *a3 &= ~2u;
  return result;
}
