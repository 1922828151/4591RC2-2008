/*
 * func-name: ?set_request_remote_connect_time@P2P_Context@P2P@Outpop@@QAEXABVTime_Value@Utility@3@@Z
 * func-address: 0x10001140
 * callers: none
 * callees: none
 */

void __thiscall Outpop::P2P::P2P_Context::set_request_remote_connect_time(
        Outpop::P2P::P2P_Context *this,
        const struct Outpop::Utility::Time_Value *a2)
{
  *((_DWORD *)this + 6) = *(_DWORD *)a2;
  *((_DWORD *)this + 7) = *((_DWORD *)a2 + 1);
}
