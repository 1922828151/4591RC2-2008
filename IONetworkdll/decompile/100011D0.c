/*
 * func-name: ??0security_error@IONetwork@Outpop@@QAE@ABV012@@Z
 * func-address: 0x100011d0
 * callers: none
 * callees: 0x10001060
 */

Outpop::IONetwork::security_error *__thiscall Outpop::IONetwork::security_error::security_error(
        Outpop::IONetwork::security_error *this,
        const struct Outpop::IONetwork::security_error *a2)
{
  Outpop::IONetwork::io_protocol_error::io_protocol_error(this, a2);
  *(_DWORD *)this = &Outpop::IONetwork::security_error::`vftable';
  return this;
}
