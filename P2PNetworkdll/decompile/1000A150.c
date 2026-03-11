/*
 * func-name: sub_1000A150
 * func-address: 0x1000a150
 * callers: 0x10009940
 * callees: 0x1000a270
 */

void __usercall sub_1000A150(
        int a1@<edx>,
        Outpop::Utility::Ref_Object **a2@<ecx>,
        Outpop::Utility::Ref_Object **a3@<ebx>,
        Outpop::Utility::Ref_Object *a4,
        int a5)
{
  Outpop::Utility::Ref_Object *v7; // ecx
  Outpop::Utility::Ref_Object *v8; // ecx
  bool v9; // zf

  v7 = *a2;
  if ( v7 )
    Outpop::Utility::Ref_Object::release(v7);
  v8 = *a3;
  v9 = *a3 == 0;
  *a2 = *a3;
  if ( !v9 )
    Outpop::Utility::Ref_Object::addref(v8);
  if ( a4 )
    Outpop::Utility::Ref_Object::addref(a4);
  sub_1000A270((a1 - (int)a3) >> 2, a4, a5);
  if ( a4 )
    Outpop::Utility::Ref_Object::release(a4);
}
