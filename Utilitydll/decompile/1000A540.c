/*
 * func-name: ??0win32_error@Utility@Outpop@@QAE@ABV012@@Z
 * func-address: 0x1000a540
 * callers: 0x1000a690, 0x1000e400
 * callees: 0x10009900
 */

Outpop::Utility::win32_error *__thiscall Outpop::Utility::win32_error::win32_error(
        Outpop::Utility::win32_error *this,
        const struct Outpop::Utility::win32_error *a2)
{
  Outpop::Utility::outpop_exception::outpop_exception(this, a2);
  *(_DWORD *)this = &Outpop::Utility::win32_error::`vftable';
  *((_DWORD *)this + 4) = *((_DWORD *)a2 + 4);
  return this;
}
