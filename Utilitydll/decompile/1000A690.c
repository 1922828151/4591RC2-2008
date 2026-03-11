/*
 * func-name: ??0winsock_error@Utility@Outpop@@QAE@ABV012@@Z
 * func-address: 0x1000a690
 * callers: none
 * callees: 0x1000a540
 */

Outpop::Utility::winsock_error *__thiscall Outpop::Utility::winsock_error::winsock_error(
        Outpop::Utility::winsock_error *this,
        const struct Outpop::Utility::winsock_error *a2)
{
  Outpop::Utility::win32_error::win32_error(this, a2);
  *(_DWORD *)this = &Outpop::Utility::winsock_error::`vftable';
  *((_DWORD *)this + 5) = *((_DWORD *)a2 + 5);
  return this;
}
