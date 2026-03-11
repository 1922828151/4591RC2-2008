/*
 * func-name: ??0StreamException@Utility@Outpop@@QAE@ABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@HPAVoutpop_exception@12@@Z
 * func-address: 0x1000ebe0
 * callers: 0x1000ea30, 0x1000ec50, 0x1000ef90, 0x1000f490, 0x1000f830, 0x1000fa00, 0x1000fb00
 * callees: 0x10015df0
 */

Outpop::Utility::outpop_exception *__thiscall Outpop::Utility::StreamException::StreamException(
        Outpop::Utility::outpop_exception *this,
        int a2,
        int a3,
        struct Outpop::Utility::outpop_exception *a4)
{
  Outpop::Utility::win32_error::win32_error(this, a2, a3, a4);
  *(_DWORD *)this = &Outpop::Utility::StreamException::`vftable';
  return this;
}
