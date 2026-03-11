/*
 * func-name: ??0io_protocol_error@IONetwork@Outpop@@QAE@ABV012@@Z
 * func-address: 0x10001060
 * callers: 0x10001120, 0x100011d0
 * callees: none
 */

Outpop::IONetwork::io_protocol_error *__thiscall Outpop::IONetwork::io_protocol_error::io_protocol_error(
        Outpop::IONetwork::io_protocol_error *this,
        const struct Outpop::IONetwork::io_protocol_error *a2)
{
  Outpop::Utility::logic_error::logic_error(this, a2);
  *(_DWORD *)this = &Outpop::IONetwork::io_protocol_error::`vftable';
  return this;
}
