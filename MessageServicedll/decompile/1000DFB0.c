/*
 * func-name: sub_1000DFB0
 * func-address: 0x1000dfb0
 * callers: 0x1000df00
 * callees: 0x100294f2
 */

Outpop::Utility::Ref_Object **__stdcall sub_1000DFB0(Outpop::Utility::Ref_Object **a1)
{
  if ( *a1 )
    Outpop::Utility::Ref_Object::release(*a1);
  operator delete(a1);
  return a1;
}
