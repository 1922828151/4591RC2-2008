/*
 * func-name: sub_1000EBA0
 * func-address: 0x1000eba0
 * callers: 0x1000e5c0
 * callees: none
 */

void __cdecl sub_1000EBA0(_DWORD *a1)
{
  _DWORD *v1; // ecx
  Outpop::Utility::Ref_Object *v2; // ecx

  if ( a1 )
  {
    *a1 = *v1;
    v2 = (Outpop::Utility::Ref_Object *)v1[1];
    a1[1] = v2;
    if ( v2 )
      Outpop::Utility::Ref_Object::addref(v2);
  }
}
