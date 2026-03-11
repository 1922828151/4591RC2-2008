/*
 * func-name: ??0channel_error@IONetwork@Outpop@@QAE@ABV012@@Z
 * func-address: 0x100012e0
 * callers: none
 * callees: none
 */

Outpop::IONetwork::channel_error *__thiscall Outpop::IONetwork::channel_error::channel_error(
        Outpop::IONetwork::channel_error *this,
        const struct Outpop::IONetwork::channel_error *a2)
{
  Outpop::Utility::logic_error::logic_error(this, a2);
  *(_DWORD *)this = &Outpop::IONetwork::channel_error::`vftable';
  return this;
}
