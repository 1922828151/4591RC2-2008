/*
 * func-name: ??0Shared_Data@Utility@Outpop@@QAE@ABV012@@Z
 * func-address: 0x10017660
 * callers: none
 * callees: none
 */

Outpop::Utility::Shared_Data *__thiscall Outpop::Utility::Shared_Data::Shared_Data(
        Outpop::Utility::Shared_Data *this,
        const struct Outpop::Utility::Shared_Data *a2)
{
  Outpop::Utility::Shared_Data *result; // eax

  result = this;
  *(_DWORD *)this = &Outpop::Utility::Ref_Object::`vftable';
  *((_DWORD *)this + 1) = 0;
  *(_DWORD *)this = &Outpop::Utility::Shared_Data::`vftable';
  *((_DWORD *)this + 2) = *((_DWORD *)a2 + 2);
  *((_DWORD *)this + 3) = *((_DWORD *)a2 + 3);
  return result;
}
