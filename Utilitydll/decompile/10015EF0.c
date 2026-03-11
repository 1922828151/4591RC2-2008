/*
 * func-name: ??0logic_error@Utility@Outpop@@QAE@ABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PAVoutpop_exception@12@@Z
 * func-address: 0x10015ef0
 * callers: none
 * callees: 0x10014e90
 */

Outpop::Utility::outpop_exception *__thiscall Outpop::Utility::logic_error::logic_error(
        Outpop::Utility::outpop_exception *this,
        int a2,
        struct Outpop::Utility::outpop_exception *a3)
{
  const char *v4; // eax

  if ( *(_DWORD *)(a2 + 24) < 0x10u )
    v4 = (const char *)(a2 + 4);
  else
    v4 = *(const char **)(a2 + 4);
  Outpop::Utility::outpop_exception::outpop_exception(this, v4, a3);
  *(_DWORD *)this = &Outpop::Utility::logic_error::`vftable';
  return this;
}
