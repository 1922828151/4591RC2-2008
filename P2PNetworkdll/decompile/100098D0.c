/*
 * func-name: sub_100098D0
 * func-address: 0x100098d0
 * callers: 0x10008200, 0x1000d5a0
 * callees: 0x1000a080
 */

void __cdecl sub_100098D0(int a1, int a2, int a3, int a4, unsigned int a5)
{
  Outpop::Utility::Ref_Object *v5; // eax
  Outpop::Utility::Ref_Object *v6; // [esp-8h] [ebp-18h]

  if ( !a2 || a2 != a4 )
    invalid_parameter_noinfo();
  if ( a3 != a5 )
  {
    if ( !a4 )
      invalid_parameter_noinfo();
    if ( a5 <= *(_DWORD *)(a4 + 4) )
      invalid_parameter_noinfo();
    if ( (int)(a5 - 4 - a3) >> 2 > 0 )
    {
      v5 = *(Outpop::Utility::Ref_Object **)(a5 - 4);
      v6 = v5;
      if ( v5 )
        Outpop::Utility::Ref_Object::addref(v5);
      sub_1000A080(v6, a1);
    }
  }
}
