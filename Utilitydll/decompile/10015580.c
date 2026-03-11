/*
 * func-name: ??0integer_exception@Utility@Outpop@@QAE@PAU_EXCEPTION_RECORD@@PBDPAVoutpop_exception@12@@Z
 * func-address: 0x10015580
 * callers: 0x10015d10, 0x10015d80
 * callees: 0x10014f60
 */

Outpop::Utility::integer_exception *__thiscall Outpop::Utility::integer_exception::integer_exception(
        Outpop::Utility::integer_exception *this,
        struct _EXCEPTION_RECORD *a2,
        char *a3,
        struct Outpop::Utility::outpop_exception *a4)
{
  Outpop::Utility::structure_exception::structure_exception(this, a2, a3, a4);
  *(_DWORD *)this = &Outpop::Utility::integer_exception::`vftable';
  return this;
}
