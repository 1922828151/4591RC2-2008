/*
 * func-name: ??0winsock_error@Utility@Outpop@@QAE@ABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@HPAXPAVoutpop_exception@12@@Z
 * func-address: 0x10015e80
 * callers: none
 * callees: 0x10015df0
 */

Outpop::Utility::outpop_exception *__thiscall Outpop::Utility::winsock_error::winsock_error(
        Outpop::Utility::outpop_exception *this,
        int a2,
        int a3,
        int a4,
        struct Outpop::Utility::outpop_exception *a5)
{
  Outpop::Utility::win32_error::win32_error(this, a2, a3, a5);
  *(_DWORD *)this = &Outpop::Utility::winsock_error::`vftable';
  *((_DWORD *)this + 5) = a4;
  return this;
}
