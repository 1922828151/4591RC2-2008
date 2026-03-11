/*
 * func-name: ?get_squence@Dgram_Protocol_Head_Process@IONetwork@Outpop@@QAE?AW4ESequenceType@Utility@3@E@Z
 * func-address: 0x100094c0
 * callers: none
 * callees: none
 */

int __stdcall Outpop::IONetwork::Dgram_Protocol_Head_Process::get_squence(char a1)
{
  if ( (a1 & 0xC) == 0xC )
    return 0;
  else
    return ((a1 & 0xC) != 8) + 1;
}
