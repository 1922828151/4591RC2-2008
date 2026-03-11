/*
 * func-name: sub_10018600
 * func-address: 0x10018600
 * callers: 0x10017730, 0x10026cd0, 0x10027c50, 0x10029880, 0x100355d0, 0x10035d70, 0x10036c20, 0x100372d0, 0x1003a130
 * callees: none
 */

void __stdcall sub_10018600(int a1)
{
  Outpop::Utility::Ref_Object *v1; // ecx

  v1 = *(Outpop::Utility::Ref_Object **)(a1 + 8);
  if ( v1 )
    Outpop::Utility::Ref_Object::release(v1);
}
