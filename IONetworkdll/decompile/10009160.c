/*
 * func-name: ?set_len_flag@Stream_Protocol_Head_Process@IONetwork@Outpop@@QAEXHPAE@Z
 * func-address: 0x10009160
 * callers: none
 * callees: none
 */

unsigned __int8 __thiscall Outpop::IONetwork::Stream_Protocol_Head_Process::set_len_flag(
        Outpop::IONetwork::Stream_Protocol_Head_Process *this,
        int a2,
        unsigned __int8 *a3)
{
  char v3; // al
  unsigned __int8 result; // al

  *a3 &= 0x3Fu;
  v3 = *a3;
  if ( a2 >= 256 )
  {
    if ( a2 >= 0x10000 )
      result = v3 | 0xC0;
    else
      result = v3 | 0x80;
    *a3 = result;
  }
  else
  {
    result = v3 | 0x40;
    *a3 = result;
  }
  return result;
}
