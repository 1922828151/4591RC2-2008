/*
 * func-name: ??0security_error@IONetwork@Outpop@@QAE@ABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PAVoutpop_exception@Utility@2@@Z
 * func-address: 0x10001620
 * callers: none
 * callees: 0x100014d0
 */

_DWORD *__thiscall Outpop::IONetwork::security_error::security_error(_DWORD *this, int a2, int a3)
{
  Outpop::IONetwork::io_protocol_error::io_protocol_error(this, a2, a3);
  *this = &Outpop::IONetwork::security_error::`vftable';
  return this;
}
