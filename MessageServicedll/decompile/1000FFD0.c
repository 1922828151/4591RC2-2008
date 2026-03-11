/*
 * func-name: sub_1000FFD0
 * func-address: 0x1000ffd0
 * callers: 0x1000b630, 0x1000e810
 * callees: none
 */

int __stdcall sub_1000FFD0(int a1, int a2)
{
  Outpop::Utility::Ref_Object *v2; // ecx

  *(_WORD *)a1 = *(_WORD *)a2;
  v2 = *(Outpop::Utility::Ref_Object **)(a2 + 4);
  *(_DWORD *)(a1 + 4) = v2;
  if ( v2 )
    Outpop::Utility::Ref_Object::addref(v2);
  return a1;
}
