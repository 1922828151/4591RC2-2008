/*
 * func-name: sub_10009940
 * func-address: 0x10009940
 * callers: 0x100073a0
 * callees: 0x1000a150
 */

signed int __cdecl sub_10009940(int a1, int a2, int a3, int a4, int a5)
{
  signed int result; // eax
  Outpop::Utility::Ref_Object *v6; // [esp-8h] [ebp-10h]

  if ( !a4 || a4 != a2 )
    invalid_parameter_noinfo();
  result = (a5 - a3) & 0xFFFFFFFC;
  if ( result > 4 )
  {
    v6 = *(Outpop::Utility::Ref_Object **)(a5 - 4);
    if ( v6 )
      Outpop::Utility::Ref_Object::addref(v6);
    return sub_1000A150(v6, a1);
  }
  return result;
}
