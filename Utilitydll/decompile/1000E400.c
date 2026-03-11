/*
 * func-name: ??0StreamException@Utility@Outpop@@QAE@ABV012@@Z
 * func-address: 0x1000e400
 * callers: none
 * callees: 0x1000a540
 */

Outpop::Utility::StreamException *__thiscall Outpop::Utility::StreamException::StreamException(
        Outpop::Utility::StreamException *this,
        const struct Outpop::Utility::StreamException *a2)
{
  Outpop::Utility::win32_error::win32_error(this, a2);
  *(_DWORD *)this = &Outpop::Utility::StreamException::`vftable';
  return this;
}
