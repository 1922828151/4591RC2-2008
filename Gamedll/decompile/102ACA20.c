/*
 * func-name: sub_102ACA20
 * func-address: 0x102aca20
 * callers: 0x1000169a
 * callees: none
 */

void __stdcall sub_102ACA20(int a1)
{
  Outpop::Utility::Ref_Object *v1; // [esp+4h] [ebp-10h] BYREF
  int v2; // [esp+10h] [ebp-4h]

  v1 = 0;
  v2 = 0;
  Outpop::Message::Message_Facade::cache_start_channel(a1, &v1);
  v2 = -1;
  if ( v1 )
    Outpop::Utility::Ref_Object::release(v1);
}
