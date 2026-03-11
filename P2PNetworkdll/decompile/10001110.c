/*
 * func-name: ?set_report_address_try_time@P2P_Context@P2P@Outpop@@QAEXABVTime_Value@Utility@3@@Z
 * func-address: 0x10001110
 * callers: none
 * callees: none
 */

void __thiscall Outpop::P2P::P2P_Context::set_report_address_try_time(
        Outpop::P2P::P2P_Context *this,
        const struct Outpop::Utility::Time_Value *a2)
{
  *((_DWORD *)this + 4) = *(_DWORD *)a2;
  *((_DWORD *)this + 5) = *((_DWORD *)a2 + 1);
}
