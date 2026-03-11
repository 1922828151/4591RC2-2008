/*
 * func-name: sub_10024D90
 * func-address: 0x10024d90
 * callers: 0x10024f00, 0x10025a40, 0x10034930, 0x10046710, 0x10048b90
 * callees: none
 */

void __stdcall sub_10024D90(Outpop::Utility::Ref_Object **a1)
{
  Outpop::Utility::Time_Value::~Time_Value((Outpop::Utility::Time_Value *)(a1 + 2));
  if ( *a1 )
    Outpop::Utility::Ref_Object::release(*a1);
}
