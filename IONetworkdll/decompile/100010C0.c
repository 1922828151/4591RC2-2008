/*
 * func-name: ??0packet_error@IONetwork@Outpop@@QAE@ABV012@@Z
 * func-address: 0x100010c0
 * callers: none
 * callees: none
 */

Outpop::IONetwork::packet_error *__thiscall Outpop::IONetwork::packet_error::packet_error(
        Outpop::IONetwork::packet_error *this,
        const struct Outpop::IONetwork::packet_error *a2)
{
  Outpop::Utility::logic_error::logic_error(this, a2);
  *(_DWORD *)this = &Outpop::IONetwork::packet_error::`vftable';
  return this;
}
