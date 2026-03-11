/*
 * func-name: sub_10006390
 * func-address: 0x10006390
 * callers: 0x100031a0
 * callees: none
 */

int __userpurge sub_10006390@<eax>(int a1@<esi>, int *a2)
{
  int v2; // eax
  bool v3; // zf

  if ( *(_DWORD *)a1 )
    Outpop::Utility::Ref_Object::release((Outpop::Utility::Ref_Object *)(*(_DWORD *)a1 + 76));
  v2 = *a2;
  v3 = *a2 == 0;
  *(_DWORD *)a1 = *a2;
  if ( !v3 )
    Outpop::Utility::Ref_Object::addref((Outpop::Utility::Ref_Object *)(v2 + 76));
  return a1;
}
