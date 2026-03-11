/*
 * func-name: sub_1002B5C0
 * func-address: 0x1002b5c0
 * callers: 0x10026cd0, 0x10027c50, 0x10028900, 0x1002f880, 0x100377c0, 0x10038060, 0x100440d0, 0x1004c0d0, 0x1004c7b0
 * callees: none
 */

Outpop::Utility::Ref_Object **__stdcall sub_1002B5C0(int a1, Outpop::Utility::Ref_Object **a2)
{
  Outpop::Utility::Ref_Object *v2; // ecx

  v2 = *(Outpop::Utility::Ref_Object **)(a1 + 88);
  *a2 = v2;
  if ( v2 )
    Outpop::Utility::Ref_Object::addref(v2);
  return a2;
}
