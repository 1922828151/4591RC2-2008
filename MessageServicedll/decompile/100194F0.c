/*
 * func-name: sub_100194F0
 * func-address: 0x100194f0
 * callers: 0x1001b360, 0x10025c70
 * callees: none
 */

_DWORD *__stdcall sub_100194F0(_DWORD *a1, int a2, Outpop::Utility::Ref_Object **a3, Outpop::Utility::Ref_Object **a4)
{
  Outpop::Utility::Ref_Object *v4; // ecx
  Outpop::Utility::Ref_Object *v5; // ecx
  bool v6; // zf
  Outpop::Utility::Ref_Object *v7; // ecx
  Outpop::Utility::Ref_Object *v8; // ecx

  a1[1] = 0;
  a1[2] = 0;
  *a1 = a2;
  v4 = (Outpop::Utility::Ref_Object *)a1[1];
  if ( v4 )
    Outpop::Utility::Ref_Object::release(v4);
  v5 = *a3;
  v6 = *a3 == 0;
  a1[1] = *a3;
  if ( !v6 )
    Outpop::Utility::Ref_Object::addref(v5);
  v7 = (Outpop::Utility::Ref_Object *)a1[2];
  if ( v7 )
    Outpop::Utility::Ref_Object::release(v7);
  v8 = *a4;
  v6 = *a4 == 0;
  a1[2] = *a4;
  if ( !v6 )
    Outpop::Utility::Ref_Object::addref(v8);
  return a1;
}
