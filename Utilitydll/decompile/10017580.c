/*
 * func-name: ??0Shared_Data@Utility@Outpop@@QAE@PADI@Z
 * func-address: 0x10017580
 * callers: none
 * callees: none
 */

Outpop::Utility::Shared_Data *__thiscall Outpop::Utility::Shared_Data::Shared_Data(
        Outpop::Utility::Shared_Data *this,
        char *a2,
        unsigned int a3)
{
  Outpop::Utility::Shared_Data *result; // eax

  result = this;
  *(_DWORD *)this = &Outpop::Utility::Ref_Object::`vftable';
  *((_DWORD *)this + 1) = 0;
  *(_DWORD *)this = &Outpop::Utility::Shared_Data::`vftable';
  *((_DWORD *)this + 2) = a2;
  *((_DWORD *)this + 3) = a3;
  return result;
}
