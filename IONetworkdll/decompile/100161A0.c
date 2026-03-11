/*
 * func-name: sub_100161A0
 * func-address: 0x100161a0
 * callers: 0x10016000, 0x1003c7d0
 * callees: none
 */

int __stdcall sub_100161A0(int a1, int a2)
{
  Outpop::Utility::Ref_Object *v2; // ecx

  *(_WORD *)a1 = *(_WORD *)a2;
  v2 = *(Outpop::Utility::Ref_Object **)(a2 + 4);
  *(_DWORD *)(a1 + 4) = v2;
  if ( v2 )
    Outpop::Utility::Ref_Object::addref(v2);
  return a1;
}
