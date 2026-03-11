/*
 * func-name: sub_10025E30
 * func-address: 0x10025e30
 * callers: 0x10025cd0
 * callees: none
 */

int __userpurge sub_10025E30@<eax>(int a1@<edi>, int a2)
{
  Outpop::Utility::Ref_Object *v2; // ecx
  bool v3; // zf

  v2 = *(Outpop::Utility::Ref_Object **)a1;
  v3 = *(_DWORD *)a1 == 0;
  *(_DWORD *)a2 = *(_DWORD *)a1;
  if ( !v3 )
    Outpop::Utility::Ref_Object::addref(v2);
  *(_WORD *)(a2 + 4) = *(_WORD *)(a1 + 4);
  *(_DWORD *)(a2 + 8) = *(_DWORD *)(a1 + 8);
  *(_DWORD *)(a2 + 12) = *(_DWORD *)(a1 + 12);
  *(_WORD *)(a2 + 16) = *(_WORD *)(a1 + 16);
  return a2;
}
