/*
 * func-name: ??0acceptor_error@IONetwork@Outpop@@QAE@ABV012@@Z
 * func-address: 0x10001360
 * callers: none
 * callees: none
 */

Outpop::IONetwork::acceptor_error *__thiscall Outpop::IONetwork::acceptor_error::acceptor_error(
        Outpop::IONetwork::acceptor_error *this,
        const struct Outpop::IONetwork::acceptor_error *a2)
{
  Outpop::Utility::logic_error::logic_error(this, a2);
  *(_DWORD *)this = &Outpop::IONetwork::acceptor_error::`vftable';
  return this;
}
