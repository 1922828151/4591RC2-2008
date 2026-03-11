/*
 * func-name: ??0compress_error@IONetwork@Outpop@@QAE@ABV012@@Z
 * func-address: 0x10001120
 * callers: none
 * callees: 0x10001060
 */

Outpop::IONetwork::compress_error *__thiscall Outpop::IONetwork::compress_error::compress_error(
        Outpop::IONetwork::compress_error *this,
        const struct Outpop::IONetwork::compress_error *a2)
{
  Outpop::IONetwork::io_protocol_error::io_protocol_error(this, a2);
  *(_DWORD *)this = &Outpop::IONetwork::compress_error::`vftable';
  return this;
}
