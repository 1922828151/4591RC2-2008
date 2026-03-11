/*
 * func-name: ?get_length@Dgram_Protocol_Head_Process@IONetwork@Outpop@@QAEGAAV?$Smart_Ptr@VBinary_Stream@Utility@Outpop@@@Utility@3@PAG@Z
 * func-address: 0x100097e0
 * callers: none
 * callees: none
 */

int __stdcall Outpop::IONetwork::Dgram_Protocol_Head_Process::get_length(
        Outpop::Utility::Binary_Stream **a1,
        __int16 *a2)
{
  __int16 v2; // si
  int result; // eax

  v2 = 3;
  if ( Outpop::Utility::Binary_Stream::get_reliable(*a1) )
    v2 = 5;
  if ( Outpop::Utility::Binary_Stream::sequence(*a1) != 2 )
    v2 += 2;
  result = *(unsigned __int16 *)(Outpop::Utility::Stream_Base::get_read_ptr(*a1) + 1);
  *a2 = v2;
  return result;
}
