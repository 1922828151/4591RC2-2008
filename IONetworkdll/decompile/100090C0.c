/*
 * func-name: ?get_squence@Stream_Protocol_Head_Process@IONetwork@Outpop@@QAE?AW4ESequenceType@Utility@3@E@Z
 * func-address: 0x100090c0
 * callers: none
 * callees: none
 */

int __stdcall Outpop::IONetwork::Stream_Protocol_Head_Process::get_squence(char a1)
{
  char v1; // al

  v1 = a1 & 0xC;
  if ( (a1 & 0xC) == 0xC )
    return 0;
  if ( v1 == 8 )
    return 1;
  return v1 != 4 ? 0 : 2;
}
