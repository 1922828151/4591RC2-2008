/*
 * func-name: sub_10075FE0
 * func-address: 0x10075fe0
 * callers: 0x10017e22
 * callees: 0x102c9d50
 */

_DWORD *__thiscall sub_10075FE0(int this, _DWORD *a2, int a3, _DWORD **a4)
{
  _DWORD *v5; // ebp
  Outpop::Utility::Ref_Object *v6; // ecx
  _DWORD *result; // eax

  if ( !a3 )
    _invalid_parameter_noinfo();
  if ( a4 == *(_DWORD ***)(a3 + 4) )
    _invalid_parameter_noinfo();
  v5 = *a4;
  if ( a4 != *(_DWORD ***)(this + 4) )
  {
    *a4[1] = v5;
    (*a4)[1] = a4[1];
    v6 = (Outpop::Utility::Ref_Object *)a4[3];
    if ( v6 )
      Outpop::Utility::Ref_Object::release(v6);
    operator delete(a4);
    --*(_DWORD *)(this + 8);
  }
  result = a2;
  *a2 = a3;
  a2[1] = v5;
  return result;
}
