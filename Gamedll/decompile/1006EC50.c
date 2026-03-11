/*
 * func-name: sub_1006EC50
 * func-address: 0x1006ec50
 * callers: 0x10001884
 * callees: none
 */

void __cdecl sub_1006EC50(_DWORD *a1, _DWORD *a2)
{
  Outpop::Utility::Ref_Object *v2; // ecx

  if ( a1 )
  {
    *a1 = *a2;
    v2 = (Outpop::Utility::Ref_Object *)a2[1];
    a1[1] = v2;
    if ( v2 )
      Outpop::Utility::Ref_Object::addref(v2);
  }
}
