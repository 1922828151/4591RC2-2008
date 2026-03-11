/*
 * func-name: sub_1001EDA0
 * func-address: 0x1001eda0
 * callers: 0x1001dcb0
 * callees: none
 */

_DWORD *__stdcall sub_1001EDA0(_DWORD *a1, int a2, Outpop::Utility::Ref_Object *a3)
{
  *a1 = a2;
  a1[3] = a3;
  if ( a3 )
    Outpop::Utility::Ref_Object::addref(a3);
  a1[4] = 0;
  if ( a3 )
    Outpop::Utility::Ref_Object::release(a3);
  return a1;
}
