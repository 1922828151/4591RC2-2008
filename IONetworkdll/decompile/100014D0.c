/*
 * func-name: ??0io_protocol_error@IONetwork@Outpop@@QAE@ABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PAVoutpop_exception@Utility@2@@Z
 * func-address: 0x100014d0
 * callers: 0x100015b0, 0x10001620
 * callees: none
 */

_DWORD *__thiscall Outpop::IONetwork::io_protocol_error::io_protocol_error(_DWORD *this, int a2, int a3)
{
  Outpop::Utility::logic_error::logic_error(this, a2, a3);
  *this = &Outpop::IONetwork::io_protocol_error::`vftable';
  return this;
}
