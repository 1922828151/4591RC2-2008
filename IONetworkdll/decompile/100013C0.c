/*
 * func-name: ??0connector_error@IONetwork@Outpop@@QAE@ABV012@@Z
 * func-address: 0x100013c0
 * callers: none
 * callees: none
 */

Outpop::IONetwork::connector_error *__thiscall Outpop::IONetwork::connector_error::connector_error(
        Outpop::IONetwork::connector_error *this,
        const struct Outpop::IONetwork::connector_error *a2)
{
  Outpop::Utility::logic_error::logic_error(this, a2);
  *(_DWORD *)this = &Outpop::IONetwork::connector_error::`vftable';
  return this;
}
