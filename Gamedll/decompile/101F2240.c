/*
 * func-name: sub_101F2240
 * func-address: 0x101f2240
 * callers: 0x1000bcd5
 * callees: none
 */

Outpop::Utility::Ref_Object **__thiscall sub_101F2240(
        Outpop::Utility::Ref_Object **this,
        Outpop::Utility::Ref_Object *a2)
{
  *this = a2;
  if ( a2 )
    Outpop::Utility::Ref_Object::addref(a2);
  return this;
}
