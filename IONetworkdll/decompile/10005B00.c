/*
 * func-name: sub_10005B00
 * func-address: 0x10005b00
 * callers: 0x1001c940, 0x100216e0, 0x1002ad90, 0x1002f880, 0x1003a5b0, 0x1003ffb0
 * callees: none
 */

Outpop::Utility::Ref_Object **__userpurge sub_10005B00@<eax>(
        Outpop::Utility::Ref_Object **a1@<esi>,
        Outpop::Utility::Ref_Object **a2)
{
  Outpop::Utility::Ref_Object *v2; // ecx
  bool v3; // zf

  if ( *a1 )
    Outpop::Utility::Ref_Object::release(*a1);
  v2 = *a2;
  v3 = *a2 == 0;
  *a1 = *a2;
  if ( !v3 )
    Outpop::Utility::Ref_Object::addref(v2);
  return a1;
}
