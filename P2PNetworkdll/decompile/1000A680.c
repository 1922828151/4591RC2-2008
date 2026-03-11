/*
 * func-name: sub_1000A680
 * func-address: 0x1000a680
 * callers: 0x1000d5a0
 * callees: none
 */

int __userpurge sub_1000A680@<eax>(
        _DWORD *a1@<edi>,
        int a2,
        int a3,
        Outpop::Utility::Ref_Object **a4,
        Outpop::Utility::Ref_Object **a5)
{
  Outpop::Utility::Ref_Object *v5; // ecx
  bool v6; // zf
  Outpop::Utility::Ref_Object *v7; // ecx

  Outpop::Utility::Ref_Object::Ref_Object((Outpop::Utility::Ref_Object *)a2);
  *(_DWORD *)a2 = &Outpop::P2P::STimerItem::`vftable';
  v5 = *a4;
  v6 = *a4 == 0;
  *(_DWORD *)(a2 + 8) = *a4;
  if ( !v6 )
    Outpop::Utility::Ref_Object::addref(v5);
  *(_DWORD *)(a2 + 12) = *a1;
  *(_DWORD *)(a2 + 16) = a1[1];
  v7 = *a5;
  v6 = *a5 == 0;
  *(_DWORD *)(a2 + 20) = *a5;
  if ( !v6 )
    Outpop::Utility::Ref_Object::addref(v7);
  *(_DWORD *)(a2 + 28) = a3;
  *(_BYTE *)(a2 + 24) = 1;
  return a2;
}
