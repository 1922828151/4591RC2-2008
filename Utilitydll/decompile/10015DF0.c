/*
 * func-name: ??0win32_error@Utility@Outpop@@QAE@ABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@HPAVoutpop_exception@12@@Z
 * func-address: 0x10015df0
 * callers: 0x1000ebe0, 0x10015e80
 * callees: 0x10014e90
 */

Outpop::Utility::outpop_exception *__thiscall Outpop::Utility::win32_error::win32_error(
        Outpop::Utility::outpop_exception *this,
        int a2,
        int a3,
        struct Outpop::Utility::outpop_exception *a4)
{
  const char *v5; // eax

  if ( *(_DWORD *)(a2 + 24) < 0x10u )
    v5 = (const char *)(a2 + 4);
  else
    v5 = *(const char **)(a2 + 4);
  Outpop::Utility::outpop_exception::outpop_exception(this, v5, a4);
  *(_DWORD *)this = &Outpop::Utility::win32_error::`vftable';
  *((_DWORD *)this + 4) = a3;
  return this;
}
