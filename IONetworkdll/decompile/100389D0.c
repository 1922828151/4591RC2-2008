/*
 * func-name: ?handle_time_result@Dgram_Connector@IONetwork@Outpop@@QAEXPAVAsynch_Result@23@@Z
 * func-address: 0x100389d0
 * callers: none
 * callees: 0x100390a0
 */

void __thiscall Outpop::IONetwork::Dgram_Connector::handle_time_result(
        Outpop::IONetwork::Dgram_Connector *this,
        struct Outpop::IONetwork::Asynch_Result *a2)
{
  if ( *((_DWORD *)a2 + 13) == *((_DWORD *)this + 94) )
    Outpop::IONetwork::Dgram_Connector::check_bliued_login_time(this);
}
