/*
 * func-name: sub_10025410
 * func-address: 0x10025410
 * callers: 0x10025100
 * callees: none
 */

int __userpurge sub_10025410@<eax>(int a1@<edi>, int a2)
{
  Outpop::Utility::Ref_Object *v2; // ecx

  *(_WORD *)a2 = *(_WORD *)a1;
  v2 = *(Outpop::Utility::Ref_Object **)(a1 + 4);
  *(_DWORD *)(a2 + 4) = v2;
  if ( v2 )
    Outpop::Utility::Ref_Object::addref(v2);
  *(_WORD *)(a2 + 8) = *(_WORD *)(a1 + 8);
  *(_BYTE *)(a2 + 10) = *(_BYTE *)(a1 + 10);
  *(_DWORD *)(a2 + 12) = *(_DWORD *)(a1 + 12);
  *(_DWORD *)(a2 + 16) = *(_DWORD *)(a1 + 16);
  return a2;
}
