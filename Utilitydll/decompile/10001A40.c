/*
 * func-name: ??0Ref_Object@Utility@Outpop@@QAE@ABV012@@Z
 * func-address: 0x10001a40
 * callers: none
 * callees: none
 */

Outpop::Utility::Ref_Object *__thiscall Outpop::Utility::Ref_Object::Ref_Object(
        Outpop::Utility::Ref_Object *this,
        const struct Outpop::Utility::Ref_Object *a2)
{
  Outpop::Utility::Ref_Object *result; // eax

  result = this;
  *(_DWORD *)this = &Outpop::Utility::Ref_Object::`vftable';
  *((_DWORD *)this + 1) = 0;
  return result;
}
