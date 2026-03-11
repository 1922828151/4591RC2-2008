/*
 * func-name: ?handle_time_result@Dgram_Acceptor@IONetwork@Outpop@@QAEXPAVAsynch_Result@23@@Z
 * func-address: 0x10029290
 * callers: none
 * callees: 0x100292b0
 */

void __thiscall Outpop::IONetwork::Dgram_Acceptor::handle_time_result(
        Outpop::IONetwork::Dgram_Acceptor *this,
        struct Outpop::IONetwork::Asynch_Result *a2)
{
  if ( *((_DWORD *)a2 + 13) == *((_DWORD *)this + 32) )
    Outpop::IONetwork::Dgram_Acceptor::check_channel_map_time_out(this);
}
